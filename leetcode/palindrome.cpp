#include <string>
#include <sstream>
#include <iostream>

bool ispalindrome(int& num) {
    bool result = false;
    if (num<0) {
        return result;
    }
    std::stringstream ss;
    ss << num;
    std::string s = ss.str();

    std::string s2 = s;

    for (size_t i = s2.size()-1; i>0; --i) {
        if (s2[i] != s[s2.size()-1-i]) {
            return result;
        }
    }

    return true;
}


int main() {

    int num1 = -121;
    int num2 = 121;
    int num3 = 123;
    std::cout<< ispalindrome(num1) << ispalindrome(num2) << ispalindrome(num3) << std::endl;
}
