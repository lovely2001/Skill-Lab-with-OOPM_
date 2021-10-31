// 1 code
 #include<iostream>
 using namespace std;
 
 class student{
 	public:
 		int roll_number;
 		string name;
 		string branch;
 		student(){
 		cout<<"Enter roll number"<<endl;
 		cin>>roll_number;
 		cout<<"Enter name"<<endl;
 		cin>>name;
 		cout<<"Enter branch"<<endl;
 		cin>>branch;
	}
 };
 
 class exam: public student{
 	public:
 	int maths;
 	int physics;
 	int chemistry;
 	exam(){
 	cout<<"Enter Physics Marks"<<endl;
 	cin>>physics;
 	cout<<"Enter chemistry Marks"<<endl;
 	cin>>chemistry;
 	cout<<"Enter Maths Marks"<<endl;
 	cin>>maths;	
    }
 };
 
 class sport{
 	public:
 	int sports;
 	sport(){
 	cout<<"Enter sports Marks"<<endl;
 	cin>>sports;	
    }
 };
 
 class result : public exam, public sport {
 	public:
 		int total;
 		result(){
 		total = maths + physics + chemistry + sports;
 		cout<<total<<endl;
 	    }
 };
 
 int main()
 {
 	result obj;
 	return 0;   
 }
 
 
 // 2 code
 #include <iostream>
using namespace std;

class Employee
{
	protected:
	string EmpID = "";

	double Empsalary;

	public:
		Employee()
		{
            cout<<endl<<"Enter the employee id : ";
            cin>>EmpID;
			cout<<endl<<"Enter the employee Sal : ";
            cin>>Empsalary;

		}

	void getDetails()
	{
		cout <<endl<< "EmployeeID is : " << EmpID;
		cout <<endl<<endl<<"Employee Total Salary is : " << Empsalary;
	}


};

class Permanent_Employee: public Employee
{
	double hike;

	public:

	Permanent_Employee( double increment)
	{
			hike = increment;
	}

    void getDetails()
	{
		cout <<endl<< "EmployeeID is : " << EmpID;
		cout <<endl<<endl<<"Employee Total Salary is : " << generate_salary();
	}

	float generate_salary()
	{
		return (Empsalary + hike);
	}
};

class Temporary_Employee: public Employee
{
	double hike;

	public:

	Temporary_Employee( double increment)
	{
			hike = increment;
	}

    void getDetails()
	{
		cout <<endl<< "EmployeeID is : " << EmpID;
		cout <<endl<<endl<<"Employee Total Salary is : " << generate_salary();
	}

	float generate_salary()
	{
		return (Empsalary + hike);
	}
};

int main()
{

    cout<<endl<<"For Temporary Employee: "<<endl;
	Temporary_Employee T(667.6);
    cout << endl << endl << "Details of Temporary_Employee : " << endl;
	T.getDetails();
    cout<<endl<<endl<<"For Permanent Employee: "<<endl;
	Permanent_Employee P(777.99);
	cout << endl << endl << "Details of Permanent_Employee : " << endl;
	P.getDetails();

	return 0;
}
