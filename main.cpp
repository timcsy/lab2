#include <iostream>
#include <fstream>
#include "lab2.h"
using namespace std;

int main()
{
	ifstream fin("file.in");
	ofstream fout("file.out", ios::out);
	double m, h;
	while(fin>>h>>m)
	{
		if(m == 0 && h == 0) break;
		BMI bmi(m, h);
		fout<<bmi.getBMI()<<" "<<bmi.getCategory()<<endl;
	}
	fin.close();
	fout.close();
	return 0;
}
