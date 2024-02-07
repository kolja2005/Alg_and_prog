#include <iostream>
#include <string>

std::string get_string(char end = '\n') {
	std::string text;
	std::getline(std::cin, text, end);
	return text;
}
bool predicate(std::string text) {
	int count_1 = 0, count_2 = 0, count_3=0;
	std::string prev_sym = "";
	for (char elem : text) {
		if (count_1 < 0 || count_2 < 0 || count_3 < 0) return false;
		if (elem == '(') {
			count_1++;
			prev_sym = ")"+ prev_sym;
			continue;
		}
		if (elem == ')') {
			count_1--;
			if (prev_sym[0] != elem) return false;
			prev_sym = prev_sym.substr(1);
			continue;
		}

		if (elem == '[') {
			count_2++;
			prev_sym = "]"+ prev_sym;
			continue;

		}
		if (elem == ']') {
			count_2--;
			if (prev_sym[0] != elem) return false;
			prev_sym = prev_sym.substr(1);
			continue;

		}
		if (elem == '{') {
			count_3++;
			prev_sym = "}"+ prev_sym;
			continue;

		}
		if (elem == '}') {
			count_3--;
			if (prev_sym[0] != elem) return false;
			prev_sym = prev_sym.substr(1);
			continue;

		}

	}
	return count_1 == 0 && count_2 == 0 && count_3 == 0;
}

int main() {
	std::string text = get_string('!');
	predicate(text) ? std::cout << "YES" : std::cout << "NO";
 
	 
	 
}