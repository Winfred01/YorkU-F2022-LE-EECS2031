
#include <stdio.h>
#include <math.h>

double my_pow(double base, double exponent);

int main(int argc, char *argv[])
{
	
   double base; 
   int expon;  
   printf("Enter base and power: ");
   scanf("%lf %d", &base, &expon);

   while (base != -1000){
        double res1 = pow(base, expon);
        double res2 = my_pow(base, expon);
        printf("pow:    %.4f\n", res1);
        printf("my_pow: %.4f\n", res2);


        printf("Enter base and power: ");
        scanf("%lf %d", &base, &expon);


    }
	
    return 0;
}

// This function shall be a RECURSIVE function
// i.e., this function should not use any loop(s) in it
double my_pow(double base, double exponent)
{
     if (exponent < 0) return 1.0/my_pow(base, -exponent);
     if (exponent == 0) return 1;
     else {
          return my_pow(base, exponent-1)*base;
     }

}
