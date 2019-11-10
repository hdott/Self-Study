/*
    Colossus Airlines (from exercise 8) acquires a second plane (same capacity) and expands
        its service to four flights daily (Flights 102, 311, 444, and 519). Expand the program to
        handle four flights. Have a top-level menu that offers a choice of flights and the option
        to quit. Selecting a particular flight should then bring up a menu similar to that of
        exercise 8. However, one new item should be added: confirming a seat assignment. Also,
        the quit choice should be replaced with the choice of exiting to the top-level menu. Each
        display should indicate which flight is currently being handled. Also, the seat assignment
        display should indicate the confirmation status.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 12
#define MAXF 4

typedef char String[50];
typedef struct Seat{
    int seat_ID;
    int isAssigned;
    String last_name;
    String first_name;
} Seat;

typedef struct Flight{
    int flight_id;
    Seat *flight;
} Flight;

static Flight* createFlights(void);
static void freeFlights(Flight *flights);
void initPlane(Seat plane[]);
int printFlights(Flight *flights);
int printMenu_getOpt(int flight);
void init_from_file(Flight *flights, FILE *pf);
int showNrOfEmptySeats(const Seat plane[]);
void showListOfEmptySeats(const Seat plane[]);
void printListAlphabetically(const Seat plane[]);
void assignCustomer(Seat plane[]);
void deleteSeatAssignment(Seat plane[]);


int main(void){
    // Flight *flight = (Flight*) malloc(MAXF * sizeof(Flight));
    // Seat *plane = (Seat*) malloc(MAX * sizeof(Seat));
    Flight *flights = createFlights();
    for(int i = 0; i < MAXF; ++i){
        initPlane(flights[i].flight);
    }
    // initPlane(plane);
    int first = 1;

    FILE *pf;
    if(!(pf = fopen("plane.txt", "rb"))){
        fprintf(stderr, "Unable to open file [plane.txt]\n");
        // fclose(pf);
    } else{
        init_from_file(flights, pf);
        // init_from_file(plane, pf);
        fclose(pf);
    }

    int opt;
    int fl;
    while(1){
        fl = printFlights(flights);
        if(fl == -1){
            pf = fopen("plane.txt", "wb");
            for(int i = 0; i < MAXF; ++i){
                fwrite(flights[i].flight, sizeof(Seat), MAX, pf);
            }
            fclose(pf);
            freeFlights(flights);
            exit(EXIT_SUCCESS);
            break;
        }
        Flight flt;
        for(int i = 0; i < MAXF; ++i){
            if(fl == flights[i].flight_id){
                flt = flights[i];
            }
        }

        switch(printMenu_getOpt(fl)){
            case 1:
                printf("\nNumber of empty seats -> %d\n", showNrOfEmptySeats(flt.flight));
                break;
            case 2:
                printf("\nList of empty seats:\n");
                showListOfEmptySeats(flt.flight);
                break;
            case 3:
                printf("\nAlphabetical list of seats:\n");
                printListAlphabetically(flt.flight);
                break;
            case 4:
                assignCustomer(flt.flight);
                break;
            case 5:
                deleteSeatAssignment(flt.flight);
                break;
            case 6:
                printFlights(flights);
                // pf = fopen("plane.txt", "wb");
                // for(int i = 0; i < MAXF; ++i){
                //     fwrite(flights[i].flight, sizeof(Seat), MAX, pf);
                // }
                // // fwrite(plane, sizeof(plane), MAX, pf);
                // fclose(pf);
                // freeFlights(flights);
                // // free(plane);
                // exit(EXIT_SUCCESS);
                break;
        }
    }

    pf = fopen("plane.txt", "wb");
    for(int i = 0; i < MAXF; ++i){
        fwrite(flights[i].flight, sizeof(Seat), MAX, pf);
    }
    // fwrite(plane, sizeof(Seat), MAX, pf);
    fclose(pf);
    freeFlights(flights);
    // free(plane);

    return 0;
}

static Flight* createFlights(void){
    Flight *flight = (Flight*) malloc(MAXF * sizeof(Flight));
    flight[0].flight_id = 102;
    flight[0].flight = (Seat*) malloc(MAX * sizeof(Seat));
    flight[1].flight_id = 311;
    flight[1].flight = (Seat*) malloc(MAX * sizeof(Seat));
    flight[2].flight_id = 444;
    flight[2].flight = (Seat*) malloc(MAX * sizeof(Seat));
    flight[3].flight_id = 519;
    flight[3].flight = (Seat*) malloc(MAX * sizeof(Seat));

    return flight;
}

static void freeFlights(Flight *flights){
    for(int i = 0; i < MAXF; ++i){
        free(flights[i].flight);
    }
    free(flights);
    flights = NULL;
}

void initPlane(Seat plane[]){
    for(int i = 0; i < MAX; ++i){
        plane[i].seat_ID = i;
        plane[i].isAssigned = 0;
        plane[i].first_name[0] = '\0';
        plane[i].last_name[0] = '\0';
    }
}

int printFlights(Flight *flights){
    system("clear");
    printf("Choose your Flight:\n");
    for(int i = 0; i < MAXF; ++i){
        printf("%d\n", flights[i].flight_id);
    }

    int fl;
    printf("\nEnter Flight: ");
    scanf("%d", &fl);
    getchar();

    switch(fl){
        case 102:
        case 311:
        case 444:
        case 519:
            return fl;
            break;
        default:
            // fprintf(stderr, "Flight does not exist!\n");
            // exit(EXIT_FAILURE);
            return -1;
            break;
    }
}

int printMenu_getOpt(int flight){
    system("clear");
    const static char arr[][50] = {"To choose a function, enter its letter label:",
                                    "a) Show number of empty seats",
                                    "b) Show list of empty seats",
                                    "c) Show alphabetical list of seats",
                                    "d) Assign a customer to a seat assignment",
                                    "e) Delete a seat assignment",
                                    "f) Return"};
    int size = 7;
    // if(*first){
    //     size = 7;
    // } else{
    //     size = 6;
    // }
    // *first = 0;
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

void init_from_file(Flight *flights, FILE *pf){
    for(int i = 0; i < MAXF; ++i){
        fread(flights[i].flight, sizeof(Seat), MAX, pf);
    }
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