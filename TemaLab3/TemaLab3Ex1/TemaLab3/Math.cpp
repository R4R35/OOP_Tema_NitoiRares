#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <iostream>
#include <cstring>
#include <cstdarg>
using namespace std;
int Math::Add(int a, int b) {
	return  a+ b;
}
int Math::Add(int a, int b, int c) {
	return a + b + c;
}
int Math::Add(double a, double b) {
	return a + b;
}
int Math::Add(double a, double b, double c) {
	return a + b + c;

}
int Math::Mul(int a , int b) {

	return a * b;
}
int Math::Mul(int a, int b, int c) {
	return a * b * c;
}
int Math::Mul(double a, double b) {
	return a * b;

}
int Math::Mul(double a, double b, double c) {
	return a * b * c;
}
int Math::Add(int count, ...) {
	int result = 0;
	va_list lista;
	va_start(lista, count);
	for (int i = 0;i < count;i++) {
		result += va_arg(lista, int);
	}
	va_end(lista);
	return result;
}

char* Math::Add(const char* a, const char* b) {
	if (a == NULL || b == NULL) {
		return NULL;
	}
	
	size_t lung1 = strlen(a);
	size_t lung2 = strlen(b);


	char* result = new char[lung1 + lung2 + 1];

	strcpy(result, a);
	strcat(result, b);

	return result;
}