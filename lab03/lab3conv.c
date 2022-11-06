/***************************************
* 22Fa - Lab03 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>
float funct_IF(int op1, char operator, float op2);
float funct_II(int op1, char operator, int op2);
float funct_FF(float op1, char operator, float op2);

main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 float a = 9/2;// output 4.000000
 float b = 9*1.0/2;  // output 4.500000, force 9 to be converted before
 float c = 9/2*1.0;  // output 4.000000, force 2 to be converted before /, but not working
 float c2 = 9/(2*1.0); // output 4.500000, force 2 to be converted before /
 float d = (float)9/2;  // output 4.500000, cast 9 before /
 float e =  9/(float)2; // output 4.500000, cast 2 before /
 float f = (float) (9/2); // output 4.000000, cast after /, nope
 printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
 printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);
  
 // conversion in arithemetic expressions
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversion over assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n", i, j);

 //---------------------------------------
// .....
  printf("Enter operand_1 operator operand_2 separated by blanks> ");
  scanf("%d %c %f", &op1, &operator, &op2);

  while(!((op1 == -1) && (op2 == -1))){
    printf("Your input '%d %c %f' result in\n", op1, operator, op2);
    printf("%f (funct_IF)\n", funct_IF(op1, operator, op2));
    printf("%f (funct_II)\n", funct_II(op1, operator, op2));
    printf("%f (funct_FF)\n", funct_FF(op1, operator, op2));

    printf("Enter operand_1 operator operand_2 separated by blanks> ");
    scanf("%d %c %f", &op1, &operator, &op2);
  }

}
 
float funct_IF(int op1, char operator, float op2)
{
   if(operator == '+'){
        return op1 + op2;
   }else if(operator == '-'){
        return op1 - op2;
   }else if(operator == '*'){
        return op1 * op2;
   }else if(operator == '/'){
        return op1 / op2;
   }
}

float funct_II(int op1, char operator, int op2)
{  
   if(operator == '+'){
        return op1 + op2;
   }else if(operator == '-'){
        return op1 - op2;
   }else if(operator == '*'){
        return op1 * op2;
   }else if(operator == '/'){
        return op1 / op2;
   }
}

float funct_FF(float op1, char operator, float op2)
{
   if(operator == '+'){
        return op1 + op2;
   }else if(operator == '-'){
        return op1 - op2;
   }else if(operator == '*'){
        return op1 * op2;
   }else if(operator == '/'){
        return op1 / op2;
   }
}

 
/*  your explanations 
    This is because when two different types are used to make a conversion, it may change their values.
    Just like when two float variables are converted to int, only the integer part is retained.
    Conversely, when an int variable is converted to a float, only six zeros are added to the decimal point.

*/
