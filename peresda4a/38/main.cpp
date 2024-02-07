#include <iostream>
#include <string>
#include <vector>
#include<map>
 
std::vector<std::string> Split(std::string& line, char sep = ' ') {
	std::vector<std::string> Words;							
	Words.push_back("");
	int count = 0;
	for (const auto& elem : line) {
		if (elem == sep) {
			count ++;
			Words.push_back("");
		}
		if (elem != sep) {
			 
			std::string s(1, elem);
			Words[count] += s;
		}
	}
	return Words;
} 

std::map<std::string,int> Data(int count){
	std::map<std::string,int> AllUsers;
	for (int i = 0; i < count; i++) {
		std::string temp;
		std::cin >> temp;
		std::vector<std::string> info = Split(temp, ';');
		std::string login = info[0];
		int balance = std::stoi(info[1]);
		AllUsers[login] = balance;
	}
	return AllUsers;
}

void FindInfo(int n, std::map<std::string,int>& data) {
	for (int i = 0; i < n; i++) {
		std::string temp;
		std::cin >> temp;
		std::cout << data[temp] << " ";
	}
}

int main() {
	int n;
	std::cin >> n;
	std::map<std::string,int> data = Data(n);
	
	int m;
	std::cin >> m;
	FindInfo(m, data);

	
}