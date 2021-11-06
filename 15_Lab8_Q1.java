package com.company;
import java.util.*;

class Person {

    String name;
    int age;
    String address;

    public Person() {
        name = "";
        age = 0;
        address = "";
    }

    void getdata() {
        Scanner s = new Scanner(System.in);
        System.out.print("enter name: ");
        name = s.nextLine();
        System.out.println();
        System.out.print("enter age: ");
        age = s.nextInt();
        System.out.println();
        System.out.print("enter address: ");
        s.nextLine();
        address = s.nextLine();
        System.out.println();
    }
    void putdata() {
        System.out.println("name is: " + name);
        System.out.println();
        System.out.println("age is::" + age);
        System.out.println();
        System.out.println("address is: " + address);
        System.out.println();
    }
}
class employee extends Person {
    int emp_id;
    int salary_factor;

    public employee() {
        emp_id = 0;
        salary_factor = 0;

    }
    void getdetails() {
        Scanner s = new Scanner(System.in);
        System.out.print("enter employee id: ");
        emp_id = s.nextInt();
        System.out.println();
        System.out.print("enter Salary Factor: ");
        salary_factor = s.nextInt();
        System.out.println();

    }
    void putdetails() {
        System.out.println("employee id is ::" + emp_id);
        System.out.println();
        System.out.println("Salary Factor is::" + salary_factor);
        System.out.println();
    }
}
class programmer extends employee {
    int hike;
    String technical_skills = "";

    public programmer() {
        hike = 0;
        technical_skills = "";

    }
    void getd() {
        Scanner s = new Scanner(System.in);
        System.out.print("enter hike: ");
        hike = s.nextInt();
        System.out.println();
        System.out.print("enter technical skills: ");
        s.nextLine();
        technical_skills = s.next();
        System.out.println();
    }
    void putd() {
        System.out.println("hike is ::" + hike);
        System.out.println();
        System.out.println("techincal skills is::" + technical_skills);
        System.out.println();
    }
}


public class Main {

    public static void main(String[] args) {
        programmer r[] = new programmer[4];
        r[0] = new programmer();
        r[1] = new programmer();
        r[2] = new programmer();

        for (int i = 0; i<3; i++) {
            System.out.println("Enter details of employee " + (i+1)  );

            r[i].getdata();
            r[i].getdetails();
            r[i].getd();
            r[i].putdata();
            r[i].putdetails();
            r[i].putd();
        }
    }
}
