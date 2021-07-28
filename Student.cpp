#include "Student.h"
#include <iostream>

Student::Student(){
    name = "";
    subject1 = 0;
    subject2 = 0;
    subject3 = 0;
}

void Student::addDetails(string sName, int sub1, int sub2, int sub3){
    name = sName;
    subject1 = sub1;
    subject2 = sub2;
    subject3 = sub3;
}

void Student::updateMarks(int sub1, int sub2, int sub3){
    subject1 = sub1;
    subject2 = sub2;
    subject3 = sub3;
}

void Student::showDetails(){
    cout << "Name : " << name << endl;
    cout << "Subject1 marks : " << subject1 << endl;
    cout << "Subject2 marks : " << subject2 << endl;
    cout << "Subject3 marks : " << subject3 << endl;
}
