/*
    Digital images, particularly those radioed back from spacecraft, may have glitches. Add
        a de-glitching function to programming exercise 12. It should compare each value to its
        immediate neighbors to the left and right, above and below. If the value differs by more
        than 1 from each of its neighbors, replace the value with the average of the neighboring
        values. You should round the average to the nearest integer value. Note that the points
        along the boundaries have fewer than four neighbors, so they require special handling.
*/

#include <stdio.h>
#include <stdlib.h>

void deGlitch(int row, int col, char ar[row][col]);


int main(void){
    char pic[20][31];

    int ch;
    FILE *pf = fopen("pict.txt", "r");
    for(int i = 0; i < 20; ++i){
        for(int j = 0; j < 30; ++j){
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
        pic[i][30] = '\0';
    }
    fclose(pf);
    deGlitch(20, 31, pic);

    for(int i = 0; i < 20; ++i){
        printf("%s\n", pic[i]);
    }

    return 0;
}

void deGlitch(int row, int cl, char ar[row][cl]){
    int col = cl-1;
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            int state = 0;
            // center
            if(i > 0 && i < row-1 && j > 0 && j < col-1){
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(state == 4){
                    ar[i][j] = (ar[i-1][j] + ar[i+1][j] + ar[i][j-1] + ar[i][j+1]) / state;
                }
                continue;
            }

            // top left corner
            if(i == 0 && j == 0){
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(state == 2){
                    ar[i][j] = (ar[i][j+1] + ar[i+1][j]) / state;
                }
                continue;
            }
            // top right corner
            if(i == 0 && j == col-1){
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(state == 2){
                    ar[i][j] = (ar[i][j-1] + ar[i+1][j]) / state;
                }
                continue;
            }

            // top line
            if(i == 0 && j > 0 && j < col-1){
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(state == 3){
                    ar[i][j] = (ar[i][j-1] + ar[i][j+1] + ar[i+1][j]) / state;
                }
                continue;
            }

            // left collumn
            if(i > 0 && i < row-1 && j == 0){
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(state == 3){
                    ar[i][j] = (ar[i+1][j] + ar[i-1][j] + ar[i][j+1]) / state;
                }
                continue;
            }

            // right collumn
            if(i > 0 && i < row-1 && j == col-1){
                if(abs(ar[i][j] - ar[i+1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(state == 3){
                    ar[i][j] = (ar[i+1][j] + ar[i-1][j] + ar[i][j-1]) / state;
                }
                continue;
            }

            // bottom left corner
            if(i == row-1 && j == 0){
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(state == 2){
                    ar[i][j] = (ar[i-1][j] + ar[i][j+1]) / state;
                }
                continue;
            }

            // bottom right corner
            if(i == row-1 && j == col-1){
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(state == 2){
                    ar[i][j] = (ar[i-1][j] + ar[i][j-1]) / state;
                }
                continue;
            }

            // bottom line
            if(i == row-1 && j > 0 && j < col-1){
                if(abs(ar[i][j] - ar[i][j-1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i][j+1]) > 1)  state++;
                if(abs(ar[i][j] - ar[i-1][j]) > 1)  state++;
                if(state == 3){
                    ar[i][j] = (ar[i][j-1] + ar[i][j+1] + ar[i-1][j]) / state;
                }
            }
        }
    }
}