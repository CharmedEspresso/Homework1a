//Name: Stephanie St Louis
//Description: Homework 1 - Malachi's Pie Shop
//This program calculates the recipe for pie crust



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float numPie;
	float flourF, sugarF, saltF, butterF, eggF;

	const float flour = 15.0;
	const float sugar = 8.0;
	const float salt = 3.0;
	const float butter = 5.25;
	const float egg = 6.0;

	cout << "How many pies do you wish to make?" << endl;
	cin >> numPie;

	const float flourPerCrust = flour / 6.0;
	const float sugarPerCrust = sugar / 6.0;
	const float saltPerCrust = salt / 6.0;
	const float butterPerCrust = butter / 6.0;
	const float eggPerCrust = egg / 6.0;

	flourF = numPie*flourPerCrust;
	sugarF = numPie*sugarPerCrust;
	saltF = numPie*saltPerCrust;
	butterF = numPie*butterPerCrust;
	eggF = numPie*eggPerCrust;

	cout << "Malachi's Pie Shop - Pie Crust Recipe" << endl;
	cout << "---------------------------------------" << endl;
	cout << fixed << setprecision(2) << left;
	cout << "You wish to make " << numPie << " pies." << endl << endl;
	cout << setw(10) << "Flour" << flourF << " cups" << endl;
	cout << setw(10) << "Sugar" << sugarF << " tablespoons" << endl;
	cout << setw(10) << "Salt" << saltF << " tablespoons" << endl;
	cout << setw(10) << "Butter" << butterF << " cups" << endl;
	cout << setw(10) << "Egg" << eggF << " large eggs" << endl;

	system("pause");
	return 0;

}
