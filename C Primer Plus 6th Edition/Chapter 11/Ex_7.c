/*
    The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1 , truncating
        s2 or padding it with extra null characters as necessary. The target string may not be
        null-terminated if the length of s2 is n or more. The function returns s1 . Write your own
        version of this function; call it mystrncpy() . Test the function in a complete program
        that uses a loop to provide input values for feeding to the function.
*/

#include <stdio.h>

char* copyNStr(char *s1, const char *s2, int n);


int main(void){
    char str1[20],
        str2[20];
    int nr;

    printf("Enter a word and a number(<20):\n");
    scanf("%20s", str2);
    while(scanf("%d", &nr) == 1){
        puts(copyNStr(str1, str2, nr));
        printf("Enter a word and a number(<20):\n");
        scanf("%20s", str2);
    }


    return 0;
}

char* copyNStr(char *s1, const char *s2, int n){
    int i = 0;
    for(; i<n && *(s2+i) != '\0'; ++i){
        *(s1+i) = *(s2+i);
    }
    *(s1+i) = '\0';


    return s1;
}