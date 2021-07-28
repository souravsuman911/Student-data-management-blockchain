#include <iostream>
#include <string>
#include "Faculty.h"

using namespace std;
string line(40, '=');

Faculty::Faculty(){
    facultyName = "Faculty_1";
}

void Faculty::addDetails(string s, int s1, int s2, int s3){

    if(sList.find(s) != sList.end()){
        cout << "Student is already enrolled" << endl;
        cout << "Kindly update to existing part" << endl;
        return;
    }

    Student stud;
    stud.addDetails(s, s1, s2, s3);
    sList.insert({s, stud});

    stringstream ss;
    ss << s << s1 << s2 << s3;
    string data = ss.str();

    if(eList.find(s) == eList.end()){
        Blockchain eStud;
        eList.insert({s, eStud});
    }
    
    eList[s].AddBlock(Block(2, data));
}

void Faculty::updateMarks(string s, int s1, int s2, int s3){
    if(sList.find(s) == sList.end()){
        cout << "Student named " << s << " not found !" << endl;
        return;
    }

    sList[s].updateMarks(s1, s2, s3);

    stringstream ss;
    ss << s << s1 << s2 << s3;
    string data = ss.str();

    eList[s].AddBlock(Block(0, data));
}

void Faculty::showDetails(){
    cout << endl << line << endl;
    
    cout << "\nName of the Faculty : ";
    cout << facultyName << endl << endl;

    for(auto it : sList){
        sList[it.first].showDetails();
        cout << endl;
    }

    cout << line << endl;
}

void Faculty::showBlockchainDetails(){
    cout << endl << line << endl;
    cout << "\nName of the Faculty : ";
    cout << facultyName << endl << endl;

    for(auto it : eList){
        eList[it.first].printBlockchain();
        cout << endl;
    }

    cout << line << endl;
}

void Faculty::addDetails(){

    string s;
    int s1, s2, s3;
    cout << "Enter name of the student : " << endl;
    getline(cin, s);
    cout << "Enter Subjects of subject 1, subject2, subject3 : " << endl;
    cin >> s1 >> s2 >> s3;

    Student stud;
    stud.addDetails(s, s1, s2, s3);
    sList.insert({s, stud});

    stringstream ss;
    ss << s << s1 << s2 << s3;
    string data = ss.str();

    if(eList.find(s) == eList.end()){
        Blockchain eStud;
        eList.insert({s, eStud});
    }
    
    eList[s].AddBlock(Block(0, data));
}

void Faculty::updateMarks(){

    string s;
    int s1, s2, s3;

    cout << "Enter name of the student : " << endl;
    getline(cin, s);
    cout << "Update marks of subject1 : ";
    cin >> s1;
    cout << "Update marks of subject2 : ";
    cin >> s2;
    cout << "Update marks of subject3 : ";
    cin >> s3;

    if(sList.find(s) == sList.end()){
        cout << "Student not found" << endl;
        return;
    }

    sList[s].updateMarks(s1, s2, s3);

    stringstream ss;
    ss << s << s1 << s2 << s3;
    string data = ss.str();

    eList[s].AddBlock(Block(0, data));
}

void Faculty::showStudentDetails(){
    string s;
    getline(cin, s);

    if(sList.find(s) == sList.end())
        cout << "Student not found" << endl;
    else   
        sList[s].showDetails();
}