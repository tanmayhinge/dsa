#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i = 1; i < 101; ++i)
    {

        if(i%15==0){
            cout<<"FizzBuzz"<<endl;
            continue;
        }
        if(i%3 == 0){
            cout<<"Fizz"<<endl;
            continue;
        }
        if(i%5==0){
            cout<<"Buzz"<<endl;
            continue;
        }
        else{
            cout<<i<<endl;
            continue;
        }

    }



    return 0;
}