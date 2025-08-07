                                         //Pangrams//
                  #include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char s[100000];
    int letters[26]={0};
    int i;
    fgets(s,sizeof(s),stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            letters[s[i] - 'a'] = 1;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            letters[s[i] - 'A'] = 1;
        }
    }
    for(i=0;i<26;i++){
        if(letters[i] == 0){
            printf("not pangram\n");
            return 0;
        }
    }
    printf("pangram\n");
    return 0;
}