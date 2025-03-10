#pragma once
class Student {
public:
    char nume[100];
    float notaMate;
    float notaEngleza;
    float notaIstorie;

    void setName();
    void getName();
    void setGrade();
    void getGrade();
    float getAverage();
};