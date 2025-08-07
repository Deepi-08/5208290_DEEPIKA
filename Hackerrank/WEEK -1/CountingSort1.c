#include <stdio.h>
#include <stdlib.h>
int sort(const void*a,const void*b){
    return(*(int*)a - *(int *)b);
}
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int fre[100]={0};
    qsort(a,n,sizeof(int),sort);
    for(i=0;i<n;i++){
        fre[a[i]]++;
    }
    for(i=0;i<n;i++){
        printf("%d ",fre[i]);
    }
    return 0;
    
}
