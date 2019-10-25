/*
    Write a function called string_in() that takes two string pointers as arguments. If
        the second string is contained in the first string, have the function return the address
        at which the contained string begins. For instance, string_in("hats", "at") would
        return the address of the a in hats . Otherwise, have the function return the null pointer.
        Test the function in a complete program that uses a loop to provide input values for
        feeding to the function.
*/

#include <stdio.h>

char* string_in(char *s1, char *s2);


int main(void){
    char str1[20],
        str2[20];

    printf("Enter 2 words:\n");
    scanf("%20s", str1);
    while(scanf("%20s", str2) > 0){
        char *str3 = string_in(str1, str2);
        if(str3){
            puts(str3);
        }

        printf("Enter 2 words:\n");
        scanf("%20s", str1);
    }


    return 0;
}

char* string_in(char *s1, char *s2){
    int i=0;

    while(*(s1+i) != '\0'){
        int j=0;

        if(*(s1+i) == *(s2+j)){
            int k=i,
                cond = 1;
            while(*(s2+j) != '\0'){
                if(*(s1+k) != *(s2+j)){
                    cond = 0;
                    break;
                }
                ++j;
                ++k;
            }

            if(cond){
                printf("%d\n", i);
                return s1+i;
            }
        }

        ++i;
    }


    return NULL;
}