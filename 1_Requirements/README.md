# Loan Calculator
## Introduction
**1.** The Loan Calculator is designed to help user to know about the monthly installments on the loan taken. It will provide the customer to choose his mode of loan repayment -          Traditional Compound Interest Method or Amortization Output.
  
**2.** Whenever a consumer takes a loan, he is always worried about his monthly installments towards the loan.The given application produces a .csv output file which can be easily        analysed by the user to manage his future expense. 

**3.** According to the type of repayment opted by user, the monthly budget can be planned by the user. This application can also come handy when user is comparison loan options          from diferrent lenders.
            
### Benefits
Benefits range from:

1. Tabulation of monthly shelling towards repayment of loan.

2. Total amount paid towards loan repayment.

3. For comparing different loan options and benefits.

4. Output in .csv format.

## Defining Our System Basic Requirements
1. Principal (P)

2. Annual Rate of Interest (R)

3. Tenure of Loan (Years  Months)

4. Monthly Interest in Traditional Compound Interest Repayment **(A)**

5. Monthly Payment towards Principal (Pmonthly) **(B)**

6. Every Monthaly Installment (EMI) in Amortized Repayment **(A+B)**

##Explaination
- In **Traditional Compound Interest Repayment Method**, the user will asked every month about the Amount of Monthly Payment towards Principal (Pmonthly) as prompted in application.(Entire details are provided in Architecture.) So the initial monthly interest will be levied as per the Principal (P) loan amount taken.  

- While designing following assumptions are taken:
    - Lender Charges are ignored.
    
    - Change in interest rates during the tenure are not taken into account.
    
    - Two Output Files produced will be - Installment_amortized.csv & Installment_compound.csv
    
    - The application does not take gurantee of the user's loan amount.

## Basic Understanding of Loan Calculator

![BasicStructure](https://github.com/sstharval/miniProject_stepIn_260056/blob/a1b629f1ea5f37e95e6ba8901e3429a5f24b67ca/1_Requirements/FlowDiagram.png)

## SWOT Analysis 

![SWOTAnalysis](https://github.com/sstharval/miniProject_stepIn_260056/blob/f05e01409838e1752c6ccb0e9ea0bef7e3439517/1_Requirements/SWOT_new.png)

# 4W&#39;s and 1&#39;H

## Who
User's in search of affordable loans. 

## What
A simple calculations to calculate every month's loan installment irrespective of loan repayment methods.

## When
Since the lenders and their offers are on a rise, loanee can be assured to compared all their offering using my application and take his decision.

## Where
Basic computer application. Can be also integrated with a Mobile Application.

## How
With Loan Calculator, the installment amount and interest can be analysed easily on a monthly basis till loan is repaid. 

# Detail requirements

## High Level Requirements
| ID | Description | Category |
| ----- | ----- | ------- | 
| HR01 | The User should input the Principal(P) | Techincal | 
| HR02 | The User should input the Annual Rate of Interest(R) | Techincal | 
| HR03 | The User should input the Tenure(Years Months)  | Techincal |
| HR04 | The User shall be able to choose the loan repayment method | Techincal | 
| HR05 | The User shall be able to input Monthly Payment towards Principal(Pmonthly) when prompted by program each month.  | Techincal |
| HR06 | The User shall be able to access the output generated .csv files| Techincal |

##  Low level Requirements
 
| ID | Description | Category | 
| ------ | --------- | ------ |
| LR01 | The first line will input the principal Amount from the User - float datatype is assigned |Techincal| 
| LR02 | The second line will take input as annual rate of interest and a function is created which find the monthly applicable interest. | Techincal|
| LR03 | The third line will input take input as Tenure (Year Month), A created function will output this into total months  | Techincal|
| LR04 | The User choice will be asked for the loan repayment part viz A(Traditional Compounded Method) or B(Amortization Method)| Techincal | 
| LR05 | If the User selects A, for every month the application will prompt a principal payment input which upon user can be fed. If user does not wish to pay towards the Principal, he may enter 0 | Techincal| 
| LR06 | The remaining principal amount pending at the end of entire tenure will be prompted by application to pay to the lender | Technical | 
| LR07 | If the User selects B, the final out .csv file will be generated.  | Techincal| 
| LR08 | If in any case, amount is negative - the lender will pay back the money | Techincal| 
| LR09 | The program ends and all the variables are destroyed | Techincal| 
