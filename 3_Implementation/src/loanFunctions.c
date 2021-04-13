#include "loanFunctions.h"
#include <math.h>

int months(int *num1, int *num2){
    return ((*num1)*12 + *num2);
}

float monthlyRate(float *ann_int){
    return ((*ann_int)/1200);
}

float everyMonthInstallment(float *operator1, float *operator2 , int *operator3 ){
    float tempVariable___LOAN = 0;
    tempVariable___LOAN = (float)pow(( 1  + *operator2 ), (*operator3));
    return (*operator1 * *operator2 * tempVariable___LOAN)  / (tempVariable___LOAN - 1);  
}


