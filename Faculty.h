#include <map>
#include "Student.cpp"

class Faculty{
    private:
        string facultyName;
        map<string, Student> sList;

        map<string, Blockchain> eList;

    public:
        Faculty();
        void addDetails();
        void addDetails(string s, int s1, int s2, int s3);
        void updateMarks();
        void updateMarks(string s, int s1, int s2, int s3);
        void showStudentDetails();
        void showDetails();
        void showBlockchainDetails();
};