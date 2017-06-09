//371. Sum of Two Integers
//Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
//
//Example:
//        Given a = 1 and b = 2, return 3.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Use xor to get sum of two integers without carries, then use and to get carries, at last add the sum and the carries.
     */
public:
    int getSum(int a, int b) {
        int ans = a;
        while (b){
            ans = a ^ b;
            b = (a & b) << 1;
            a = ans;
        }
        return ans;
    }
};

int main() {

    return 0;
}