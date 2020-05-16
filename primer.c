
/*This is line counting program from ANSI C  Book */

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char* argv[]){
    
   //print Fahrenheit - Celsius table
   int fahr, celsius;
   

   fahr = LOWER;
   while(fahr <= UPPER){
       celsius = 5 * (fahr-32) / 9;
       printf("%d\t%d\n",fahr,celsius);
       fahr = fahr + STEP;
   }

}