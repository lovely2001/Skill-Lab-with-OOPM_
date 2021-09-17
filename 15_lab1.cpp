#include<iostream>
using namespace std;
int main()
{
/* To Add two numbers */
    int num1,num2,result;
	num1=10;
	num2=5;
	result= num1 + num2;
	cout<< num1 << "+" <<num2 <<"=" <<result<<endl;
	
/* To print two numbers */
    int n3,n4,temp;
 	cout<< "Enter two numbers :";
 	cin>> n3>>n4;
 	cout<<"User entered numbers are: "<<n3 <<" and "<<n4<<endl;
 

/* To Swap two numbers */
    cout<< "Numbers before swapping:\n"<<n3<<" and "<<n4<<endl;
    temp=n3;
    n3=n4;
    n4=temp;
    cout<< "\nNumbers after swapping:\n"<<n3<<" and "<<n4<<endl;
    
    
/* To check whether a no is even or odd  */
    int num;
    cout<< "Enter a number:";
    cin>>num;
    if(num%2==0)
    cout<<"Entered number is EVEN";
    else
    cout<<"Entered number is ODD";
    return 0;

}
