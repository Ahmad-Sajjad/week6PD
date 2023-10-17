#include <iostream>
using namespace std;
float calculateAverage(float marks1, float marks2, float marks3, float marks4, float marks5);
string calculateGrade(float average);
main()
{
    float marks1, marks2, marks3, marks4, marks5;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> marks1;
    cout << "Enter marks for Maths: ";
    cin >> marks2;
    cout << "Enter marks for Chemistry: ";
    cin >> marks3;
    cout << "Enter marks for Social Science: ";
    cin >> marks4;
    cout << "Enter marks for Biology: ";
    cin >> marks5;
    cout << "Student Name: " << name<<endl;
    float average = calculateAverage(marks1,marks2,marks3,marks4,marks5);
    cout << "Percentage: " <<average <<"%"<<endl;
    cout<<"Grade: "<<calculateGrade(average);
}
float calculateAverage(float marks1, float marks2, float marks3, float marks4, float marks5)
{
    float percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 500 * 100;
    return percentage;
}
string calculateGrade(float average){
    if (average >= 90 && average <=100){
        return ("A+");
    }
    if (average >= 80 && average <=90){
        return ("A");
    }
    if (average >= 70 && average <=80){
        return ("B+");
    }
    if (average >= 60 && average <=70){
        return ("B");
    }
    if (average >= 50 && average <=60){
        return ("C");
    }
    if (average >= 40 && average <=50){
        return ("D");
    }
    if (average >= 40){
        return ("F");
    }
}