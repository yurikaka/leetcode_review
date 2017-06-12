//454. 4Sum II
//Given four lists A, B, C, D of integer values, compute how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero.
//
//To make problem a bit easier, all A, B, C, D have same length of N where 0 ≤ N ≤ 500. All integers are in the range of -228 to 228 - 1 and the result is guaranteed to be at most 231 - 1.
//
//Example:
//
//        Input:
//A = [ 1, 2]
//B = [-2,-1]
//C = [-1, 2]
//D = [ 0, 2]
//
//Output:
//2
//
//Explanation:
//        The two tuples are:
//1. (0, 0, 0, 1) -> A[0] + B[0] + C[0] + D[1] = 1 + (-2) + (-1) + 2 = 0
//2. (1, 1, 0, 0) -> A[1] + B[1] + C[0] + D[0] = 2 + (-1) + (-1) + 0 = 0

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
    /* We can find all two-tuples <i,j> and use a map to store all kinds of A[i]+B[j] and how many times each sum appears.
     * Then we can find all two-tuples <k,l> and for each <k,l>, find out how many kinds of <i,j> makes that
     * A[i]+B[j] = -C[k]-D[l], add it to the answer.
     */
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> m;
        int ans = 0;
        for (int & i : A)
            for (int & j : B)
                ++m[i+j];
        for (int & i : C)
            for (int & j : D){
                if (m.count(-i-j))
                    ans += m[-i-j];
            }
        return ans;
    }
};

int main() {

    return 0;
}