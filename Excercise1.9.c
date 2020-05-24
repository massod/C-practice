/* The C programming language 2nd Edition by K&R */

//Excercise 1.9  copying input to output replacing two or more blanks to one 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){

    //declare a variable to hold a char from user
    int c;
    bool blank = false;

    while((c = getchar()) !=  EOF){
       if( c ==  ' ' && blank == false){
           blank = true;
           putchar(c);
        //this branch is for spaces 
       }
   
      if( c !=  ' '){
       
        blank = false;
        putchar(c);
        //this branch is for letters 
      }
    
    } 

}