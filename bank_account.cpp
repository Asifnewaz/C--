#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>

using namespace std;

class account{
protected:
      char cname[20];
      int accno;
      char type;
      int balance;
public:
      account()
      {
        strcpy(cname," ");
        accno=0;
        type=' ';
        balance=0;
      }
      void input(){
        cout<<"Enter cname ";cin>>cname;
        cout<<"Enter accno ";cin>>accno;
        fflush(stdin);
        cout<<"Enter type "; cin>>type;
        fflush(stdin);
        cout<<"Enter balance ";cin>>balance;
      }
      void display(){
            cout<<"\n\t Customer Name "<<cname;
            cout<<"\n\t Account Number "<<accno;
            cout<<"\n\t Type "<<type;
            cout<<"\n\t balanceance "<<balance<<"\n\n";
      }
      void deposit(){
            int amt;
            cout<<"\n Enter the amount to deposit ";
            cin>>amt;
            balance=balance+amt;
      }
};
class savacct:public account{
      int inter;
      public:

      int comp_int(){
         int time1,rate1;
         rate1=10;
         cout<<"\n Enter Year ";cin>>time1;
         inter=balance*pow(1+rate1/100.0,time1)-balance;
         return inter;
      }

      void update_balance(){
         balance=balance+comp_int();
      }

      void withdrawal(){
         int amt;
         cout<<"\n Enter amount to withdrawn ";
         cin>>amt;
         if(balance>=amt){
               balance=balance-amt;
         }
         else{
               cout<<"\n The amount cannot be withdrawn ";
         }
      }
  };

class curacct:public account{
       int chq_bk;
       int penal;
       public:

       int min_balance(){
          int ret1=1;
          if(balance<=500){
             penal=50;
             balance=balance-penal;
             ret1=0;
          }
          else{
             cout<<"\n No penality imposed ";
          }
          return ret1;
      }
      void withdrawal(){
          int amt;
          cout<<"\n Enter the amount to withdrawn ";
          cin>>amt;
          int k=min_balance();
          if(k==1){
             if(balance>=amt)
             balance=balance-amt;
          }
          else{
              cout<<"\n The amount cannot be withdrawn ";
          }
      }
   };

int main(){
      curacct c1;
      savacct s1;
      c1.input();
      c1.display();
      c1.deposit();
      c1.display();
      c1.withdrawal();
      c1.display();
      s1.input();
      s1.display();
      s1.deposit();
      s1.display();
      s1.update_balance();
      s1.display();
      s1.withdrawal();
      s1.display();
      return 0;
}

