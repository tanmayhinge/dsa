#include <iostream>


using namespace std;

void add(int a [], int n){
    for(int i = 0; i< n; i++){
        a[i] = a[i] + 1;
    }
}

int main()
{

int a[] = {1, 2, 3, 4, 5};
add(a, 5);
for(int i = 0; i < 5; i++){
    cout<<a[i]<<endl;
}

}