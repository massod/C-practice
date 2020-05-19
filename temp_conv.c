

/* This program displays temperatures converted from celsius to fahrenheit in a tabular format with steps of 20*/

#include <stdio.h>

//program specific constants
#define LOWER 0    //Lower limit of the table
#define UPPER 300  //Upper limit of the table
#define STEP 20    //Step size 

int main(int argc, char* argv[]){

float fahr, celsius;
char c , f;
int deg = 248;  //deg sign from ascii extended character 
c = 'C';
f = 'F';
puts("\nThis is a temperature conversion table from Fahrenheit to Celsius 0 to 300 in the steps of 20 divisions \n");

for( celsius = LOWER ; celsius < UPPER; celsius += STEP){

    //formula for covnvertion from C to F is  F = (C * 9/5 ) + 32

    fahr = ( celsius * 9.0/5.0 ) + 32;

    printf("%6.0f%c%c\t%3.0f%c%c\n", celsius,deg,c,fahr,deg,f);
}

}