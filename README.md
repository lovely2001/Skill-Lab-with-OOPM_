/* 1-Student Management */
import java.util.Scanner;
class Student {

  Scanner in=new Scanner(System.in);
	String name;
	int roll_no;
	float cgpa;
	char div;
	char branch;
	

	void getdata()
	{
		System.out.println("Enter your name:");
		name=in.next(); 
		System.out.println("Enter your roll number:");
		roll_no=in.nextInt();
		System.out.println("Enter your CGPA:");
		cgpa=in.nextFloat();
		System.out.println("Enter your Division:");
		div=in.next().charAt(0);
		System.out.println("Enter branch:");
		branch=in.next().charAt(0);
		
	}
	
	
	void getdata(String n,int r,float c,char d, char b)
	{
		name=n;
		roll_no=r;
		cgpa=c;
		div=d;
		branch=b;
		
	}
	
	void printdata()
	{
		System.out.println("Name of the student: "+name);
		System.out.println("Roll-no of the student: "+roll_no);
		System.out.println("Cgpa of the student: "+cgpa);
		System.out.println("Division of the student: "+div);
		System.out.println("branch of the student: "+branch);
	}

};
 public class StudentTest {

	public static void main(String[] args) {
	
		Student s1=new Student();
		Student s2=new Student();
		s1.getdata(); 
		s1.printdata();
		s2.getdata();
		s2.printdata();
		
		

	}
	

}


/* 2-Bank management */

import java.util.Scanner;



public class BankLab2 {



	Scanner in=new Scanner(System.in); 

	String name;

	char account_type;

	int account_number,amount;

	float balance;

	

	public BankLab2(String n,int a, char t, float b) {

		// TODO Auto-generated constructor stub

		name = n;

		account_number=a;

		account_type=t;

		balance=b;



	}

	

	int deposit()

	{

		System.out.println("Enter the amount to	deposit: ");

		int amount=in.nextInt();

		if(amount<0)

		{

			System.out.println("Invalid amount,Enter a valid amount"); 

			return 0;

		}

		balance=balance+amount;

		return 1;

	}

	

	int withdraw()

	{

		System.out.println("Your Balance= "	+balance ); 

		System.out.println("Enter amount to withdraw: "); 

		int amount=in.nextInt();

		if (balance<amount)

		{

			System.out.println("Insufficient Balance:	"); 

			return 0;

		}

		if(amount<0)

		{

			System.out.println("Invalid	amount" ); 

			return 0;

		}

		balance=balance-amount; 

		return 1;

	}

	

	void display()

	{

		System.out.println("Name :"+name);

		System.out.println("Account Number:" +account_number);

		System.out.println("Account Type:" +account_type);

		System.out.println("Balance: " +balance);

	}



	public static void main(String[] args) {

		// TODO Auto-generated method stub

		Scanner in=new Scanner(System.in);

		BankLab2 b1=new BankLab2("salman",1,'s',0);

		BankLab2 b2=new BankLab2("makarand",2,'s',0);

		BankLab2 b3=new BankLab2("siddharth",3,'s',0);

		

		System.out.println("Menu");

		System.out.println("1.Deposit");

		System.out.println("2.Withdraw");

		System.out.println("3.Display");
		
                                        System.out.println("Enter option"); 

		int op=in.nextInt();

		char ans;

		do

		{

			System.out.println("Please enter your account number:"); 

			int account_number=in.nextInt();		

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

					default: System.out.println("Enter value between 1 to 3");

							break;

				}

				System.out.println("Do you want to continue?[Y/N]");

				ans=in.next().charAt(0);  //char input in variable ans

				if(ans=='Y' || ans == 'y') 

				{

					System.out.println("Menu");

					System.out.println("1.Deposit");

					System.out.println("2.Withdraw");

					System.out.println("3.Display");

					System.out.println("Enter option"); 

					op=in.nextInt();

				}

					

			}

			while(ans!='N');

	}

}
