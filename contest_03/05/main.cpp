#include <iostream>
#include <map>
#include <set>

int main() {

	int n;
	std::cin >> n;
	std::set<std::string> set;
	std::map<std::string, int> words;
	std::string w;
	for (int i = 0; i < n; i++) {
		std::cin >> w;
		words[w]++;
	}
	int max = -1;
	for (auto& word : words) {
		if (max < word.second) {
			set.clear();
			set.insert(word.first);
			max = word.second;
		}
		else if (max == word.second) {
			set.insert(word.first);
		}
	}
	for (auto& item : set) {
		std::cout << item << " ";
	}
	return 0;
}