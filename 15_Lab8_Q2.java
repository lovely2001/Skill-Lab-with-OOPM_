package com.company;
import java.util.*;

class Employee
{
    Scanner s=new Scanner(System.in);
    int emp_id;
    int emp_salary;

    Employee()
    {
        System.out.println("enter empid::");
        emp_id=s.nextInt();
        System.out.println("enter empsalary::");
        emp_salary=s.nextInt();
    }

    void getDetails()
    {
        System.out.println("EmployeeID is ::");
        System.out.println("EmployeeSalary is ::");
    }


}

class permanant_Employee extends Employee
        {
        int hike;

        permanant_Employee( int increment)
        {
        hike = increment;
        }

        void getDetails()
        {
            System.out.println("EmployeeID is ::" + emp_id);
            System.out.println("Employee total salary is ::" + generate_salary());
        }

        int generate_salary()
        {
        return (emp_salary + hike);
        }
        }

class temporary_Employee extends Employee
{
    int hike;

    temporary_Employee( int increment)
    {
        hike = increment;
    }

    void getDetails()
    {
     System.out.println("EmployeeID is ::" + emp_id);
     System.out.println("Employee total salary is ::" + generate_salary());
    }

    int generate_salary()
    {
        return (emp_salary + hike);
    }
}

public class Main {

    public static void main(String[] args) {
    permanant_Employee p = new permanant_Employee(3200);
    p.getDetails();
    temporary_Employee t = new  temporary_Employee(1600);
    t.getDetails();

    }
}
