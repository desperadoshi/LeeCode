/*
Write a function that takes a string as input and returns the string reversed.
Example:
Given s = "hello", return "olleh".
*/
#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    string reverseString(string s) {
        string Reverse = s;
        for (int i = 0; i < s.size(); i++) {
            Reverse[i] = s[s.size()-1-i];
        }
        return Reverse;
    }
};

int main(){
    Solution test;
    std::cout << test.reverseString("hello") << std::endl;
}