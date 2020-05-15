
/*This is line counting program from ANSI C  Book */

#include <stdio.h>


int main(int argc, char* argv[]){
    
    if( argc < 3){

        printf("Error!\n");
        return 1;
    }

    int c , nl;

    nl = 0;
    while((c = getchar()) != EOF){
        if( c == '\n'){
            nl++;
        }
        printf("%d\n",nl);
    }

}