#include<iostream>

using namespace std;

class Faculty;
class Student{
    private:
        string name;
        int subject1, subject2, subject3;
        void addDetails(string name, int sub1, int sub2, int sub3);
        void updateMarks(int sub1, int sub2, int sub3);

    public:
        Student();
        void showDetails();

    friend class Faculty;
};
