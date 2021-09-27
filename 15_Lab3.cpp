/*Bank Management */
#include<iostream>
using namespace std;


class BankLab2 {
	
	public:

	string name;

	char account_type;

	int account_number,amount;

	float balance;

	 

	BankLab2(string n,int a, char t, float b) {

		name = n;

		account_number=a;

		account_type=t;

		balance=b;



	}

	

	int deposit()

	{

		cout<<"Enter the amount to deposit: ";

	    cin>>amount;

		if(amount<0)

		{

			cout<<"Invalid amount,Enter a valid amount"; 

			return 0;

		}

		balance=balance+amount;

		return 1;

	}

	

	int withdraw()

	{

		cout<<"Your Balance= "<<balance; 

		cout<<"Enter amount to withdraw: "; 

		cin>>amount;

		if (balance<amount)

		{

			cout<<"Insufficient Balance: "; 

			return 0;

		}

		if(amount<0)

		{

			cout<<"Invalid	amount"; 

			return 0;

		}

		balance=balance-amount; 

		return 1;

	}

	

	void display()

	{

	cout<<"Name :"<<name;

	cout<<"Account Number:"<<account_number;

    cout<<"Account Type:"<<account_type;

    cout<<"Balance: "<<balance;

	}

};
    int main()
    {	

	int account_number;
	 char ans;

	BankLab2 b1("salman",1,'s',2000);

	BankLab2 b2("makarand",2,'s',2000);

	BankLab2 b3("siddharth",3,'s',2000);

		

	cout<<"Menu"<<endl;

	cout<<"1.Deposit"<<endl;

	cout<<"2.Withdraw"<<endl;

	cout<<"3.Display"<<endl;

	cout<<"Enter option"<<endl; 
    
    int op;
    
	cin>>op;


		do

		{

			cout<<"Please enter your account number:"<<endl; 

			cin>>account_number;		

				switch(account_number)

				{

					case 1:	if(op==1)

								b1.deposit();

							if(op==2)

								b1.withdraw();

							if(op==3)

								b1.display();

							

							break;

					case 2:	if(op==1)

								b2.deposit();

							if(op==2)

								b2.withdraw();

							if(op==3)

								b2.display();

							

							break;

					case 3:	if(op==1)

								b3.deposit();

							if(op==2)

								b3.withdraw();

							if(op==3)

								b3.display();

							

							break;

					default: cout<<"Enter value between 1 to 3";

							break;

				}
               	cout<<"Do you want to continue?[Y/N]";

				cin>>ans;

				if(ans=='Y' || ans == 'y') 

				{

				cout<<"Menu";

			    cout<<"1.Deposit";

			    cout<<"2.Withdraw";

		        cout<<"3.Display";

				cout<<"Enter option"; 

				cin>>op;

				}

					

			}

			while(ans!='N');

	}

/*Student Managemt */
#include<iostream>
using namespace std;
class Student {
	public:
	string name;
	int roll_no;
	float cgpa;
	char div;
	string branch;

	void getdata()
	{
		cout<<"Enter your name:"<<endl;
		cin>>name;
		cout<<"Enter your roll number:"<<endl;
		cin>>roll_no;
		cout<<"Enter your CGPA:"<<endl;
		cin>>cgpa;
        cout<<"Enter your Division:"<<endl;
		cin>>div;
		cout<<"Enter your branch:"<<endl;
		cin>>branch;
		
	}
	
	void getdata(string n,int r,float c,char d,string b)
	{
		name=n;
		roll_no=r;
		cgpa=c;
		div=d;
		branch=b;
		
	}
	
	void printdata()
	{
		cout<<"Name of the student: "<<name<<endl;
	    cout<<"Roll-no of the student: "<<roll_no<<endl;
		cout<<"Cgpa of the student: "<<cgpa<<endl;
		cout<<"Division of the student: "<<div<<endl;
		cout<<"Branch of the student: "<<branch<<endl;
	}

};
		

    int main ()
	{
    Student s1;
    Student s2;
	s1.getdata(); 
	s1.printdata();
	s2.getdata();
	s2.printdata();
	return 0;
	}

