#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int helper(vector<vector<int>>& img, int x, int y){
        int count = 0; int sum = 0;
        int m = img.size();
        int n = img[0].size();

        for(int x_pointer = -1; x_pointer<=1; x_pointer++){
            for(int y_pointer = -1; y_pointer <=1; y_pointer++){
                int X = x + x_pointer;
                int Y = y + y_pointer;

                if(X<0 || X>=m || Y < 0 || Y >= n)
                    continue;
                sum+=img[X][Y];
                count++;
            }
        }
        return sum/count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        // arr[i][j], arr[i][j+1], arr[i][j-1]. arr[i+1][j], arr[i+1][j+1], arr[i+1][j-1] arr[i-1][j], arr[i-1][j-1], arr[i-1][j+1]

        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ans[i][j] = helper(img,i,j);
            }
        }
        return ans;
    }
};