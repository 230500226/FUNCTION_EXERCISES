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
#include <stdbool.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

// bool isEven(int number); redundant?

bool isEven(int number){
    if(number % 2 == 0){
        return true;
        }else{
                return false;
            };
}
/************* MAIN FUNCTION**************/
int main(){
 int number;
 printf("Please input a number to check if it is odd or even :");
 scanf("%d",&number);
    if(isEven(number)==true){
        printf("The number is even\n");
    }  else   {
        printf("The number is not even\n");
    }
 
return 0;}
