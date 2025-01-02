#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>pq;

        for(int i = 1; i <=n; i++){
            pq.push(i);
        }

        int i = 1;
        while(pq.size()!=1){
            int current = pq.front();
            pq.pop();
            if(i%k!=0){
                pq.push(current);
            }
            i++;
        }
        return pq.front();
    }
};