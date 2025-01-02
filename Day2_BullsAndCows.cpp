#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0, B = 0;
        vector<int>secret_freq(10),guess_freq(10);
        for(int i = 0; i < secret.size(); i++){
            if(secret[i]==guess[i])
                A++;
            else{
                secret_freq[secret[i]-'0']++;
                guess_freq[guess[i]-'0']++;
            }
        }

        for(int i = 0; i < 10; i++)
            B+=min(secret_freq[i],guess_freq[i]);
        string ans = to_string(A)+"A"+to_string(B)+"B";
        return ans; 
    }
};