#include<iostream>
using namespace std;

class student{
    char name[50];
    int roll;
    char grade[10];
    int n;
public:

    void get(void);
    void display(void);
};

//=====================================================================

void student::get()     // Getting student's data
{
    cin>>name;
    cin>>roll;
    cin>>grade;
}
void student::display()     // Displaying student's data
{
    cout<<name<<"\t";
    cout<<roll<<"\t";
    cout<<grade<<"\n";
}

//=======================================================================

int main()
{
    student st1[20];
    int x;
    cout<<"Enter total student no: ";
    cin>>x;
    cout<<"\nEnter Student's Name, Roll and Grade: \n";
    for(int i=0;i<x;i++){
    st1[i].get();
    }
    cout<<"\n\nName\t Roll\t Grade\n";
     for(int i=0;i<x;i++){
     st1[i].display();
    }
    return 0;
}
