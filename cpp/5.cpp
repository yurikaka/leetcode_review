//5. Longest Palindromic Substring
//Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
//
//Example:
//
//        Input: "babad"
//
//Output: "bab"
//
//Note: "aba" is also a valid answer.
//Example:
//
//        Input: "cbbd"
//
//Output: "bb"

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* A palindromic string has a center, it can be a single character, or several same characters. We can make each
     * character, or continuous same characters be the center, and find out the longest palindromic substring.
     */
public:
    string longestPalindrome(string s) {
        int len = s.size(), left, ans = 0;
        if (len < 2)
            return s;
        for (int i = 0; i < len;){
            if (len - i - 1 <= ans / 2)
                break;
            int j = i - 1;
            int k = i + 1;
            while (k < len && s[k] == s[i])
                ++k;
            i = k;
            while (j >=0 && k < len && s[j] == s[k]){
                --j;
                ++k;
            }
            if (k - j - 1 > ans){
                ans = k - j - 1;
                left = j + 1;
            }
        }
        return s.substr(left,ans);
    }
};

int main() {

    return 0;
}