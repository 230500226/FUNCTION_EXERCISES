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
int useFactorial(int number){
    int output = 1;
        if (number>=0){
            for (int i=1; i<=number ; i++){
                output = output * i;
                //output *= i;
            }
        };
    return output;
}

int main(){
    int number;
        printf("please input your number to perform factorial operation to : ");
        scanf("%d",&number);
 
            printf("%d! is %d\n", number, useFactorial(number));
    
return 0;}