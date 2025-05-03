#include<iostream>
#include<string>
using namespace std;

class University_Student
{
    string StudentName;
    string StudentID;
    string DepartmentName;
    float CGPA;

public:
    University_Student(string name, string id, string dept, float cgpa)
    {
        StudentName = name;
        StudentID = id;
        DepartmentName = dept;
        CGPA = cgpa;
    }

    University_Student(University_Student &ref)
    {
        StudentName = ref.StudentName;
        StudentID = ref.StudentID;
        DepartmentName = ref.DepartmentName;
        CGPA = ref.CGPA;
    }

    void show()
    {
        cout << "Student Name: " << StudentName << endl;
        cout << "Student ID: " << StudentID << endl;
        cout << "Department: " << DepartmentName << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main()
{
    University_Student s1("Sabbir Hossain", "EEE210101", "EEE", 3.85);
    University_Student s2("Fahim Rahman", "CSE210305", "CSE", 3.92);
    University_Student s3 = s1;
    s1.show();
    cout << "------------------" << endl;
    s2.show();
    cout << "------------------" << endl;
    s3.show();

    return 0;
}

