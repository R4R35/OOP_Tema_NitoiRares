#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student::setGrade() {
    int x;

    float y;
    while (true) {

        cout << "Which subject do you want the grade to be set? 1:Maths 2:English 3:History" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "What grade do you want to set for maths?" << endl;
            cin >> y;
            while(y > 10 || y < 0) {
                cout << "Incorrect grade" << endl;
                cin >> y;
            }
            notaMate = y;
            break;
        case 2:
            cout << "What grade do you want to set for english?" << endl;
            cin >> y;
            while (y > 10 || y < 0) {
                cout << "Incorrect grade" << endl;
                cin >> y;
            }
            notaEngleza = y;
            break;
        case 3:
            cout << "What grade do you want to set for history?" << endl;
            cin >> y;
            while (y > 10 || y < 0) {
                cout << "Incorrect grade" << endl;
                cin >> y;
            }
            notaIstorie = y;
            break;
        default:
            break;
        }
        cout << "Do you want to set another grade? 1:Yes 2:No" << endl;
        cin >> x;
        if (x == 2)
            break;
    }

}

void Student::getGrade() {
    int x;
    while (true) {

        cout << "Which subject grade are you looking for? 1:Maths 2:English 3:History" << endl;
        cin >> x;
        
        switch (x)
        {
        case 1:
            cout << "Maths' grade is" << notaMate << endl;
            break;
        case 2:
            cout << "English's grade is" << notaEngleza << endl;
            break;
        case 3:
            cout << "History's grade is" << notaIstorie << endl;
            break;
        default:
            break;
        }

        cout << "Do you want to get another grade? 1:Yes 2:No" << endl;
        cin >> x;
        if (x == 2)
            break;

    }

}

void Student::setName() {
    cout << "What is the student's name?" << endl;
    cin.getline(nume,50);
}

float Student::getAverage() {
    float average = (notaMate +notaEngleza + notaIstorie) / 3;
    return average;
}

void Student::getName() {
    cout << "The student's name is "<<nume<< endl;
}