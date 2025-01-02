#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        int n = nums.size(); int median = 0;

        nth_element(nums.begin(),nums.begin()+(n/2), nums.end());
        median = nums[n/2];
        
        for(int i = 0; i < n; i++)
            ans+=abs(nums[i] - median);
        
        return ans;
    }
};