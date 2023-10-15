#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology);
string calculateGrade(float Average);

main()
{
    string nameStudent;
    float marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology,percentage;
    
    cout << "Enter student name: ";
    cin >> nameStudent;

    cout << "Enter marks for English: ";
    cin >> marksEnglish;

    cout << "Enter marks for Maths: ";
    cin >> marksMaths;

    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;

    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;

    cout << "Enter marks for Biology: ";
    cin >> marksBiology;

    percentage=calculateAverage(marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology);
    string grade= calculateGrade(percentage);

    cout << "Student Name: " << nameStudent << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade;

}
float calculateAverage(float marksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology)
{
    float totalMarks=marksBiology+marksChemistry+marksEnglish+marksMaths+marksSocialScience;
    float percentage=(totalMarks*100)/500;
    return percentage;
}
string calculateGrade(float percentage)
{
    string grade;
    if(percentage<=100 && percentage>=90)
    {
        grade="A+";
    }
    else if(percentage>=80)
    {
        grade="A";
    }
    else if(percentage>=70)
    {
        grade="B+";
    }
    else if(percentage>=60)
    {
        grade="B";
    }
    else if(percentage>=50)
    {
        grade="C";
    }
    else if(percentage>=40)
    {
        grade="D";
    }
    else
    {
        grade="F";
    }
    return grade;
}