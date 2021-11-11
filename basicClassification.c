#include <math.h>
#include <stdio.h>
#include "NumClass.h"

int isPrime(int num){
    if (num<1)
        return 0;
    if (num > 2 && num % 2 == 0)
        return 0;
    for (int i = 3;i<num/2;i +=2){
        if((num % i) == 0)
            return 0;    
    }
    return 1;
}

int isStrong(int num){
    int sum = 1,total = 0;
    int dem = num;
    int now;
    while(num != 0){
        now = num%10;
        num = num/10;
        while(now>1){
            sum *= now;
            now--;
        }
        if(now!=0){
            total += sum;
            sum  = 1;
        }

    }
    if (total == dem)
        return 1;
    else
        return 0;    
}