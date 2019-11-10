/*
    The Colossus Airlines fleet consists of one plane with a seating capacity of 12. It makes
        one flight daily. Write a seating reservation program with the following features:
    a. The program uses an array of 12 structures. Each structure should hold a seat
    identification number, a marker that indicates whether the seat is assigned, the last
    name of the seat holder, and the first name of the seat holder.
    b. The program displays the following menu:
    To choose a function, enter its letter label:
    a) Show number of empty seats
    b) Show list of empty seats
    c) Show alphabetical list of seats
    d) Assign a customer to a seat assignment
    e) Delete a seat assignment
    f) Quit
    c. The program successfully executes the promises of its menu. Choices d) and e)
    require additional input, and each should enable the user to abort an entry.
    d. After executing a particular function, the program shows the menu again, except
    for choice f) .
    e. Data is saved in a file between runs. When the program is restarted, it first loads in
    the data, if any, from the file.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 12

typedef char String[50];
typedef struct Seat{
    int seat_ID;
    int isAssigned;
    String last_name;
    String first_name;
} Seat;

void initPlane(Seat plane[]);
int printMenu_getOpt(int *first);
void init_from_file(Seat plane[], FILE *pf);
int showNrOfEmptySeats(const Seat plane[]);
void showListOfEmptySeats(const Seat plane[]);
void printListAlphabetically(const Seat plane[]);
void assignCustomer(Seat plane[]);
void deleteSeatAssignment(Seat plane[]);


int main(void){
    Seat *plane = (Seat*) malloc(MAX * sizeof(Seat));
    initPlane(plane);
    int first = 1;

    FILE *pf;
    if(!(pf = fopen("plane.txt", "rb"))){
        fprintf(stderr, "Unable to open file [plane.txt]\n");
        fclose(pf);
    } else{
        init_from_file(plane, pf);
        fclose(pf);
    }

    int opt;
    while((opt = printMenu_getOpt(&first)) != 6){
        switch(opt){
            case 1:
                printf("\nNumber of empty seats -> %d\n", showNrOfEmptySeats(plane));
                break;
            case 2:
                printf("\nList of empty seats:\n");
                showListOfEmptySeats(plane);
                break;
            case 3:
                printf("\nAlphabetical list of seats:\n");
                printListAlphabetically(plane);
                break;
            case 4:
                assignCustomer(plane);
                break;
            case 5:
                deleteSeatAssignment(plane);
                break;
            case 6:
                pf = fopen("plane.txt", "wb");
                fwrite(plane, sizeof(plane), MAX, pf);
                fclose(pf);
                free(plane);
                exit(EXIT_SUCCESS);
                break;
        }
    }

    pf = fopen("plane.txt", "wb");
    fwrite(plane, sizeof(Seat), MAX, pf);
    fclose(pf);
    free(plane);

    return 0;
}

void initPlane(Seat plane[]){
    for(int i = 0; i < MAX; ++i){
        plane[i].seat_ID = i;
        plane[i].isAssigned = 0;
        plane[i].first_name[0] = '\0';
        plane[i].last_name[0] = '\0';
    }
}

int printMenu_getOpt(int *first){
    const static char arr[][50] = {"To choose a function, enter its letter label:",
                                    "a) Show number of empty seats",
                                    "b) Show list of empty seats",
                                    "c) Show alphabetical list of seats",
                                    "d) Assign a customer to a seat assignment",
                                    "e) Delete a seat assignment",
                                    "f) Quit"};
    int size;
    if(*first){
        size = 7;
    } else{
        size = 6;
    }
    *first = 0;
    for(int i = 0; i < size; ++i){
        printf("%s\n", arr[i]);
    }

    char ch;
    int opt;
    printf("\nEnter option: ");
    ch = getchar();
    getchar();

    switch(ch){
        case 'a':
            opt = 1;
            break;
        case 'b':
            opt = 2;
            break;
        case 'c':
            opt = 3;
            break;
        case 'd':
            opt = 4;
            break;
        case 'e':
            opt = 5;
            break;
        case 'f':
            opt = 6;
            break;
    }

    return opt;
}

void init_from_file(Seat plane[], FILE *pf){
    fread(plane, sizeof(Seat), MAX, pf);
}

int showNrOfEmptySeats(const Seat plane[]){
    int count = 0;
    for(int i = 0; i < MAX; ++i){
        if(!plane[i].isAssigned){
            count++;
        }
    }

    return count;
}

void showListOfEmptySeats(const Seat plane[]){
    for(int i = 0; i < MAX; ++i){
        if(!plane[i].isAssigned){
            printf("%d ", plane[i].seat_ID);
        }
    }
    putchar('\n');
}

static void swapSeat(Seat *p1, Seat *p2){
    int size = sizeof(Seat);
    Seat *tmp = (Seat*) malloc(size);

    memcpy(tmp, p1, size);
    memcpy(p1, p2, size);
    memcpy(p2, tmp, size);

    free(tmp);
}

void printListAlphabetically(const Seat plane[]){
    Seat tmp[MAX];
    memcpy(tmp, plane, MAX * sizeof(Seat));

    for(int i = 0; i < MAX-1; ++i){
        for(int j = i+1; j < MAX; ++j){
            if(strcmp(tmp[i].last_name, tmp[j].last_name) > 0){
                swapSeat(&tmp[i], &tmp[j]);
            }
        }
    }

    for(int i = 0; i < MAX; ++i){
        if(tmp[i].isAssigned){
            printf("%d - %d - %s, %s\n", tmp[i].seat_ID,
                                        tmp[i].isAssigned,
                                        tmp[i].last_name,
                                        tmp[i].first_name);
        }
    }
}

void assignCustomer(Seat plane[]){
    showListOfEmptySeats(plane);
    int seat;
    printf("Enter the seat id: ");
    scanf("%d", &seat);
    getchar();

    printf("Enter last name: ");
    scanf("%s", plane[seat].last_name);
    getchar();
    printf("Enter first name: ");
    scanf("%s", plane[seat].first_name);
    getchar();
    plane[seat].isAssigned = 1;
}

void deleteSeatAssignment(Seat plane[]){
    printListAlphabetically(plane);

    int seat;
    printf("Enter the seat you would like to delete: ");
    scanf("%d", &seat);
    getchar();
    if(seat < 0 || seat > MAX){
        fprintf(stderr, "Seat number not available!\n");
        exit(EXIT_FAILURE);
    }
    plane[seat].isAssigned = 0;
    plane[seat].first_name[0] = '\0';
    plane[seat].last_name[0] = '\0';
}