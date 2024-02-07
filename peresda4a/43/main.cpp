 
#include <iostream>
#include <fstream>

#include "json.hpp"
using json = nlohmann::json;

int main()
{
    int n, count = 0;
    std::cin >> n;

    std::ifstream i("data.json");
    json data = json::parse(i);
    for (auto& elem : data) {
        for (auto& task : elem["tasks"]) {
            if (task["completed"] && task["user_id"] == n) {
                count++;
            }
        }
    }
    std::cout << count;
        
}