//384. Shuffle an Array
//Shuffle a set of numbers without duplicates.
//
//Example:
//
//// Init an array with set 1, 2, and 3.
//int[] nums = {1,2,3};
//Solution solution = new Solution(nums);
//
//// Shuffle the array [1,2,3] and return its result. Any permutation of [1,2,3] must equally likely to be returned.
//solution.shuffle();
//
//// Resets the array back to its original configuration [1,2,3].
//solution.reset();
//
//// Returns the random shuffling of array [1,2,3].
//solution.shuffle();

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Store the original array. When reset, set answer to the original array and return it. When shuffle, iterate last
     * answer, for each element, generate a random index which is not bigger than current element's and swap them.
     */
public:
    vector<int> ori, ans;
    int len;
    Solution(vector<int> nums) {
        ori = nums;
        ans = ori;
        len = ori.size();
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        ans = ori;
        return ans;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for (int i = 1; i < len; ++i){
            int j = rand()%(i+1);
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */

int main() {

    return 0;
}