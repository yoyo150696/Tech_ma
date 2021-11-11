#include <math.h>
#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int num){
  static int sum = 0;
  static int pass = 1;
  static int n;
  if(pass == 1){
    n = num;
    pass = 0;
  }
  if(num != 0 ){
    sum = sum*10+num%10;
    isPalindrome(num/10);
  }  
  else if (sum == n){
    sum = 0;
    pass = 1;
    return 1;
  }
  else{
    sum = 0;
    pass = 1;
    return 0;
  }
}
int isArmstrong(int num) {
  int originalNum,remainder;
  static int n;
  static int i = 0;
  static int pass = 1;
  static float result = 0.0;
  if(pass == 1){
    for(int b = num; b != 0; b /= 10){ 
      i++;
    }
    pass = 0;
    n = num;
  }
  if(num != 0) {
    remainder = num % 10;
    result += pow(remainder, i);
    isArmstrong(num/10);
  }
  else if ((int)result == n){
    i = 0;
    pass = 1;
    result = 0.0;
    return 1;
  }
  else{
    i = 0;
    pass = 1;
    result = 0.0;
    return 0;
  } 
}