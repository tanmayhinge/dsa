#include<stdio.h>

int main(){

    int t,sum=0;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d", &n);
        // for(int i=0; i<=n; ++i){
        //     if(i%4==0 || i%6==0)
        //         sum=sum+i;
        // }
        for(i=4; i<=n; i=i+2){
            if(i%4==0||i%6==0){
                sum=sum+i;
            }
        }
    }
    printf("%d\n",sum);
}
