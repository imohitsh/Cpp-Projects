// ATM MANAGEMENT SYSTEM
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bank
{
	//private variables to be used inside class
private:
    string name;
    int accnumber;
    char type[10];
    int amount=0;
    int tot=0;
public:
	//function to set the person's data
    void setvalue()
    {
        cout<<"Enter name\n";
        cin.ignore();
        getline(cin,name);//to use space in string
                          
        cout<<"Enter Account number\n";
        cin>>accnumber;
        cout<<"Enter Account type\n";
        cin>>type;
        cout<<"Enter Balance\n";
        cin>>tot;
    }
    //Displaying data
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<accnumber<<endl;
        cout<<"Account type:"<<type<<endl;
        cout<<"Balance:"<<tot<<endl;
    }
    //Function to deposit
    void deposit()
    {
        cout<<"\nEnter amount to be Deposited\n";
        cin>>amount;
    }
    void showbal()
    {
        tot=tot+amount;
        cout<<"\nTotal balance is: "<<tot;
    }
    //Function to withdraw
    void withdrawl()
	{
    	int a,avai_balance;
    	cout<<"Enter amount to withdraw\n";
    	cin>>a;
    	avai_balance= tot-a;
    	cout<<"Available Balance is"<<avai_balance;
	}
} ;
int main()
{
    Bank b;
    int choice;
    while(1)
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout<<"Enter Your Choice\n";
        cout<<"\t1. Enter name, Account number, Account type\n";
        cout<<"\t2. Balance Enquiry\n";
        cout<<"\t3. Deposit Money\n";
        cout<<"\t4. Show Total balance\n";
        cout<<"\t5. Withdraw Money\n";
        cout<<"\t6. Cancel\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
        	b.withdrawl();
        	break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"\nInvalid choice\n";
        }
    }
}

