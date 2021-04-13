/**
 * @file loan_calculator.c
 * @author Shubham Tharval - SFID : 260056
 * @brief Loan Calculator Project for StepIN C Programming using PBL Approach.
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "loanFunctions.h"


int main(){
    //Initializing input paramters from user;
    float principalAmount = 0;
    float interestAnnual = 0;
    int tenureYears = 0;
    int tenureMonths = 0;
    int totalMonths = 0;
    float perMonth_interest  = 0;
    char choice;
    float loanInstallment = 0;
    float principalPay_perMonth = 0;
    float monthlyInterest = 0;
    float principalRemaining = 0;

    //Starts The Application
    printf("\n\t\t Welcome to Loan Aid Application \t\t\n");
    printf("\t\t This Application helps you find \t\t\n");
    printf("\t\t your monthly installment  \t\t\n");
    printf("Enter Your Principal Amount =");
    scanf("%f", &principalAmount);
    printf("\nEnter Your Annual Interest Rate = ");
    scanf("%f", &interestAnnual);
    printf("Enter Your Tenure (Years  Months) = ");
    scanf("%d %d", &tenureYears, &tenureMonths);
    
    /**
     * @brief The basic conversion/tranformation of input data happens in this part of project
     */


    totalMonths = months( &tenureYears, &tenureMonths);
    perMonth_interest = monthlyRate(&interestAnnual);


    printf("\n Total Months = %d \n" , totalMonths);
    printf("\n Per Month Interest = %f \n", perMonth_interest);


    /**
     * @brief Now the application will request the user for the preferred mode of repayment
     * A - Traditional Compound Interest Method
     * B - Amortization Method
     */


    printf("\n\t\tPreferred Mode of Repayment for Loan \n");
    printf("\n\t A - Traditional Compound Interest Method \n\t B - Amortization Method \n");
    choice = toupper(getch());
    printf("%c", choice);
    switch(choice){
        case 'A':
            puts("\t\t \n\t\tThis part for application is under construction");
            break;
        case 'B':
            puts("Your Monthly Installment  =");
            loanInstallment = round(everyMonthInstallment(&principalAmount, &perMonth_interest, &totalMonths ));
            printf("\t\t %f \n", loanInstallment);
            puts("Month \t Interest Paid(A) \t Principal Paid(B) \t EMI(A+B) \t Principal Pending\n");
            for(int countPrintLoop = 1 ; countPrintLoop <= totalMonths ; countPrintLoop++){
                monthlyInterest = perMonth_interest * principalAmount ;
                principalPay_perMonth = loanInstallment - monthlyInterest ;
                principalRemaining = principalAmount - principalPay_perMonth;
                principalAmount = round(principalRemaining);
                printf(" %d \t\t %f \t\t %f \t\t %f \t\t %f\n ", countPrintLoop, round(monthlyInterest), round(principalPay_perMonth), round(loanInstallment), round(principalRemaining) );
            }

    }
    return 0;
}
