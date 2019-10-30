#include <stdio.h>


static int modeS = 0;
static double distance;
static double fuel_consumed;

void set_mode(int mode){
    if(mode != 0 && mode != 1){
        printf("Invalid mode specified. Mode %d%s used.\n", modeS,
                (modeS == 0) ? "EU" : "US");
        return;
    }

    modeS = mode;
}

void get_info(void){
    switch(modeS){
        case 0:
            printf("Enter distance traveled in kilometers: ");
            scanf("%lg", &distance);
            printf("Enter fuel consumed in liters: ");
            scanf("%lg", &fuel_consumed);
            break;
        case 1:
            printf("Enter distance traveled in miles: ");
            scanf("%lg", &distance);
            printf("Enter fuel consumed in gallons: ");
            scanf("%lg", &fuel_consumed);
            break;
    }
}

void show_info(void){
    switch(modeS){
        case 0:
            printf("Fuel consumption is %lg liters per 100 km.\n",
                    (100 * fuel_consumed) / distance);
            break;
        case 1:
            printf("Fuel consumption is %lg miles per gallon.\n",
                    distance / fuel_consumed);
            break;
    }
}