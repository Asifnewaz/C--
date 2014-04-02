/*
  Libery ManageMent Problem.
  Bookname:Object Oriented Programming;
  Author:E.Balaguru Shamy.
  Chapter:6
  Problem:6.3
  Programmer:This Code is developed by Asif Newaz.
  Date:2-4-14
  Language:C++
  Use:DynamicMemory,Char type 2d Aarry Initialization,Construtor,Destructor,If..else,Switch,
  whileloop,forloop.
   keylook: At Char type 2d Array Declation and Its operation from main,
   Dynamic Memory Use.
   Remember:1.Class member variable cannot be intialized with in class main structure.
            2.Array Can be initialize in two away during declration or during runtime using
              for loop.
            3.Dynamic Memory doesn't support 2d/3d/.. array allocation.
            4.During Standard input string into dynamically alocated variable it doesnot
            suppot white space.
*/

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

class A{
public:

static char a[][100];
 static char n[][100];
static int  cost[];
static int  copy[];
char *p,*q;
A();
~A();
int purchase(int i);
int details(int i);
int check( );
};


//data base;
char A::a[][100]={"herbertschildt","Niton","GiasUddinAhammed"};
char  A::n[][100]={"teachyourselfC++","cbasic","physics1st"};
int A::copy[]={5,6,7};
int A::cost[]={50,10,20};
//

int A::purchase(int i)
{
    char y;
    cout<<"\n\n\t\t\t"<<"----------------------------------\n";
    cout<<"\t\t\tAre you want To See Available Copy[y/n]:";
    cin>>y;
    if(y=='y')
    {
        int c;
        cout<<"\n\t\tHow Many Copy You want:";
        cin>>c;
        if(c<=copy[i])
        {
            cout<<"\n\t\t\tCopy Is Available\n";
            cout<<"\n\t\tTotalcost:"<<c*cost[i];
            cout<<"\n\n\tAre U want to parchage[y|n]:";
            char y;
            cin>>y;
              if(y=='y')
               {
                cout<<"\n\n\t\t\tThank U For Purchage";
                copy[i]=copy[i]-c;
                cout<<"\n\n\t\tRemain:"<<copy[i]<<"copy";


               }
        }
        else
        {

        cout<<"\n\n\t\tPresent:"<<copy[i]<<"copy";
        cout<<"\n\n\t\tSO  Ur EXPECTED COPY IS NOT AVAILABLE NOW\n\n";
        cout<<"\n\n\t\t        ~~ || THANK YOU || ~~ ";
        cout<<"\n\t----------------------------------------\n\n";
        }
          cout<<"\n\n\t\t        ~~ || THANK YOU || ~~ ";
          cout<<"\n\t----------------------------------------\n\n";

    }



}
int A::details(int i)
{
    switch(i)
    {
        case 0:
        cout<<"\n\t\tBOOK NAME:Teach Yourself C++\n";
        cout<<"\n\t\tAUTHOR:"<<a[i]<<"\n";
        cout<<"\n\t\tCopy Available:"<<copy[i]<<"\n";
        cout<<"\nt\t\tCost:50 tk\n";
        purchase(i);
        break;

        case 1:
        cout<<"\n\t\tBOOK NAME:C Basic\n";
        cout<<"\n\t\tAUTHOR:"<<a[i]<<"\n";
        cout<<"\n\t\tCopy Available:"<<copy[i]<<"\n";
        cout<<"\n\t\tCost:10 tk"<<"\n";
        purchase(i);

        break;
        case 2:
        cout<<"\n\t\tBOOK NAME:Physics 1st\n";
        cout<<"\n\t\tAUTHOR:"<<a[i]<<"\n";
        cout<<"\n\t\tCopy Available:"<<copy[i]<<"\n";
        cout<<"\nt\t\tCost:20 tk"<<"\n";
        purchase(i);
        break;

    }

}
A::A()
{
    p = new char[100];
    q = new char[100];
}
A::~A()
{
    cout<<"\n Memory is now deleting";
    delete[] p;
}
int A::check()
{
    int s;

    for(int i=0;i<3;i++)
    {

     if(strcmp(a[i],q)==0&&strcmp(n[i],p)==0)
      {
          cout<<"\n Query Match";
          cout<<"i:"<<i;

          s=1;
          details(i);
          }
          }
          if(s!=1)
          cout<<"\n"<<"Query Doesn't Listed";

}

int main()
{

       A l;

      // l.a={"herbertschildt","Niton","GiasUddinAhammed"};
      // l.n={"teachyourselfC++","cbasic","physics1st"};


       for(int i=0;i<3;i++)
       {
       cout<<l.n[i]<<"\n";
       cout<<"\t"<<l.a[i]<<"\n";
       }
       cout<<"\n\t-------------------------------------------------------------------------\n";
       cout<<"                     Welcome To Libery Management Program\n\n";
       while(1)
       {
           int s;

           cout<<"\n\t\t[1].ENTRY DATA\n";
           cout<<"\n\t\t[2].STOP\n";
           cout<<"\n\tEnter Ur Choice:";
           cin>>s;
           if(s==1)
           {
                   cout<<"\n\nEnter Book Title:";
                   cin>>l.p;

                    cout<<"\n Enter Author:";
                   cin>>l.q;


                      l.check();
           }

           else
           break;

       }

}
