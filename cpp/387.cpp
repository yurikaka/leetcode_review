//387. First Unique Character in a String
//Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
//
//Examples:
//
//        s = "leetcode"
//return 0.
//
//s = "loveleetcode",
//return 2.
//Note: You may assume the string contain only lowercase letters.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Use an array to store indices. At first, set each letter's index to a impossible value, then iterate the string.
     * When we reach a letter has never appeared, set it's index to current index. If we reach a letter has appeared,
     * set it's index to another impossible value. At last, find the minimal index.
     */
public:
    int firstUniqChar(string s) {
        unsigned index[26];
        memset(index,UINT32_MAX,sizeof(index));
        int len = s.size();
        for (int i = 0; i < len; ++i){
            if (index[s[i]-'a'] == UINT32_MAX)
                index[s[i]-'a'] = i;
            else
                index[s[i]-'a'] = UINT32_MAX - 1;
        }
        unsigned ans = UINT32_MAX;
        for (int i = 0; i < 26; ++i)
            ans = min(ans,index[i]);
        return ans < INT_MAX ? ans : -1;
    }
};

int main() {

    return 0;
}