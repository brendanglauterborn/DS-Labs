// **********************************************
// COSC 501 LAB #10
// Brendan Lauterborn
// PROGRAM-NAME: Lab10_1
// A simple description of the program
//***********************************************
//===============================================================
//structure.cpp
//larry wall, 1954-09-27
//===============================================================
#include <iostream>
#include <string>
using namespace std;
struct Date {
    //complete...
    int year, month, day;
};
struct Person {
    //complete...
    string fname, lname;
    Date dob;
    int age;
};

int calcAge(Person p,Date curdate); //calculate the current age
void printInfo(Person p);   //print personal information

int main() {
    Date today = {2024, 11, 13}; //yyyy,mm,dd
    Person p;
    
    //p.dob = { 1999, 5, 30 };
    p.fname = "Brendan";
    p.lname = "Lauterborn";
    p.dob.year = 1999;
    p.dob.month = 5;
    p.dob.day = 30;
    // cout << "\nEnter first name: ";
    // cin >> p.fname;
    // cout << "\nEnter last name: ";
    // cin >> p.lname;
    // cout << "\nEnter birth year: ";
    // cin >> p.dob.year;
    // cout << "\nEnter birth month: ";
    // cin >> p.dob.month;
    // cout << "\nEnter birth day: ";
    // cin >> p.dob.day;

    //calcAge...
    p.age = calcAge(p, today);
    //printInfo...
    printInfo(p);
    return (0);
}

//stubs...
//calcAge...
int calcAge(Person p,Date curdate){
    //cout << curdate.year << endl<< p.dob.year;
    int age = curdate.year - p.dob.year;
    if(curdate.month <= p.dob.month){
        if(curdate.day <= p.dob.day){
            age--;
        }
    }
    return age;
}
//printInfo...
void printInfo(Person p){
    printf("\nName: %s %s", p.fname.c_str(), p.lname.c_str());
    printf("\nAge: %d", p.age);
}




