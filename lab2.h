#include <string>
using namespace std;
class BMI
{
	public:
		BMI(double m, double h);
		void setMass(double m);
		void setHeight(double h);
		double getBMI();
		string getCategory();
	private:
		double mass;
		double height;
};
