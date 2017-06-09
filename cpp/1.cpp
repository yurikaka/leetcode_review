//1. Two Sum
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//Example:
//        Given nums = [2, 7, 11, 15], target = 9,
//
//        Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* We can use a hash map to store indices of numbers one by one, when we get a number i,
     * check if target-i exists in the map. If it exists, we have found an answer and return it,
     * else we add i and its index into the map.
     */
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> miss;
        int len = nums.size();
        for (int i = 0; i < len; ++i){
            if (miss.count(nums[i]))
                return vector<int>{miss[nums[i]],i};
            miss[target-nums[i]] = i;
        }
    }
};

int main() {

    return 0;
}