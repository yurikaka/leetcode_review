//344. Reverse String
//Write a function that takes a string as input and returns the string reversed.
//
//Example:
//        Given s = "hello", return "olleh".

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* For each character in the left half of the string, calculate its new index, and swap the two characters.
     */
public:
    string reverseString(string s) {
        int len = s.size();
        for (int i = 0; i < len/2; ++i){
            swap(s[i],s[len-i-1]);
        }
        return s;
    }
};

int main() {

    return 0;
}