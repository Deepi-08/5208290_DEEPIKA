                                     //Diagonal Difference//
 

#include<stdio.h>
int main(){
    int n,i,j,diagonal1=0,diagonal2=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    if(i == j){
        diagonal1 += arr[i][j];
    }
    if(i+j == n-1){
         diagonal2 += arr[i][j];
    }
}
    }
    printf("%d",abs(diagonal1 - diagonal2));
}