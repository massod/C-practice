
/*This is line counting program from ANSI C programmming language second
*  2nd Edition K&R  Excercise 1.8*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
    
 //counting lines

int  new_line, tabs, blanks;

new_line = 0;
tabs = 0;
blanks = 0;

//Here the update condition for the for loop seems a bit confusing 
//as every time the loop returns c needs to be a new get character from getchar()
// if we did c++ it throws an infinite loop.

 for(int c = getchar(); c != 'z'; c = getchar()){

     //in the following branching statements {} is not nessesary if each branch consist a only a single statement
       if( c == '\n')
        new_line++;

       else if ( c == '\t')
         tabs++;

       else if( c == ' ')
         blanks++;

 }

        printf("%d newlines %d tabs %d blanks\n", new_line,tabs,blanks);
  
 

}