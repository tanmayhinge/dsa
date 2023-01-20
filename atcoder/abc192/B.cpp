#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int count=0;
    cin >> s;
    for (int i=0; i<s.length(); i=i+2)
    {
        if(islower(s.at(i))){
            ++count;
        }
    }
    if(count==(s.length()/2) || count==((s.length()/2)+1)){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    
}