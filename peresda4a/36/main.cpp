#include <iostream>
#include <vector>
#include <map>
#include<algorithm>

std::map<std::string, int> push_to_vector(int n, std::vector<std::string>& words) {
	std::map<std::string, int> count_of_words;
	for (int i=0; i < n; i++) {
		std::string temp;
		std::cin >> temp;
		count_of_words[temp] += 1;
		words.push_back(temp);
	}
	return count_of_words;
}

std::vector<std::string> intersection(std::map<std::string, int>& first, std::map<std::string, int>& second) {
	std::vector<std::string> result;
	for (const auto& key : first) {
		if (second.count(key.first) == 1) result.push_back(key.first);
	}
	return result;
}

int main() {
	int n, m;
 	std::cin >> n;
	std::vector<std::string> first_words;
	std::vector<std::string> second_words;
	std::map<std::string, int> all_from_first, all_from_second;

	all_from_first = push_to_vector(n, first_words);
	std::cin >> m;
	all_from_second = push_to_vector(m, second_words);
	
	std::vector<std::string> result;
	result = intersection(all_from_first, all_from_second);
	std::sort(result.begin(), result.end());

	if (result.size() == 0) std::cout << -1;
 	else {
		for (const auto& elem : result) {
			std::cout << elem << " ";
		}
	}

}