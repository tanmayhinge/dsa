#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lcs(vector<string> v){
    for(auto i: v){
        cout << i;
    }
}

int main(){
    vector<string> stringStore;
    stringStore.push_back("abc");
    stringStore.push_back("bcd");
    cout << lcs(stringStore);
}