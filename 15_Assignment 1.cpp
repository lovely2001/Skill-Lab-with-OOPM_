# Skill-Lab-with-OOPM_
// Employee Details Program
#include<iostream>
using namespace std;

class Employee
{
	public:
	//Delaring attributes
	int Employ_number;
	string Employ_name;
	float Basic;
	float DA;
	float IT;
	float Salary;
	
	void get_details()              //Method to get details from user
	{
		cout<<"Enter the Id of Employee"<<endl;
		cin>>Employ_number;
		cout<<"Enter the name of Employee"<<endl;
		cin>>Employ_name;
		cout<<"Enter the Basic Salary of Employee"<<endl;
		cin>>Basic;
	}
	void calculate_details()        //Method to create Calulate the value
	{
		DA=1.32*Basic;
		IT=0.30*(Basic+DA);
		Salary=(Basic+DA)-IT;	
	}
	void print_details()            //Method to print details
	{
		cout<<"Employ Id"<<Employ_number<<endl;
		cout<<"Employ name : "<<Employ_name<<endl;
		cout<<"Employ Basic Salary : "<<Basic<<endl;
		cout<<"Employ DA : "<<DA<<endl;
		cout<<"Employ IT : "<<IT<<endl;
		cout<<"Employ Salary : "<<Salary<<endl;
	}
};
   
    int main()
    {
    Employee E1[50];               //Creating an array of objects
    for(int i=0 ; i<2; i++)
    {
    	cout<<"Enter details of Employee:"<<i+1<<endl;
    	E1[i].get_details();
    	E1[i].calculate_details();
    }
    for(int i=0 ; i<2; i++)
    {
    	E1[i].print_details();
	}
    return 0;
}
