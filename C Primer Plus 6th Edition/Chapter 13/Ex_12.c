/*
    Create a text file consisting of 20 rows of 30 integers. The integers should be in the range
        0–9 and be separated by spaces. The file is a digital representation of a picture, with
        the values 0 through 9 representing increasing levels of darkness. Write a program that
        reads the contents of the file into a 20-by-30 array of int s. In a crude approach toward
        converting this digital representation to a picture, have the program use the values
        in this array to initialize a 20-by-31 array of char s, with a 0 value corresponding to a
        space character, a 1 value to the period character, and so on, with each larger number
        represented by a character that occupies more space. For example, you might use # to
        represent 9. The last character (the 31st) in each row should be a null character, making
        it an array of 20 strings. Have the program display the resulting picture (that is, print the
        strings) and also store the result in a text file. For example, suppose you start with this
        data:
    0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 2 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 5 2 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 1 9 8 5 4 5 2 0 0 0 0 0 0 0 0 0
    0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 0 4 5 2 0 0 0 0 0 0 0 0
    0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 4 5 2 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 1 8 5 0 0 0 4 5 2 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 4 5 2 0 0 0 0 0
    5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
    8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
    9 9 9 9 0 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 3 9 9 9 9 9 9
    8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
    5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
    0 0 0 0 2 2 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
    0 0 0 0 3 3 0 0 0 0 0 0 5 8 9 9 8 5 0 5 6 1 1 1 1 1 6 5 0 0
    0 0 0 0 4 4 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
    0 0 0 0 5 5 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
        For one particular choice of output characters, the output looks like this:
      #         *%##%*'           
        #       *%##%**'          
                *%.#%*~*'         
        #       *%##%* ~*'        
    #         *%##%*  ~*'       
                *%#.%*   ~*'      
                *%##%*    ~*'     
    *************%##%*************
    %%%%%%%%%%%%*%##%*%%%%%%%%%%%%
    #### ##################:######
    %%%%%%%%%%%%*%##%*%%%%%%%%%%%%
    *************%##%*************
                *%##%*            
                *%##%*    ==      
        ''      *%##%*  *=  =*    
        ::      *%##%* *=.....=*  
        ~~      *%##%*  *=  =*    
        **      *%##%*    ==      
                *%##%*            
                *%##%*   
*/

#include <stdio.h>
#include <stdlib.h>


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

    for(int i = 0; i < 20; ++i){
        printf("%s\n", pic[i]);
    }


    return 0;
}