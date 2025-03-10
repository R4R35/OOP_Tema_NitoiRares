#include "Student.h"
#include "Global.h"
#include <iostream>
using namespace std;
int main(){
    Student A,B;
    A.setName();
    A.getName();
    A.getGrade();
    cout<< A.getAverage();
    B.setName();
    B.getName();
    B.getGrade();
    cout<<B.getAverage();
    cout << compareName(A, B);
    cout << compareEnglish(A, B);
    cout << compareMath(A, B);
    cout << compareHistoy(A, B);
    cout << compareAverage(A, B);
}