#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int>pq;

        if(nums.size()==1)
            return;
        for(int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);
        
        int i = 1,n=nums.size();
        while(!pq.empty()){
            nums[i] = pq.top();
            pq.pop();
            i+=2;
            if(i>=n)
                i = 0;
        }
    }
};