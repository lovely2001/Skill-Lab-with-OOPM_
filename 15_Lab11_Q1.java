package com.company;
import java.util.*;

class OutOfRange extends Exception{
    int num;
    OutOfRange(int a){
        num = a;
    }

    public String toString()
    {
        return ("num is out of range: "+ num);
    }

}

class Main{

    void test(int num)
    {
        try{
            if(num<0||num>10)
                throw new OutOfRange(num);

            System.out.println();
            System.out.print("num square is: ");
            System.out.println( num*num);
        }
        catch(OutOfRange u)
        {
            System.out.println("Out of range ");
            u.printStackTrace();
            System.out.println("This num is not eligible");
            System.exit(0);
        }
        System.out.println("This num is eligible ");
    }

    public static void main(String args[])
    {
        int num;

        Scanner sc = new Scanner(System.in);

        System.out.print("ENTER THE NUMBER : ");
        num = sc.nextInt();

        Main e = new Main();
        e.test(num);
    }
}
