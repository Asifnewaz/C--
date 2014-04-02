#include<iostream>      // From book
using namespace std;

class time{
    int hours,minutes;
public:
    void get_time()
    {
        cout<<"\tHours: ";          //for user input if u want
        cin>>hours;
        cout<<"\n\tMinutes: ";
        cin>>minutes;
    }
    void put_time(void);
    void sum(time t1, time t2);
};

//=================================================================

void time::put_time(void)       // Inputting data
{
    cout<<hours<<" hours and ";
    cout<<minutes<<" minutes \n";
}

void time::sum(time t1, time t2)        // Calculating data
{
    minutes = t1.minutes + t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours = hours+t1.hours + t2.hours;
}

//=================================================================

int main()
{
    time t1,t2,t3;
    cout<<"Enter time for T1: \n";
    t1.get_time();
    cout<<"Enter time for T2: \n";
    t2.get_time();
    t3.sum(t1,t2);
    cout<<"\nT1 = ";t1.put_time();
    cout<<"\nT2 = ";t2.put_time();
    cout<<"\nT3 = ";t3.put_time();
    return 0;
}
