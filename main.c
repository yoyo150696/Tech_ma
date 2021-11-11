#include <math.h>
#include <stdio.h>
#include "NumClass.h"


void main(){
    int num1,num2,big,small;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1 > num2){
        big = num1;
        small = num2;
    }
    else{
        big = num2;
        small = num1;
    }
    printf("The Armstrong numbers are:");
    for(int i = small;i<=big;i++){
        if(isArmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes numbers are:");
    for(int i = small;i<=big;i++){
        if(isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i = small;i<=big;i++){
        if(isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i = small;i<=big;i++){
        if(isStrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
}