
#include <iostream>   
#include <map>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

using namespace std;

void addStudentRecord(map<string, vector<int> >& students) {
    string name;
    vector<int> marks(3);
    
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; ++i) {
        cin >> marks[i];
    }
    
    students[name] = marks;
}

void displayStudentRecords(const map<string, vector<int> >& students) {
    for (map<string, vector<int> >::const_iterator it = students.begin(); it != students.end(); ++it) {
        const string& name = it->first;
        const vector<int>& marks = it->second;
        
        double average = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();
        cout << "Student: " << name << ", Marks: ";
        
        for (int i = 0; i < marks.size(); ++i) {
            cout << marks[i] << " ";
        }
        
        cout << ", Average: " << average << endl;
    }
}

void findTopper(const map<string, vector<int> >& students) {
    string topper;
    double highestAverage = -1.0;
    
     for (map<string, vector<int> >::const_iterator it = students.begin(); it != students.end(); ++it) {
        const string& name = it->first;
        const vector<int>& marks = it->second;
        
        double average = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();
        if (average > highestAverage) {
            highestAverage = average;
            topper = name;
        }
    }
    
    cout << "Topper: " << topper << " with average " << highestAverage << endl;
}

int main() {
    map<string, vector<int> > students;
    int choice;
    
    while (true) {
        cout << "\nStudent Marks Management System\n";
        cout << "1. Add student record\n";
        cout << "2. Display all student records\n";
        cout << "3. Find topper\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStudentRecord(students);
                break;
            case 2:
                displayStudentRecords(students);
                break;
            case 3:
                findTopper(students);
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

