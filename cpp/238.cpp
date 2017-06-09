//238. Product of Array Except Self
//Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
//
//Solve it without division and in O(n).
//
//For example, given [1,2,3,4], return [24,12,8,6].
//
//Follow up:
//Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* At first, pass the array from left to right and for each integer we can know the product of integers on its left.
     * Then pass the array from right to left and for each integer we can know the product of integers on its right.
     * For each integer, product of the two products is the answer.
     */
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size(), temp = 1;
        vector<int> ans(len);
        for (int i = 0; i < len; ++i){
            ans[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
        for (int i = len - 1; i >= 0; --i){
            ans[i] *= temp;
            temp *= nums[i];
        }
        return ans;
    }
};

int main() {

    return 0;
}