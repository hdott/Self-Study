/*
    Write a program that fits the following recipe:
    a. Externally define a name structure template with two members: a string to hold the
        first name and a string to hold the second name.
    b. Externally define a student structure template with three members: a name
        structure, a grade array to hold three floating-point scores, and a variable to hold
        the average of those three scores.
    c. Have the main() function declare an array of CSIZE (with CSIZE = 4 ) student
        structures and initialize the name portions to names of your choice. Use functions
        to perform the tasks described in parts d., e., f., and g.
    d. Interactively acquire scores for each student by prompting the user with a student
        name and a request for scores. Place the scores in the grade array portion of the
        appropriate structure. The required looping can be done in main() or in the
        function, as you prefer.
    e. Calculate the average score value for each structure and assign it to the proper
        member.
    f. Print the information in each structure.
    g. Print the class average for each of the numeric structure members.
*/

#include <stdio.h>
#define CSIZE 4


typedef char String[80];
typedef struct name{
    String name1;
    String name2;
} Name;

typedef struct student{
    Name name;
    float grade[3];
    float average;
} Student;

void initGrade(Student *s);
void compAvg(Student *s);
void printStud(const Student *s);
void printAvg(const Student *s);


int main(void){
    Student ar[CSIZE] = {{.name.name1 = "n1.1", .name.name2 = "n1.2"},
                        {.name.name1 = "n2.1", .name.name2 = "n2.2"},
                        {.name.name1 = "n3.1", .name.name2 = "n3.2"},
                        {.name.name1 = "n4.1", .name.name2 = "n4.2"}};
    
    for(int i = 0; i < CSIZE; ++i){
        initGrade(&ar[i]);
    }

    for(int i = 0; i < CSIZE; ++i){
        compAvg(&ar[i]);
    }
    
    for(int i = 0; i < CSIZE; ++i){
        printStud(&ar[i]);
    }


    for(int i = 0; i < CSIZE; ++i){
        printAvg(&ar[i]);
    }

    return 0;
}

void initGrade(Student *s){
    printf("Enter grades for %s, %s: ", s->name.name2, s->name.name1);
    scanf("%f %f %f", &s->grade[0], &s->grade[1], &s->grade[2]);
    getchar();
}

void compAvg(Student *s){
    float avg = 0;
    for(int i = 0; i < 3; ++i){
        avg += s->grade[i];
    }
    s->average = avg / 3;
}

void printStud(const Student *s){
    printf("%s, %s - %g - %g - %g\n", s->name.name2, s->name.name1, s->grade[0],
                                    s->grade[1], s->grade[2]);
}

void printAvg(const Student *s){
    printf("%g\n", s->average);
}