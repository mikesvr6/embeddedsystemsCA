
#include <stdio.h>
#include "mbed.h"


 int A = 10  ; // these are the Variables provided for this question, we use int to apply them as variables in the program
    int B = 20 ;
    int C = 30 ;


int main() {

   
    int D = A + B ; // or first new int described as the sum of int A and int B

    int E = C - D ; // or second new int describes as the variable C minus the new variable D
    

printf("D is = %d\n", D); // here we use print statements to upload the new variables to the console we include \n after the %d to specify a new line
printf("E is = %d\n", E);
    
    return 0;

}