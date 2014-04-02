#include <iostream>
#include <cstdlib>

using namespace std;

class bank
{
    char name[20],type[20],Y;
    int ac_no,deposit_tk,tk,p;
public:
    int n;
    bank();
    void initialize();
    void deposit();
    void withdraw();
    void display();
};

bank::bank()
{
    cout<<endl<<"\t\t\tWelcome to Banking System";
    cout<<"\n\t\t****************************************\n\n";
}

void bank::initialize()
{
    n=0;
    cout<<"\tEnter your name: ";
    cin>>name;
    cout<<"\tEnter your account No: ";
    cin>>ac_no;
    cout<<"\tEnter your account type: ";
    cin>>type;
    cout<<"\tEnter your opening ammount: ";
    cin>>tk;
    n=n+tk;
}

void bank::deposit()
{
    cout<<"Enter your deposit ammount: ";
    cin>>deposit_tk;
    n=deposit_tk+n;
}

void bank::withdraw()
{
    cout<<"Enter the amount of withdrawl: ";
    cin>>p;
    n=n-p;
    if(n>=0){
            cout<<"Your Current balance is : "<< n;
    }
    else if(n<0){
    cout<<"your balance is insufficient ";
    cout<<'\n';
    }
}


void bank::display()
{
    cout<<"\tYour account name is : "<< name<<'\n';
    cout<<"\tYour account no is : "<<ac_no<<'\n';
    cout<<"\tYour account type is : "<<type<<'\n';
    cout<<"\tYour account balance is : "<< n;
    cout<<'\n';
}

int main()
{
    bank ob;
    int x;
    char w;
    cout<<"Please initialize account: "<<"\n";
    ob.initialize();
    while(1)
    {
        again:
        cout<<"\nDo you want do any transection? (y/n): ";
        cin>>w;
        if(w=='y')
        {
            cout<<"\n\tPlease Follow the instruction:"<<'\n';
            cout<<"\tFor deposit press 1"<<'\n';
            cout<<"\tFor withdraw press 2"<<'\n';
            cout<<"\tFor display press 3"<<'\n';
            cout<<"\tFor exit press 4";
            cout<<"\n";
            cin>>x;
            cout<<"\n";

            switch(x)
            {
                case 1: ob.deposit();
                break;
                case 2: ob.withdraw();
                break;
                case 3: ob.display();
                break;
                case 4:exit(0);
                default:
                    cout<<"Please enter correct option";
                    break;
            }
        }
     else if(w=='n') {
            exit(0);
        }
     else {
        cout<<"Sorry wrong entry !!\n";
        goto again;
        }
    }
    return 0;
}
