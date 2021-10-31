// 1 code

#include<iostream>
using namespace std;
class temp 
{
  int a, b, add;
  public:
  void input() 
{
  cout << "Enter the value of x and y:";
  cin >> a>>b;
 }
  friend void add(temp &t);
  void display() 
 {
   cout << "The sum is :" << add;
 }
};
  void add(temp &t) 
{
   t.add = t.a + t.b;
}
  int main() 
{
   temp t1;
   t1.input();
   add(t1);
   t1.display();
   return 0;
}


// 2 code

#include<iostream>
#include<stdio.h>
using namespace std;

 class First
  {
    int a;
    friend class Second; 
    public:
    void get_num(int x)
    {
        a = x;
    }
  };

 class Second
  {
    int b;
    public:
    void get_num(int y)
    {
        b = y;
    }

   void get_sum( First obj1) 
     {
       int sum;
       sum = obj1.a + b; 
       cout<<"Total: "<<sum;
     }
  };   

int main() 
 {
   int a,b;
   First obj2;           
   Second s;        

   cout<<"Enter two number: ";
   cin>>a>>b;
   obj2.get_num(a);          
   s.get_num(b);         
   s.get_sum(obj2);       

   return 0;
}
