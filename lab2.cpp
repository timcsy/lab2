#include "lab2.h"

BMI::BMI(double m, double h)
{
	setMass(m);
	setHeight(h);
}
void BMI::setMass(double m)
{
	mass = m;
}
void BMI::setHeight(double h)
{
	height = h/100;
}
double BMI::getBMI()
{
	return mass/height/height;
}
string BMI::getCategory()
{
	double bmi = getBMI();
	if(bmi < 15) return "Very severely underweight";
	else if(bmi >= 15 && bmi < 16) return "Severely underweight";
	else if(bmi >= 16 && bmi < 18.5) return "Underweight";
	else if(bmi >= 18.5 && bmi < 25) return "Normal";
	else if(bmi >= 25 && bmi < 30) return "Overweight";
	else if(bmi >= 30 && bmi < 35) return "Obese Class I (Moderately obese)";
	else if(bmi >= 35 || bmi < 40) return "Obese Class II (Severely obese)";
	else if(bmi >= 40) return "Obese Class III (Very severely obese)";
}
