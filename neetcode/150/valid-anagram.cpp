#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> store;
        for (auto x: s){
            store[x]++;
        }
        for(auto x: t){
            store[x]--;
        }
        for (auto x: store){
            if (x.second != 0){
                return false;
            }
        }
        return true;
    }
};