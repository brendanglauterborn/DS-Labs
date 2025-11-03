// **********************************************
// COSC 501 LAB #5
// Brendan Lauterborn
// PROGRAM-NAME: Lab5_3
// A simple description of the program
//***********************************************
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
double grade(double a, double b, double c, double d);

main(){
    int assignment, lab, midterm, the_final;
    cout << "Enter your assignment score: ";
    cin >> assignment;
    cout << "Enter your lab score: ";
    cin >> lab;
    cout << "Enter your midterm score: ";
    cin >> midterm;
    cout << "Enter your final score: ";
    cin >> the_final;
    double final_grade = grade(assignment, lab, midterm, the_final);
    
    if(final_grade < 60){
        printf("Your final grade is %3.2f and your grade is an F", final_grade);
    }
    else if(final_grade < 70){
        printf("Your final grade is %3.2f and your grade is an D", final_grade);
    }
    else if(final_grade < 80){
        printf("Your final grade is %3.2f and your grade is an C", final_grade);
    }
    else if(final_grade < 90){
        printf("Your final grade is %3.2f and your grade is an B", final_grade);
    }
    else if(final_grade <= 100){
        printf("Your final grade is %3.2f and your grade is an A", final_grade);
    }

}
double grade(double a, double b, double c, double d){
    double grade = (a * .2) + (b * .2) + (c * .3) + (d * .3);
    return grade;
}
