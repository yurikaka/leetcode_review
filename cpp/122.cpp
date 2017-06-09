//122. Best Time to Buy and Sell Stock II
//Say you have an array for which the ith element is the price of a given stock on day i.
//
//Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* Consider about the price gap of two continuous days, if the gap is positive, it can be a part of profit.
     */
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len < 2)
            return 0;
        int ans = 0;
        for (int i = 1; i < len; ++i)
            if (prices[i]>prices[i-1])
                ans += prices[i] - prices[i-1];
        return ans;
    }
};

int main() {

    return 0;
}