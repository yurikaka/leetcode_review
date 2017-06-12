//169. Majority Element
//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
//
//You may assume that the array is non-empty and the majority element always exist in the array.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* We can use a sign integer cnt, if we meet current alternative answer again, cnt will plus 1, if we meet another
     * element, cnt will minus 1. When cnt is 0, make next element be the alternative answer. Each time the majority element
     * appears, itself's cnt will increase by 1 or other element's cnt will decrease by 1, so because majority element
     * appears more than ⌊ n/2 ⌋ times, at last, the alternative answer will be the majority element.
     */
public:
    int majorityElement(vector<int>& nums) {
        int ans, cnt = 0;
        for (auto & i : nums){
            if (!cnt){
                ++cnt;
                ans = i;
            } else if (i == ans)
                ++cnt;
            else
                --cnt;
        }
        return ans;
    }
};

int main() {

    return 0;
}