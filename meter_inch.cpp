#include<iostream>
using namespace std;

class DB;
class DM{
    float a,b;
 public:
    void get_ab()
    {
        cout<<"Enter a value in meter: ";
        cin>>a;
         cout<<"Enter a value in Centimeter: ";
        cin>>b;
    }
    void show_ab()
    {
        cout<<'\n'<<"meter: "<<a;
        cout<<'\n'<<"Centimeter: "<<b;
    }
    friend float add(DM p, DB q);
};

class DB{
    float x,y;
 public:
    void get_xy()
      {
        cout<<"Enter a value in foot: ";
        cin>>x;
         cout<<"Enter a value in inch: ";
        cin>>y;
    }
    void show_xy()
      {
        cout<<'\n'<<"foot: "<<x;
        cout<<'\n'<<"inch: "<<y;
    }
    friend float add(DM p, DB q);
};

float add (DM p, DB q)                                  // 1m = 100cm, 1ft = .3048m, 1inch = 2.54cm
{
    p.b=(p.a*100)+p.b+q.y*2.54+q.x*0.3048*100;
    p.a=(p.b/100);
    q.x=(p.a*3.280);
    q.y=(p.b*0.3937);
    int n;

    while(1){
    cout<<"\nPress 1 for Meter and Centimeter: "<<'\n';
    cout<<"Press 2 for foot and inch: "<<'\n';
    cout<<"Press 3 for exit: "<<'\n';
    cin>>n;
    if(n==3)
        break;
    switch(n)
        {
        case 1:
            cout<<"In meters: "<<p.a<<'\n';
            cout<<"In Centimeters: "<<p.b<<'\n';
            break;
        case 2:
            cout<<"In foot: "<<q.x<<'\n';
            cout<<"In Inch: "<<q.y<<'\n';
            break;

        }
    }
}

int main()
{
    DM ob;
    ob.get_ab();
    DB ob1;
    ob1.get_xy();
    add(ob,ob1);
    return 0;
}
