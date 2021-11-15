package com.company;
import java.util.*;

interface Management
{
    void selectCandidate();
}

interface Department
{
    void  allotSubject();
}

class HOD implements Department, Management
{
    String Candidate;
    String Subject;
    void getdata()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Candidate name:");
        Candidate=in.next();
        System.out.println("Enter Subject:");
        Subject=in.next();
    }
    public void selectCandidate()
    {
        System.out.println("Candidate Name : "+Candidate );
    }
    public void allotSubject()
    {
        System.out.println("Subject Alloted : "+Subject);
    }
}

class Main
{
    public static void main (String[] args)
    {
        HOD ob = new HOD();
        ob.getdata();
        ob.selectCandidate();
        ob.allotSubject();
    }
}
