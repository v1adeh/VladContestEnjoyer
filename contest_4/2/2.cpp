#include <iostream>
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    ifstream i("data.json");
    json data = json::parse(i);

    for (auto& project : data) {
        for (auto& task : project["tasks"]) {
            if (task["completed"] && task["user_id"] == n) {
                count++;
            }
        }
    }
    cout << count;
        
}
