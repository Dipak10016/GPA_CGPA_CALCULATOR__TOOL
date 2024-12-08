#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>
using namespace std;

// Function to calculate GPA
int calculateGPA();

// Function to calculate CGPA
void calculateCGPA();

// Function to handle user choices
void method();

int i, l, choice, repChoice, count, credit, totalCr, credits, totalCredits = 0;
float total = 0, sumTotal, allCredits;

int main() {
    system("cls");
    cout << "\x1B[31m**************************************************************************" << endl;
    cout << "\x1B[32m                            GPA & CGPA Calculator                          " << endl;
    cout << "\x1B[31m**************************************************************************" << endl;
    cout << "            MENU:" << endl;
    cout << "                   1. Calculate GPA" << endl;
    cout << "                   2. Calculate CGPA" << endl;
    cout << "                   3. Method for calculations" << endl;
    cout << "                   4. Exit" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    sub:
    while(1) {
        cout << "Enter your choice: ";
        cin >> i;
        switch(i) {
            case 1:
                calculateGPA();
                break;
            case 2:
                calculateCGPA();
                break;
            case 3:
                cout << "exit";
                exit(0);
                break;
            default:
                cout << "Invalid input. Try again!\n" << endl;
                goto sub;
        }
    }
}

void calculateCGPA() {
    system("cls");
    cout << "\x1B[32m-------------- CGPA Calculating -----------------\n\n" << endl;
    cout << "How many semester results? :";
    cin >> l;
    vector<float> v(l);

    for(int i = 0; i < v.size(); i++) {
        cout << "\nEnter Semester " << 1 + i << " result:\n";
        cin >> v[i];
    }
    cout << endl;

    for(int i = 0; i < v.size(); i++) {
        total += v[i];
    }
    total = total / l;
    cout << "\x1B[36m******* Your CGPA is: " << total << " ********" << endl;

    sub:
    cout << "\x1B[31m\n1. Calculate Again\n2. Main Menu\n3. Exit\n\nYour choice: ";
    cin >> repChoice;

    while(1) {
        switch(repChoice) {
            case 1:
                calculateCGPA();
                break;
            case 2:
                main();
                break;
            case 3:
                cout << "exit";
                exit(0);
                break;
            default:
                cout << "\nInvalid input! Try again!" << endl;
                goto sub;
        }
    }
}

int calculateGPA() {
    system("cls");
    cout << "\x1B[32m--------------------------GPA Calculating--------------------------------" << endl;
    cout << "\x1B[31m According to MUMBAI UNIVERSITY credits are assigned as follows \n";
    cout << "\x1B[37mSEM-1 subjects---> \n\t M-1 BEE MECHANICS=3\n\t\t\tPHYSICS-1 CHEMISTRY-1=2\n";
    cout << "SEM-2 subjects----> \n\t M-2 C(PROGRAMMING)=3\n\t\t\tPHYSICS-2 CHEMISTRY-2 GRAPHICS=2\n";
    cout << "SEM-3 subjects-------> \n\tM-3 DLCOA DG DS DSGT=3";
    cout << "\x1B[31m\nUpcoming semester credits adding coming soon..............................\n";

    cout << "\nHow many subjects' points to calculate? ";
    cin >> count;
    vector<float> v(count);

    for(int i = 0; i < v.size(); i++) {
        cout << "\x1B[33m\nEnter " << 1 + i << " subject credits: ";
        cin >> credits;
        cout << "Enter " << 1 + i << " subject IA(AVG)-MARKS: ";
        cin >> v[i];
        int xTotal = v[i];
        cout << "Enter " << 1 + i << " subject semester marks(points): ";
        cin >> v[i];
        int yTotal = v[i];
        total = xTotal + yTotal;
        cout << "Total marks: " << total << endl;

        if(credits == 3) {
            credit = (total >= 80) ? 10 : (total >= 75) ? 9 : (total >= 70) ? 8 : (total >= 60) ? 7 : (total >= 50) ? 6 : (total >= 45) ? 5 : (total >= 40) ? 5 : 4;
            totalCr = credit * credits;
            cout << "Subject credit: " << totalCr << endl;
        }

        if(credits == 2) {
            credit = (total >= 60) ? 10 : (total >= 55) ? 9 : (total >= 50) ? 8 : (total >= 40) ? 7 : (total >= 30) ? 6 : (total >= 25) ? 5 : (total >= 20) ? 5 : 4;
            totalCr = credit * credits;
            cout << "\nSubject credit: " << totalCr << endl;
        }
        allCredits += credits;
        totalCredits += totalCr;
    }

    cout << "\nYour total credits: " << totalCredits << endl;
    cout << "\nAll subject basic credits: " << allCredits << " " << endl;
    cout << "\x1B[36m\n*** Your CGPA is " << totalCredits / allCredits << " *****" << endl;

    sub:
    cout << "\x1B[31m\n\n\n1. Calculate Again\n2. Main Menu\n3. Exit\n\nYour Input: ";
    cin >> repChoice;

    while(1) {
        switch(repChoice) {
            case 1:
                calculateCGPA();
                break;
            case 2:
                main();
                break;
            case 3:
                cout << "exit";
                exit(0);
                break;
            default:
                cout << "\nInvalid input. Try again!" << endl;
                goto sub;
        }
    }
}
