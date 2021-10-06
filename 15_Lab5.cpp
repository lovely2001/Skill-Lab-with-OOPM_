//Multiplication of two complex number :
# include<iostream>
using namespace std;

class complex

{
    float real;
    float img;
    
	public:
			void get_elements();	//take numbers from user

		complex operator *(complex c1);	//operator overloading

		void display();	//print the result


};
void complex::get_elements()
{
	cout<<"Enter the real and img of complex no.\n";
	cout<<"Real :";
	cin>>real;
	cout<<"Img :";
	cin>>img;
	
}
void complex::display()
{
cout<<"("<<real<<")"<<"+"<<"("<<img<<")"<<"i";	
}

complex complex::operator*(complex c1)
{
 	complex mul;
   mul.real = ((real*c1.real)-(img*c1.img));
   mul.img = ((real*c1.img)+(c1.real*img));
     return(mul);
}

int main()
{
	complex obj1,obj2,obj3;
	obj1.get_elements();
    obj2.get_elements();
    obj3= obj1*obj2;
				 
				 
    cout<<"\n\n";
    obj1.display();
    cout<<" * ";
    obj2.display();
    cout<<" = "; 
    obj3.display(); 

}



//Addition of two matrices:
#include<iostream>
using namespace std;

class matrices
{
	public:
  //Declaring Attributes
	int a[2][2];
	int b[2][2];
	int c[2][2];
	void get_elements()                 //To take input from user
	{
		cout<<"Enter the elements";
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				cin>>a[i][j];
			}
		
		}
	}
	matrices operator +(matrices m2)      // To overload "+"
	{
		matrices m3;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			m3.a[i][j]=a[i][j]+m2.a[i][j];
		}
		return(m3);
	}
	void display()                       //To dispaly result
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				cout<<a[i][j]<<" ";
		
			}
			cout<<endl;	
		}
		
	}
			
};
   
    int main()
    {
    	matrices ob1,ob2;                         //Creaing an object
    	ob1.get_elements();
    	ob2.get_elements();
    	cout<<"\n Matrix 1:\n";
    	ob1.display();
    	cout<<"\n Matrix 2:\n";
    	ob2.display();
    	ob1=ob1+ob2;
    	cout<<"\n Result : \n";
    	ob1.display();
    	
	}
