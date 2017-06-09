//7. Reverse Integer
//Reverse digits of an integer.
//
//Example1: x = 123, return 321
//Example2: x = -123, return -321
//
//click to show spoilers.
//
//Note:
//        The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
public:
    /* We can take out the lowest digit from x by modular 10, and then insert it into the highest digit of answer,
     * then x should divide 10 for next digit. After process of each digit, we should check if the answer overflows.
     */
    int reverse(int x) {
        int ans = 0;
        while (x){
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
    }
};

int main() {

    return 0;
}