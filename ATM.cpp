#include<iostream>
#include<string.h>
using namespace std;
class ATM
{
    string cno;
    char name[100];
    string pin;
    int balance,up;
    int withdraw;
    int deposit;

    public:
        void pinnn()
        {
            cout<<"Enter PIN NUMBER : ";
            cin>>pin;
        }
        string pinn()
        {
            return pin;
        }
        string cnno()
        {
            return cno;
        }
        string namee()
        {
            return name;
        }
        void inpname(char nameee[100])
        {
            strcpy(name,nameee);
        }
        void baln(int ball)
        {
            balance =  ball;
        }
    void input()
    {
        cout<<"Enter card number : ";
        cin>>cno;
    }
    int withdraww()
    {
        cout<<"Enter Amount to be withdraw : ";
        cin>>withdraw;
        if((balance-withdraw)>=2000) 
        {
        cout<<"Yes You can withdraw!!\n";
            up = balance - withdraw;
            
        }
        else cout<<"Balance Insufficient !!!!!\n\n";
        return up;
    }
    int depositt()
    {
        cout<<"Enter Amount to be Deposited : ";
        cin>>deposit;
        up = balance + deposit;
        cout<<"Money Deposited!!!!\n\n";
        return up;
    }
    void dipslay()
    {
        cout<<"\n---------------MINI BALANCE---------------\n";
        cout<<__DATE__<<"                             "<<__TIME__<<endl;
        cout<<"NAME : "<<namee()<<endl;
        cout<<"CARD NUMBER : "<<cno<<endl;
        cout<<"BALANCE : "<<((up!=0)?up : balance)<<endl;
        cout<<endl<<endl;
    }
};
int main()
{
    int n,upp;
    string cc;
        char data[5][100] = {"344533338889900","9999000125687722","9558451457003443","9429772848234567","9662989832889911"};
        char data1[5][100] = {"Dhaval Soni","Pratham Soni","Shefali Soni","Hetvi Soni","Babulal Soni"};
        char data2[5][100] = {"9987","4563","1129","5543","1281"};
        int data3[5] = {100000,20022,34000,100000,2300};
        ATM obj;
        cout<<"WELCOME TO VAAMAN BANK\n\n";
        while(1)
        {
            cout<<"\nPress 1 -> To View Balance \n";
            cout<<"Press 2 -> To Deposit\n";
            cout<<"Press 3 -> To Withdraw\n";
            cout<<"Press 4 -> To Exit\n";
            cin>>n;
            if(n==1)
            {
                obj.input();
                for(int i=0;i<5;i++)
                {
                    if(obj.cnno()==data[i])
                    {
                        obj.inpname(data1[i]);
                        obj.pinnn();
                        obj.baln(data3[i]);
                        
                        for(int i=0;i<5;i++)
                        {
                            if(obj.pinn()==data2[i])
                            {
                                obj.dipslay();
                            }
                        }
                    }
                }
            }
            if(n==2)
            {
                obj.input();
                for(int i=0;i<5;i++)
                {
                    if(obj.cnno()==data[i])
                    {
                        obj.inpname(data1[i]);
                        obj.pinnn();
                        obj.baln(data3[i]);
                        for(int i=0;i<5;i++)
                        {
                            if(obj.pinn()==data2[i])
                            {
                               upp = obj.depositt();
                               data3[i] = upp;
                            }
                        }
                    }
                }
            }
            if(n==3)
            {
                obj.input();
                for(int i=0;i<5;i++)
                {
                    if(obj.cnno()==data[i])
                    {
                        obj.inpname(data1[i]);
                        obj.pinnn();
                        obj.baln(data3[i]);
                        for(int i=0;i<5;i++)
                        {
                            if(obj.pinn()==data2[i])
                            {
                              upp =  obj.withdraww();
                              data3[i] = upp;
                            }
                        }
                    }
                }
            }
            if(n==4)
            {
                cout<<"THANK YOU !!!";
                return 0;
            }
        }
    
    return 0;
}