#include "Global.h"

#include <iostream>
#include <string>

int compareName(Student A, Student B) {
	if (strcmp(A.nume, B.nume) == 0)
		return 0;
	for (int i = 0;A.nume[i] != '\0';i++) {
		if (A.nume[i] > B.nume[i])
			return 1;
		else if (B.nume[i] > A.nume[i])
			return -1;
	}
}

int compareMate(Student A, Student B) {
	if (A.notaMate == B.notaMate)
		return 0;
	if (A.notaMate > B.notaMate)
		return 1;
	else
		return -1;
}

int compareEnglish(Student A, Student B) {
	if (A.notaEngleza == B.notaEngleza)
		return 0;
	if (A.notaEngleza > B.notaEngleza)
		return 1;
	else
		return -1;
}

int compareHistoy(Student A, Student B) {
	if (A.notaIstorie == B.notaIstorie)
		return 0;
	if (A.notaIstorie > B.notaIstorie)
		return 1;
	else
		return -1;
}

int compareAverage(Student A, Student B) {
	
	if (A.getAverage() == B.getAverage())
		return 0;
	if (A.getAverage() > B.getAverage())
		return 1;
	if (A.getAverage() < B.getAverage())
		return -1;
}
