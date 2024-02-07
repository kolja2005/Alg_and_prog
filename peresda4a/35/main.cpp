#include <iostream>
#include <string>


bool is_digit(char elem) {
	return 48 <= elem && elem <= 57;
}


void ReString(std::string& stack, std::string& output) {
	while (stack[0] != '(' && !stack.empty()) {
		output += " "+ std::string(1, stack[0])   ;
		stack = stack.substr(1);
	}
	stack = stack.substr(1);
	
}

int priority(char elem) {
	if (elem == '^') return 3;
	else if (elem == '/' || elem == '*' || elem =='%') return 2;
	else if (elem == '-' || elem == '+') return 1;
	return 0;
}
bool is_operator(char elem) {
	return elem == '+' || elem == '-' || elem == '*' || elem == '/' || elem == '%'||elem=='^';
}
 
int main() {

	std::string expression;

	std::cin >> expression;
	std::string output = "";
	std::string stack = "";
	for (auto& elem : expression) {
		std::string temp(1, elem);
		if (temp == "(") stack = '(' + stack;
		else if (temp == ")") ReString(stack, output);
		else if (is_operator(elem)) {
			output += " ";
			while (!stack.empty() && priority(elem) <= priority(stack[0])) {
				if (elem == stack[0] && elem == '^') break;

				output +=  std::string(1, stack[0])+" ";
				stack = stack.substr(1);
			}
			stack = temp + stack;
		}
		else if (is_digit(elem)) {
			output += std::string(1, elem);
		}
	}
	std::cout << output<<" ";
	for (auto& c: stack){
		std::cout << c << " ";
	}
}
 