#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNumber;
    string branch;
    float marks;
public:
    Student(string n, int a, int r, string b, float m) 
        : Person(n, a), rollNumber(r), branch(b), marks(m) {}
    float calculateCGPA() { return marks / 10; }
    void display() override {
        cout << "Student Details:\n";
        Person::display();
        cout << "Roll Number: " << rollNumber << "\nBranch: " << branch 
             << "\nMarks: " << marks << ", CGPA: " << calculateCGPA() << endl;
    }
    friend class Administration;
};

class Faculty : virtual public Person {
protected:
    int facultyID;
    string department;
    float salary;
public:
    Faculty(string n, int a, int fID, string dept, float sal) 
        : Person(n, a), facultyID(fID), department(dept), salary(sal) {}
    void display() override {
        cout << "Faculty Details:\n";
        Person::display();
        cout << "Faculty ID: " << facultyID << "\nDepartment: " << department 
             << "\nSalary: " << salary << endl;
    }
    friend class Administration;
};

class TeachingAssistant : public Student, public Faculty {
public:
    TeachingAssistant(string n, int a, int r, string b, float m, int fID, string dept, float sal)
        : Person(n, a), Student(n, a, r, b, m), Faculty(n, a, fID, dept, sal) {}
    void display() override {
        cout << "Teaching Assistant Details:\n";
        Person::display();
        cout << "Roll Number: " << rollNumber << "\nBranch: " << branch;
        cout << "\nFaculty ID: " << facultyID << "\nDepartment: " << department 
             << "\nSalary: " << salary << endl;
    }
};

class Administration {
public:
    static void showDetails(Student &s, Faculty &f) {
        cout << "\nAdministration Friend Function:\n";
        cout << "Student " << s.name << " from " << s.branch << " scored " << s.marks << " marks." << endl;
        cout << "Faculty " << f.name << " teaches " << f.department << "." << endl;
    }
};

int main() {
    Student s("Piyush Patil", 20, 2392, "CSE (AI-ML)", 89);
    Faculty f(" D Mahajan Sir ", 45, 1001, "OOP", 80000);
    TeachingAssistant ta("Babar sir", 25, 1923105, "CSE (AI-ML)", 85, 2005, "Artificial Intelligence", 50000);

    s.display();
    cout << endl;
    f.display();
    cout << endl;
    ta.display();
    cout << endl;

    Administration::showDetails(s, f);
    
    return 0;
}

