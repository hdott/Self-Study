/*
    Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard
        arrays.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
    if(argc != 2){
        fprintf(stderr, "Not enough arguments!\n");
        exit(EXIT_FAILURE);
    }

    FILE *pf;
    if(!(pf = fopen(argv[1], "r"))){
        fprintf(stderr, "Unable to Open file[%s]\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int state = 1,
        ch,
        row = 0,
        col = 0;
    while(fscanf(pf, "%d", &ch) == 1){
        if(state && (ch != '\n')){
            col++;
        }
        if(ch == '\n'){
            row++;
            state = 0;
        }
    }
    rewind(pf);
    char pic[row][col+1];
    
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if(fscanf(pf, "%d", &ch) == 1){
                switch(ch){
                    case 0:
                        pic[i][j] = ' ';
                        break;
                    case 1:
                        pic[i][j] = '.';
                        break;
                    case 2:
                        pic[i][j] = '\'';
                        break;
                    case 3:
                        pic[i][j] = ':';
                        break;
                    case 4:
                        pic[i][j] = '~';
                        break;
                    case 5:
                        pic[i][j] = '*';
                        break;
                    case 6:
                        pic[i][j] = '=';
                        break;
                    case 7:
                        pic[i][j] = '[';
                        break;
                    case 8:
                        pic[i][j] = '%';
                        break;
                    case 9:
                        pic[i][j] = '#';
                        break;
                }
            }
        }
        pic[i][col] = '\0';
    }
    fclose(pf);

    for(int i = 0; i < row; ++i){
        printf("%s\n", pic[i]);
    }


    return 0;
}