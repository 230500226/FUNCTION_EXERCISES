/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 06/04/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int input, output, power;
int usePower(int n, int p){

    while (p>0){
       output *= n;
       p--;
       return usePower(n, p);
    }
    return output;
}

int main(){
    printf("Please input the base of the number and the number of the exponent : ");
        scanf("%d", &input);
        scanf("%d", &power);
            
            output=1;

            printf("%d to the power of %d is %d", input, power, usePower(input,power));

return 0;}