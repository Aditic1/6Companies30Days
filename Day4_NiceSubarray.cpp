#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> areaSum;
    vector<vector<int>> rects;

    // Calculate area
    int area(const vector<int>& r) {
        return (r[2] - r[0] + 1) * (r[3] - r[1] + 1);
    }

    // Constructor
    Solution(vector<vector<int>>& rects) {
        this->rects = rects;
        srand(time(0)); // Seed the random generator

        for (int i = 0; i < rects.size(); i++)
            areaSum.push_back(area(rects[i]) + (areaSum.empty() ? 0 : areaSum.back()));
    }   

    // Pick a random point
    vector<int> pick() {
        // Pick a rectangle based on weighted area
        int index = rand() % areaSum.back();
        auto it = upper_bound(areaSum.begin(), areaSum.end(), index);
        int id = it - areaSum.begin();

        // Pick a random point inside the chosen rectangle
        auto r = rects[id];
        return {
            rand() % (r[2] - r[0] + 1) + r[0],
            rand() % (r[3] - r[1] + 1) + r[1]
        };
    }
};