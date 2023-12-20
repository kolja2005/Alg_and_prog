#include <iostream>
#include <set>

int main() {

	int n;
	int m;
	std::multiset<int> set;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> m;
		set.insert(m);
	}

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> m;
		set.insert(m);
	}

	for (auto& item : set) {
		std::cout << item << " ";
	}

	return 0;
}