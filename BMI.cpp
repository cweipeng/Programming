
#include <iostream>
using namespace std;

int main()
{
	int num_a;
	double w, h, BMI;
	std::cout << "your weight(kg)\n";
	cin >> w;
	std::cout << "your height(m)\n";
	cin >> h;
	BMI = w / (h*h);
	if (BMI < 18.5) cout << "underweight\n"; 
	if (BMI >= 18.5&&BMI < 25) cout<< "normal\n";
	if (BMI >= 25 && BMI < 30) cout <<"overweight";
	if (BMI > 30) cout<<"obese";
	cout << BMI<< endl;
        return 0;
}

