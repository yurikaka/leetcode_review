//3. Longest Substring Without Repeating Characters
//Given a string, find the length of the longest substring without repeating characters.
//
//Examples:
//
//        Given "abcabcbb", the answer is "abc", which the length is 3.
//
//Given "bbbbb", the answer is "b", with the length of 1.
//
//Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* We can iterate the string by once, find out the maximal length of substrings we wanted end with each element.
     * We can use an array to store the indices of each character when they appear last time, and use an integer to
     * store the index of the left end of the longest substring we wanted end with the element now iterating.
     * When we iterate to an character c, the index of the left end of the longest substring wanted won't smaller that
     * the index of the position where c appears last time or the index of the left end of the longest substring wanted
     * end with last character, so we can get the maximal length of substring wanted end with c with the two indices.
     */
public:
    int lengthOfLongestSubstring(string s) {
        int last[128];
        memset(last,-1,sizeof(last));
        int len = s.size(), ans = 0, dup = -1;
        for (int i = 0; i < len; ++i){
            ans = max(ans,i-max(last[s[i]],dup));
            dup = max(dup,last[s[i]]);
            last[s[i]] = i;
        }
        return ans;
    }
};

int main() {

    return 0;
}