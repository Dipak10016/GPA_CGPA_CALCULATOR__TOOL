# GPA & CGPA Calculator 📊

This is a C++ program that calculates **GPA** and **CGPA** based on user input. It supports calculations for multiple semesters and includes options to input subject marks and credits for accurate results.

## Features ✨

- **GPA Calculation**: Calculates GPA for a given number of subjects with marks and credits.
- **CGPA Calculation**: Computes the CGPA based on results from multiple semesters.
- **Customizable**: Easily extendable for different credit systems or additional subjects.
- **Menu-driven Interface**: Users can choose between GPA, CGPA, and a method explanation for the calculations.

## How It Works 🔧

1. **GPA Calculation**: The program allows the user to input the marks and credits for each subject, then calculates the GPA based on predefined credit-weighted formulas.
2. **CGPA Calculation**: Users can enter the results for each semester, and the program calculates the CGPA by averaging the semester results.
3. **Method**: Provides an explanation of how calculations are performed for GPA and CGPA.

## Files 📂

- `cgpamy.cpp`: The C++ file containing the logic for GPA and CGPA calculations.
- `README.md`: This readme file.

## Prerequisites ⚙️

- A C++ compiler like GCC, Clang, or MSVC.

## Compilation and Execution 🏗️

1. **Compilation**:
   To compile the program, use the following command (assuming you're using GCC):

   ```bash
   g++ cgpamy.cpp -o cgpamy
   ```

2. **Execution**:
   Once compiled, run the program using:

   ```bash
   ./cgpamy
   ```

## User Interaction 📝

1. **GPA Calculation**:
   - The program will ask for the number of subjects.
   - For each subject, enter the credits and marks.
   - The GPA will be calculated based on predefined rules for different credits (e.g., 3-credit subjects or 2-credit subjects).

2. **CGPA Calculation**:
   - The program will ask how many semesters' results you want to enter.
   - Enter the result for each semester, and the program will calculate your CGPA.

3. **Method for Calculations**:
   - The program explains the calculation methods used for GPA and CGPA.

## Example 💬

Upon running the program, the user will see a menu like:

```
**************************************************************************
                            GPA & CGPA Calculator                          
**************************************************************************
            MENU:
                   1. Calculate GPA
                   2. Calculate CGPA
                   3. Method for calculations
                   4. Exit
--------------------------------------------------------------------------
Enter your choice: 1
--------------------------GPA Calculating--------------------------------
According to MUMBAI UNIVERSITY credits are assigned as follows 
SEM-1 subjects--> 
     M-1 BEE MECHANICS=3
        PHYSICS-1 CHEMISTRY-1=2
...

Enter 1 subject credits: 3
Enter 1 subject IA(AVG)-MARKS: 85
Enter 1 subject semester marks(points): 90
Total marks: 175
Subject credit: 30
...

Your total credits: 30
All subject basic credits: 30 
*** Your GPA is 9.0 ****
```

## License 🛠️

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

