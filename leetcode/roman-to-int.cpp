#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {


        unordered_map<char, int> m;
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int ret = 0;

        //reverse(s.begin(), s.end());
        for(int i = 0; i<s.size(); i++){

            if(i+1 < s.size()){

                if(m.find(s[i])->second >= m.find(s[i+1])->second){
                    ret += m.find(s[i])->second;
                }

                else{
                    ret -= m.find(s[i])->second;
                }

            }
            else{
                ret+=m.find(s[i])->second;
            }

        }

        cout<<ret;
        return ret;
    }
};

int main(){
    Solution s;
    int x;
    //cout<<"ok";
    x = s.romanToInt("VIII");
}