//347. Top K Frequent Elements
//Given a non-empty array of integers, return the k most frequent elements.
//
//For example,
//        Given [1,1,1,2,2,3] and k = 2, return [1,2].
//
//Note:
//        You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
//Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Pass the array by once, use a map to store how many times each number appears. Put the numbers and their appear
     * time into a heap. And get the maximal k numbers from the heap.
     */
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for (int & i : nums)
            ++m[i];
        priority_queue<pair<int,int>> p;
        for (auto & i : m)
            p.push({i.second,i.first});
        vector<int> ans(k);
        for (int i = 0 ; i < k; ++i){
            ans[i] = p.top().second;
            p.pop();
        }
        return ans;
    }
};

int main() {

    return 0;
}