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
#include<stdbool.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int useFibonacci(int n){
        
    if(n<=1){
        return n;
    }
        return useFibonacci(n-1) + useFibonacci(n-2);
}

int main(){
    int number;
        printf("please input your number to perform Fibonacci operation to : ");
        scanf("%d",&number);
 
        printf("The Fibonacci series for %d is : ", number);
        
            for(int i=0;number>i;i++){
                printf("%d, ",useFibonacci(i));
            }
        printf("\n");
return 0;}