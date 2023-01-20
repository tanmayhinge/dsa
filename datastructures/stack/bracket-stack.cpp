#include<bits/stdc++.h>

using namespace std;


bool Solve(string s){

    stack<char>sT;
    char x;
    for (int i = 0; i < s.size(); ++i){
        if(s[i]=='('||'['||'{'){
            sT.push(s[i]);
            continue;
        }
        if(sT.empty()){
            return false;
        }
            switch (s[i]){

                case ')':
                    x = sT.top();
                    sT.pop();
                    if(x=='{'||'[')   
                        return false;
                    break;

                case '}':
                    x = sT.top();
                    sT.pop();
                    if(x=='('||'[')   
                        return false;
                    break;

                case ']':
                    x = sT.top();
                    sT.pop();
                    if(x=='{'||'(')   
                        return false;
                    break;
            }
        }
    return (sT.empty());
}

int main(){
    string s;
    cin>>s;

    //Solve(s);
    if(Solve(s))
        cout<<"Balanced";
    else    
        cout<<"Invalid";

    return 0;
}