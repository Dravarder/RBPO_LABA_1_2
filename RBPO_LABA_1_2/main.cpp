#include "Header.h"


int main() {
	
	string Name;
	unsigned short Age;
	unsigned short Height1;
	unsigned short Weight1;
	double Salary1 = 10;
	double* Salary = &Salary1;
	ReadPersonData(Name, Age, Height1, Weight1);
	ReadPersonSalary(Salary);
	salary = to_string(*Salary);
	string Height2 = to_string(Height1);
	string Weight2 = to_string(Weight1);
	unsigned short* Age1 = &Age;
	WritePersonData(Name, Height2, Weight2, Age1);
	return 0;
}