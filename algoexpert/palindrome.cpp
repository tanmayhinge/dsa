#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {

    string rev = str;
    reverse(str.begin(), str.end());
    for(int i = 0; i< rev.size(); i++){
        if(rev[i]!=str[i]){
            return false;
        }
    }

  
  return true;
}