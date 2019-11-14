/*
    This exercise provides practice in writing functions dealing with arrays and struc-
        tures.The following is a program skeleton. Complete it by providing the described
        functions:
    #include <iostream>
    using namespace std;
    struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
    };
    // getinfo() has two arguments: a pointer to the first element of
    // an array of student structures and an int representing the
    // number of elements of the array. The function solicits and
    // stores data about students. It terminates input upon filling
    // the array or upon encountering a blank line for the student
    // name. The function returns the actual number of array elements
    // filled.
    int getinfo(student pa[], int n);
    // display1() takes a student structure as an argument
    // and displays its contents
    void display1(student st);
    // display2() takes the address of student structure as an
    // argument and displays the structure’s contents
    void display2(const student * ps);
    // display3() takes the address of the first element of an array
    // of student structures and the number of array elements as
    // arguments and displays the contents of the structures
    void display3(const student pa[], int n);
    int main()
    {
        cout << "Enter class size: ";
        int class_size;
        cin >> class_size;
        while (cin.get() != '\n')
            continue;
        student * ptr_stu = new student[class_size];
        int entered = getinfo(ptr_stu, class_size);
        for (int i = 0; i < entered; i++)
        {
            display1(ptr_stu[i]);
            display2(&ptr_stu[i]);
        }
        display3(ptr_stu, entered);
        delete [] ptr_stu;
        cout << "Done\n";
        return 0;
}
*/

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
    // getinfo() has two arguments: a pointer to the first element of
    // an array of student structures and an int representing the
    // number of elements of the array. The function solicits and
    // stores data about students. It terminates input upon filling
    // the array or upon encountering a blank line for the student
    // name. The function returns the actual number of array elements
    // filled.
    int getinfo(student pa[], int n);
    // display1() takes a student structure as an argument
    // and displays its contents
    void display1(student st);
    // display2() takes the address of student structure as an
    // argument and displays the structure’s contents
    void display2(const student * ps);
    // display3() takes the address of the first element of an array
    // of student structures and the number of array elements as
    // arguments and displays the contents of the structures
    void display3(const student pa[], int n);
    int main()
    {
        cout << "Enter class size: ";
        int class_size;
        cin >> class_size;
        while (cin.get() != '\n')
            continue;
        student * ptr_stu = new student[class_size];
        int entered = getinfo(ptr_stu, class_size);
        for (int i = 0; i < entered; i++)
        {
            display1(ptr_stu[i]);
            display2(&ptr_stu[i]);
        }
        display3(ptr_stu, entered);
        delete [] ptr_stu;
        cout << "Done\n";
        return 0;
}

int getinfo(student pa[], int n){
    int i{-1};

    std::cout << "Enter student name: ";
    while(++i < n && (std::cin.getline(pa[i].fullname, SLEN))){
        std::cout << "Enter hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Enter ooplevel: ";
        (std::cin >> pa[i].ooplevel).get();
        std::cout << "Enter student name(emtpy to terminate): ";
    }

    return i;
}

void display1(student st){
    std::cout << "Name: " << st.fullname << std::endl;
    std::cout << "Hobby: " << st.hobby << std::endl;
    std::cout << "OOPLevel: " << st.ooplevel << std::endl;
}

void display2(const student * ps){
    std::cout << "Name: " << ps->fullname << std::endl;
    std::cout << "Hobby: " << ps->hobby << std::endl;
    std::cout << "OOPLevel: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n){
    for(int i=0; i<n; ++i){
        display1(pa[i]);
    }
}