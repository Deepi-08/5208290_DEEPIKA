                                                 //Lonely Integer//

#include<stdio.h>
int main(){
    int n,i,result=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    result ^= a[i];
    }
            printf("%d",result);
        }