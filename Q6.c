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
int radius;

void useCircle(int radius){
    int diameter = radius * 2;
    int circumference = 2 * 3.14 * radius;
    int area = 3.14 * pow(radius,2);
        printf("The circle with the radius of %d has a diameter of %d, a circumference of %d and a area of %d \n", radius, diameter, circumference, area);
}

int main(){
 printf("Please input the radius of the circle : ");
 scanf("%d", &radius);
 useCircle(radius);
return 0;}