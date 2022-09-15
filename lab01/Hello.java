/***************************************
* 22Fa - Lab01 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
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
  
  System.out.println("Hi " +name+ ", you entered "+a+". Double and triple of "+a+" is "+b+" and "+c+", respectively.");
  System.out.printf("Hi %s, you entered %d. Double and triple of %d is %d and %d, respectively.\n", name, a, a, b, c);

 }   
}

