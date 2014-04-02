#include<iostream>
using namespace std;

class arithmatic
{
    float n;
public:
    void get()
    {
        cout<<"\nEnter number: \n";
        cin>>n;
    }
    arithmatic operator+(arithmatic a)
    {
        arithmatic t;
        t.n=n+a.n;
        return t;
    }
    arithmatic operator-(arithmatic a)
    {
        arithmatic t;
        t.n=n-a.n;
        return t;
    }
    arithmatic operator=(arithmatic a)
    {
        n=a.n;
        return *this;
    }

    void display()
    {
        cout<<n;
    }
};

//===========================================================

int main()
{
    arithmatic a1,a2,a3;

    a1.get();
    a2.get();
    a3=a1+a2;
    cout<<"\n\nAddition of two number: ";
    a3.display();
    a3=a1-a2;
    cout<<"\n\nSubtraction of Two number: ";
    a3.display();
    a3=a1;
    cout<<"\n\nAssignment of number: ";
    a3.display();

    return 0;
}
