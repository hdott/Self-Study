#include <stdio.h>


// static int modeS = 0;
// static double distance;
// static double fuel_consumed;

void set_mode(int mode){
    static int modeS;
    if(mode != 0 && mode != 1){
        printf("Invalid mode specified. Mode %d%s used.\n", modeS,
                (modeS == 0) ? "EU" : "US");
        return;
    }

    modeS = mode;
}

void get_info(int mode, double *dist, double *fuel){
    switch(mode){
        case 0:
            printf("Enter distance traveled in kilometers: ");
            scanf("%lg", dist);
            printf("Enter fuel consumed in liters: ");
            scanf("%lg", fuel);
            break;
        case 1:
            printf("Enter distance traveled in miles: ");
            scanf("%lg", dist);
            printf("Enter fuel consumed in gallons: ");
            scanf("%lg", fuel);
            break;
    }
}

void show_info(int mode, double dist, double fuel){
    switch(mode){
        case 0:
            printf("Fuel consumption is %lg liters per 100 km.\n",
                    (100 * fuel) / dist);
            break;
        case 1:
            printf("Fuel consumption is %lg miles per gallon.\n",
                    dist / fuel);
            break;
    }
}