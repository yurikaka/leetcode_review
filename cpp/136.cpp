//136. Single Number
//Given an array of integers, every element appears twice except for one. Find that single one.
//
//Note:
//        Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Because of XOR operator is commutative, and an integer xor itself is zero, so the xor result of each integer in
     * nums is the single number.
     */
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto & i : nums)
            ans ^= i;
        return ans;
    }
};

int main() {

    return 0;
}