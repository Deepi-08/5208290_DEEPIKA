                                           //courtingsort//
#include <stdio.h>

int main() {
    int n, i, val;
    scanf("%d", &n);  

    int freq[100] = {0};  

    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        freq[val]++;  
    }

    for (i = 0; i < 100; i++) {
        printf("%d ", freq[i]);  
    }

    return 0;
}