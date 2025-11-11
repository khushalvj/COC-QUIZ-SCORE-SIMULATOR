# COC-QUIZ-SCORE-SIMULATOR

## Project Title & Description
The **Quiz Score Simulator** is a C program designed to input quiz scores of multiple students, store them in an array, process the data using functions, and generate a clean performance report.  
The program calculates:  
- Class Average (Mean)  
- Highest Score  
- Lowest Score  
- Percentage of Each Student (based on total marks)  
- Class Average Percentage

A clean, well-commented C program to simulate quiz scores.

## Concepts Used
- **C (Day 2–6):** variables, if-statements, for-loops, 1D arrays, functions
- **Maths (Day 2 & 5):** Mean (Average), Min/Max, Percentage

## Build & Run
gcc -std=c99 main.c -o student_analyzer
./student_analyzer

## What it does
- Reads N scores into an array
- Calculates mean, highest, lowest
- Prints each student’s percentage (given total marks)
- Prints class average percentage

 ## ⚙️ How to Compile
Use the following gcc command:
gcc -std=c99 main.c 

## ▶️ How to Run
After compilation, execute the program 

## 📌 Example Run

Enter the number of students: 5
Enter total marks for the quiz (e.g., 100): 100

Enter 5 scores:
Score 1: 80
Score 2: 95
Score 3: 61
Score 4: 72
Score 5: 90

SCORE REPORT :
Class Average (Score): 79.60
Class Average (Percentage): 79.60%
Highest Score: 95
Lowest Score: 61

Individual Percentages :
Student 1: 80.00%
Student 2: 95.00%
Student 3: 61.00%
Student 4: 72.00%
Student 5: 90.00%
     THE END :)
