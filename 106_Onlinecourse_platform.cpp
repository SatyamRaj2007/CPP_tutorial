#include<iostream>
#include<string>
using namespace std;

class Course {
protected:
    string courseName;

public:
    void getCourse() {
        cout << "Enter Course Name: ";
        getline(cin, courseName);
    }

    void displayCourse() {
        cout << "Course Name: " << courseName << endl;
    }
};

class ProgrammingCourse : public Course {
protected:
    string language;

public:
    void getProgrammingCourse() {
        cout << "Enter Programming Language: ";
        getline(cin, language);
    }

    void displayProgrammingCourse() {
        cout << "Language: " << language << endl;
    }
};

class AdvancedCourse : public ProgrammingCourse {
private:
    string difficultyLevel;

public:
    void getAdvancedCourse() {
        cout << "Enter Difficulty Level: ";
        getline(cin, difficultyLevel);
    }

    void displayAdvancedCourse() {
        displayCourse();
        displayProgrammingCourse();
        cout << "Difficulty Level: " << difficultyLevel << endl;
    }
};

int main() {
    AdvancedCourse ac;

    ac.getCourse();
    ac.getProgrammingCourse();
    ac.getAdvancedCourse();

    cout << "\nCourse Details:\n";
    ac.displayAdvancedCourse();

    return 0;
}