// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);         // line queue holds up to qs people
    Queue line1(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;              //  hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  average # of arrival per hour
    cin >> perhour;
    double min_per_cust;    //  average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;              //  new customer data
    long turnaways = 0;     //  turned away by full queue
    long customers = 0;     //  joined the queue
    long served = 0;        //  served during the simulation
    long sum_line = 0;      //  cumulative line length
    int wait_time = 0;      //  time until autoteller is free
    long line_wait = 0;     //  cumulative time in line


// running the simulation
    double _tmp_perhour = perhour;
    double _tmp_min_per_cust = min_per_cust;
    int count = 0;
    do{
        turnaways = 0;     //  turned away by full queue
        customers = 0;     //  joined the queue
        served = 0;        //  served during the simulation
        sum_line = 0;      //  cumulative line length
        wait_time = 0;      //  time until autoteller is free
        line_wait = 0;     //  cumulative time in line
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            double nwc1 = newcustomer(_tmp_min_per_cust);
            double nwc2 = newcustomer(_tmp_min_per_cust);
            if (nwc1 || nwc2)  // have newcomer
            {
                if (line.isfull() && line1.isfull())
                    turnaways++;
                else
                {
                    int cust = 1;
                    if(nwc1 && nwc2){
                        cust = 2;
                    }
                    for(int i = 0; i < cust; ++i){
                        customers++;
                        temp.set(cycle);    // cycle = time of arrival
                        if(line1.queuecount() >= line.queuecount()){
                            line.enqueue(temp); // add newcomer to line
                        } else{
                            line1.enqueue(temp);
                        }
                    }
                }
            }
            if (wait_time <= 0 && (!line.isempty() || !line1.isempty()))
            {
                Item temp1;
                int tmp_wt1 = 0,
                    tmp_wt2 = 0;
                long tmp_lw1 = 0,
                    tmp_lw2 = 0;
                bool li1 = false,
                    li2 = false;
                if(!line.isempty()){
                    line.dequeue (temp);      // attend next customer
                    tmp_wt1 = temp.ptime();
                    tmp_lw1 = temp.when();
                    li1 = true;
                }
                if(!line1.isempty()){
                    line1.dequeue (temp1);
                    tmp_wt2 = temp.ptime();
                    tmp_lw2 = temp.when();
                    li2 = true;
                }
                
                int div = 1;
                if(li1 && li2){
                    div = 2;
                }

                wait_time = (temp.ptime()  + temp1.ptime()) / div; // for wait_time minutes
                line_wait += cycle - (temp.when() + temp1.when()) / div;
                // line_wait += cycle - temp1.when();
                served += (div == 2) ? 2 : 1;
            }
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
            sum_line += line1.queuecount();
        } 
        while(!line.isempty())  line.dequeue(temp);
        while(!line1.isempty()) line1.dequeue(temp);
        
        count++;
        _tmp_perhour--;
        _tmp_min_per_cust = MIN_PER_HR / _tmp_perhour;
    } while(double(line_wait) / served > 1.0);

// reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "     customer/hour: " << double(customers) / hours << endl;
        // cout << "average queue size: ";
        // cout.precision(2);
        // cout.setf(ios_base::fixed, ios_base::floatfield);
        // cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}
