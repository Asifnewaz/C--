#include<iostream>
#include<cstdlib>
using namespace std;

class vector{
        float n[10],m[10],o[10];
        int a;
        int i,x;
    public:
        void get_v();
        void modi();
        void add();
        void show();
};

void vector:: get_v()
{
    cout<<"Enter Array's element number: ";
    cin>>x;
    cout<<"Input 1st Array's Value ";
    for(i=1;i<=x;i++)
    {
        cin>>n[i];
    }
    cout<<"Input 2nd Array's Value ";
    for(i=1;i<=x;i++)
    {
        cin>>m[i];
    }

    cout<<"\nOutput 1st Array's Value \n";
    for(i=1;i<=x;i++)
    {
        cout<<'\t'<<n[i];
    }
    cout<<'\n';

    cout<<"\nOutput 2nd Array's Value \n";
    for(i=1;i<=x;i++)
    {
        cout<<'\t'<<m[i];
    }
    cout<<'\n';
}


void vector::modi()
{
    int pos,p;
    float mod;
    cout<<"Which array do you want to modify: (1/2)";
    cin>>p;
    if(p==1){
    cout<<"\nEnter index position for modify ";
    cin>>pos;

    if(pos<=x&&pos>0){
        cout<<"\nEnter value for modify ";
        cin>>mod;
        n[pos]=mod;
        cout<<"\nOutput 1st Array's Value ";
        for(i=1;i<=x;i++)
        {
            cout<<'\t'<<n[i];
        }
        cout<<'\n';
    }
    else
        cout<<"Wrong index !!! \n";
    }
    else if(p==2){
    cout<<"\nEnter index position for modify ";
    cin>>pos;

    if(pos<=x&&pos>0){
        cout<<"\nEnter value for modify ";
        cin>>mod;
        m[pos]=mod;
        cout<<"\nOutput 2nd Array's Value ";
        for(i=1;i<=x;i++)
        {
            cout<<'\t'<<m[i];
        }

        cout<<'\n';
    }
    else
        cout<<"Wrong index !!! \n";
    }
    else
        cout<<"Wrong entry !!! ";
}

void vector:: add()
{
    for(i=1;i<=x;i++)
    {
        o[i]=m[i]+n[i];
    }
    cout<<"\nOutput Array's Value : ";
    for(i=1;i<=x;i++)
    {
        cout<<'\t'<<o[i];
    }
}

int main()
{
    vector o;
    o.get_v();
    cout<<'\n';
    while(1){
    cout<<'\n'<<"Please Choose 1 for modify: "<<'\n';
    cout<<"Please Choose 2 for addition with scalar value: "<<'\n';
    cout<<"Please Choose 3 for exit: "<<'\n';
    int p;
    cin>> p;
    switch(p)
        {
            case 1: o.modi();
            break;
            case 2:o.add();
            break;
            case 3: exit(0);

        }
    }
}
