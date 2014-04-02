#include<iostream>
using namespace std;

class fixed_deposite{
    long int p_ammount;
    int years;
    float rate;
    float r_value;
public:
    fixed_deposite(){}
    fixed_deposite(long int p, int y, float r=0.12);
    fixed_deposite(long int p, int y, int r);
    void display(void);
};

fixed_deposite::fixed_deposite(long int p, int y, float r)
{
    p_ammount=p;
    years=y;
    rate=r;
    r_value=p_ammount;
    for(int i=1;i<=y;i++)
        r_value=r_value*(1.0+r);
}


fixed_deposite::fixed_deposite(long int p, int y, int r)
{
    p_ammount=p;
    years=y;
    rate=r;
    r_value=p_ammount;
    for(int i=1;i<=y;i++)
        r_value=r_value*(1.0+float(r)/100);
}

void fixed_deposite::display()
{
    cout<<"\n";
    cout<<"Principal ammount = "<<p_ammount<<"\n";
    cout<<"Return value = "<<r_value<<"\n";
}

int main()
{
    fixed_deposite fd1,fd2,fd3;
    long int p;
    int y,R;
    float r;

    cout<<"Enter ammont, period,interest (in percent)\n";
    cin>>p>>y>>R;
    fd1=fixed_deposite(p,y,R);

    cout<<"Enter ammont, period,interest (in decimal)\n";
    cin>>p>>y>>r;
    fd2=fixed_deposite(p,y,r);

    cout<<"Enter ammont, period\n";
    cin>>p>>y;
    fd3=fixed_deposite(p,y);

    cout<<"\n Deposite 1";
    fd1.display();

    cout<<"\n Deposite 2";
    fd2.display();

    cout<<"\n Deposite 3";
    fd3.display();

    return 0;
}
