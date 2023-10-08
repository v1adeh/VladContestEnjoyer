#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a , string b) {                        
    int ac = 0;
    int bc = 0;

    for(int i = 0; i < a.size(); i++) {                    
        if(a[i] == '1') ac += 1;
    }
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == '1') bc += 1;
    }

    if( ac != bc ) {
        return ac > bc;
    }
    else {
        return stoi(a) < stoi(b);                              //stoi переводит число обратно в инт, т.к в функции мы используем string
    }
}a

int func(){
    int count;
    std::cin >> count;
    
    std::vector<std::string> nums(count);
    for(auto& line : nums) std::cin >> line;
    
    std::sort(nums.begin(), nums.end(), compare);
    
    for(auto& line : nums) std::cout << line << ' ';
}
