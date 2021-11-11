#include <math.h>
#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int num){
    int sum = 0;
    for(int temp_num = num; temp_num != 0;temp_num/=10){
        sum = sum*10+temp_num%10;
    } 
    if (sum == num)
      return 1;
    else
    return 0;
 }
int isArmstrong(int num) {
    int remainder, n = 0;
    float result = 0.0;
    for (int i = num; i != 0; ++n) {
        i /= 10;
    }

   for (int i = num; i != 0; i /= 10) {
       remainder = i % 10;
       
       result += pow(remainder, n);
   }

   if ((int)result == num){
       return 1;
   }
   else{
       return 0;
   }
}
