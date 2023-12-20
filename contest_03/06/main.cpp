#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, long> balances;

	int n;
	std::cin >> n;

	std::string data;
	for (int i = 0; i < n; i++) {
		std::cin >> data;

		size_t tsz_index = data.find(";");

		std::string login = data.substr(0, tsz_index);
		std::string passw = data.substr(tsz_index + 1);

		balances[login] = std::stol(passw);

		


	}
	int m;
	std::cin >> m;
	std::string log;
	for (int i = 0; i < m; i++) {
		std::cin >> log;
		std::cout << balances[log] << " ";
	}
}