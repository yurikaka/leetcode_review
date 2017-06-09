//283. Move Zeroes
//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
//
//Note:
//        You must do this in-place without making a copy of the array.
//Minimize the total number of operations.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Iterate the array, delete zeros and count how many zeros have been deleted. At last, add zeros to the end of the array.
     */
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for (auto i = nums.begin(); i != nums.end();){
            if (*i == 0) {
                nums.erase(i);
                ++cnt;
            } else
                ++i;
        }
        if (cnt){
            vector<int> zero(cnt);
            nums.insert(nums.end(),zero.begin(),zero.end());
        }
        return;
    }
};

int main() {

    return 0;
}