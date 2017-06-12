//242. Valid Anagram
//Given two strings s and t, write a function to determine if t is an anagram of s.
//
//For example,
//        s = "anagram", t = "nagaram", return true.
//s = "rat", t = "car", return false.
//
//Note:
//        You may assume the string contains only lowercase alphabets.
//
//Follow up:
//What if the inputs contain unicode characters? How would you adapt your solution to such case?

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Use an array to store how many times each letter appears in s, and check if the each letter appears for same
     * times in t. If the inputs contain unicode characters, use a hash map instead of the array.
     */
public:
    bool isAnagram(string s, string t) {
        int cnt[26] = {0};
        for (char & c : s)
            ++cnt[c-'a'];
        for (char & c : t)
            --cnt[c-'a'];
        for (int i = 0; i < 26; ++i)
            if (cnt[i])
                return false;
        return true;
    }
};

int main() {

    return 0;
}