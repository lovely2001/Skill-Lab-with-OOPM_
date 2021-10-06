package com.company;
import java.util.Scanner;
public class Main {                                //Class Main
    Scanner in = new Scanner(System.in);             
    //Declaring Variables
    int Employ_number;    
    String Employ_name;
    double Basic;
    double DA;
    double IT;
    double Salary;
    public Main(){

    }

    void get_details() {                                       //Method to get details
        System.out.println("Enter the Id of Employee : ");
        Employ_number = in.nextInt();
        System.out.println("Enter the name of Employee : ");
        Employ_name = in.next();
        System.out.println("Enter the Basic Salary of Employee");
        Basic = in.nextFloat();
    }

    void calculate_details() {                                       //Method to Calculate details
        DA = 1.32 * (Basic);
        IT = 0.30 * (Basic + DA);
        Salary = (Basic + DA) - IT;
    }

    void print_details() {                                           //Method to find details
        System.out.println("Employ Id" + Employ_number);
        System.out.println("Employ name : " + Employ_name);
        System.out.println("Employ Basic Salary : " + Basic);
        System.out.println("Employ DA : " + DA);
        System.out.println("Employ IT : " + IT);
        System.out.println("Employ Salary : " + Salary);
    }

    public static void main(String[] args) {
        Main[] obj = new Main[2];                           //Array of object to take Multiple details
        for (int i = 0; i < 2; i++) {
            System.out.println("Enter details of Employee:"+(i+1));
            obj[i]= new Main();
            obj[i].get_details();
            obj[i].calculate_details();
        }
        for (int i = 0; i < 2; i++) {
            obj[i].print_details();
        }
    }

}
