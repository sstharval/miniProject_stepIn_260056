# Loan Calculator

The Loan Calculator starts with asking the user about the Principal (P) , Annual Rate of Interest(R) and Tenrue(Years Months). After this the program will ask for the method of repayment and
accordingly the outout .csv file will be generated.

## Program Flow Diagram
[Program Flow Diagram](https://github.com/sstharval/miniProject_stepIn_260056/blob/3823ec75ffa8ac6258292c5b7709d32098069fd4/2_Architecture/FlowDiagram%20-UML.png)

## Explanation of Functions used
functions used : 
- months - return the total months from the input given by users (Tenure Years).
  input type - int int
  output type - int
  **Explanation:** If user inputs 5  2 , the function will output 5*12 + 2 =  62 months.

- monthlyRate - returns the monthly interest applied.
  input type - float
  output type - float
  **Explanation:** If user inputs 5.00 , the function will output 5.00/1200 = 0.0041667 

- everyMonthInstallment - returns the Every Monthly to be applied in Amortized Repayment Method
  input type - float float int
  output type - foat
  **Explanation** - In this function, 1st input paramater will be Principal, 2nd will be monthly interest applied and the 3rd paramter is totalMonths.

[EMI Diagram](https://github.com/sstharval/miniProject_stepIn_260056/blob/c931ec66bd9011663d1069720a02a5d311753b15/2_Architecture/emi-calculator-example-1.png)
  
## Program Function Diagram (adopted from Class UML Diagram)
[Function Diagram](https://github.com/sstharval/miniProject_stepIn_260056/blob/c931ec66bd9011663d1069720a02a5d311753b15/2_Architecture/Functions%20File%20Design.png)

## Use Case Diagram
[Use Case Diagram](https://github.com/sstharval/miniProject_stepIn_260056/blob/c931ec66bd9011663d1069720a02a5d311753b15/2_Architecture/UseCase%20Diagram.png)

