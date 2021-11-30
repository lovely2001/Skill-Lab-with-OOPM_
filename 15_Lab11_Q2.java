package com.company;
import java.io.*;
import java.util.Scanner;
class IsNum extends Exception{

    public String toString()
    {
        return ("number is not valid it should be an integer : ");
    }

}

class Main{

    void test(int num1,int num2)
    {
        try{

            int res=num1/num2;
            System.out.println();
            System.out.print("        num1/num2 is: ");
            System.out.println(res);
        }
        catch(ArithmeticException e)
        {
            System.out.println(" can't divide by zero "+e);
        }

    }

    public static void main(String args[])
    {
        int num1=0,num2=0;

        Scanner sc = new Scanner(System.in);

        System.out.print("ENTER THE NUMBERS : ");
        try
        {
            if(sc.hasNextInt())
            {
                num1=sc.nextInt();
            }
            else
            {
                throw new IsNum();
            }
            if(sc.hasNextInt())
            {
                num2=sc.nextInt();
            }
            else
            {
                throw new IsNum();
            }
        }

        catch(IsNum u)
        {
            System.out.println(" INVALID ");
            u.printStackTrace();
            System.out.println("his number is not entered");
            System.exit(0);
        }

        System.out.println("numbers are entered ");
        Main e = new Main();
        e.test(num1,num2);
    }
}

