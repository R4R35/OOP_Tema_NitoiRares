#include "Math.h"
#include <iostream>

using namespace std;

int main()
{
	Math A;
	cout<<A.Add(1,5)<<endl;
	cout<<A.Add(1,6,5) <<endl;
	cout<<A.Add(1.7,5.5)<<endl;
	cout<<A.Add(1.7,5.5,6.2) <<endl;
	cout<<A.Mul(1,5)<<endl;
	cout<<A.Mul(1,5,7)<<endl;
	cout<<A.Mul(1.5,5.6)<<endl;
	cout<<A.Mul(1.5,5.6,7.3)<<endl;
	cout << A.Add(9, 4, 31, 2, 3, 12, 32, 87, 12, 10) << endl;
	cout << A.Add("I love ", "OOP") << endl;

	
}
