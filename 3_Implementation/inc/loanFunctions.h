/**
 * @file myFunctions.h
 * @author Shubham Tharval
 * @brief Includes all loan_calculator.c functions initializaion.
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MYFUNCTIONS_H__
#define __MYFUNCTIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief months(int *num1, int *num2)
 * months function to return number of months to the program from the user input
 * 
 * @param num1 number of years input
 * @param num2 number of months input
 * @return int  (num1)*12 + num2
 */
int months(int *num1, int *num2);

/**
 * @brief monthlyRate(float *ann_int)
 * Monthly Interest Rate
 * The rate interest provided by the lenders is on annual terms. 
 * For calculating monthly installments we require monthly applicable interest rate.
 * So this function performs the same functions
 * @param ann_int 
 * @return int 
 */

float monthlyRate(float *ann_int);

/**
 * @brief everyMonthInstallment(float *operator1, float *operator2 , float *operator4 )
 * Function to calculate t
 * 
 * @param operator1 - Principal Amount
 * @param operator2 - Monthly Rate of Interest
 * @param operator3 - Total number of months
 * @return float 
 */
float everyMonthInstallment(float *operator1, float *operator2 , int *operator3 );


#endif