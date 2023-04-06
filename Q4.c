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
int nLength=0;
int sum, digit;
int addDigits(int n, int nLength){
    if (nLength>0){
        digit = n%10;
            sum = digit + sum;
                nLength--;
                    n /= 10;
                        return addDigits(n, nLength);
    } else {
        return sum;
    }

}

int main(){
    int n;

        printf("Please enter the number you would like to add the digits with : ");
        scanf("%d",&n);

        int input = n;

        //n.length
        while(n!=0){
            n=n/10;
            nLength++;
        }

        printf("%d digits added up is %d\n",input,addDigits(input,nLength));

return 0;}