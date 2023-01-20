#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

int main(){

    int r,o,c;
    cin>>r>>o>>c;
    int x = 20-o;
    int y = x*6;
    int max = y*6;
    if(c+max > r){
        cout << "YES";
    }
    else{
        cout<< "NO";
    }
}
