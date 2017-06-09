//171. Excel Sheet Column Number
//Related to question Excel Sheet Column Title
//
//Given a column title as appear in an Excel sheet, return its corresponding column number.
//
//For example:
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* This problem is transfer a 26-base number to 10-base, get each digit and transfer it and add to the result.
     */
public:
    int titleToNumber(string s) {
        int ans = 0;
        for (char & c : s){
            ans *= 26;
            ans += c - 'A' + 1;
        }
        return ans;
    }
};

int main() {

    return 0;
}