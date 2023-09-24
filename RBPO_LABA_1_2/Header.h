#include <iostream>
#include <string>
using namespace std;
extern unsigned short Height;
extern string salary;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& Weight);
void ReadPersonSalary(double* Salary);
void ReadPersonData(string& Name, unsigned short& Age, double& Salary);
void ReadPersonData(string& Name, unsigned short& Age, unsigned short& Height, unsigned short& Weight);
void WritePersonData(string& Name, string& Height, string& Weight, unsigned short* Age);