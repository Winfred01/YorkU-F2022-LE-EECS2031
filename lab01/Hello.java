/***************************************
* 22Fa - Lab01 *
* Author: Last name, first name *
* Email: Your email address *
* EECS username: Your eecs login user name *
* Yorku Student #: Your student number
****************************************/

import java.util.Scanner;

public class Hello {

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter your name: ");
  String name = scan.next();

  System.out.print("Please enter an integer number: ");
  int a = scan.nextInt();

  int b = a * 2;
  int c = a * 3; 
  
  System.out.println("Hi ");       
  System.out.printf("");

 }   
}

