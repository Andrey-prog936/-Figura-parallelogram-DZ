#include <iostream>
#include "paralelogram.h"
using namespace std;

int main()
{
	Parallelogram F1(7.6, 9, 3);  // Figure 1
	F1.GetArea();
	F1.GetPerimeter();
	F1.Print();
	//
		F1.SetSide_b(12.7);  // Figure 2
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	F1.GetArea();
	F1.GetPerimeter();
	F1.Print();
	//
		F1.SetSide_b(34.7);  // Figure 3
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	F1.GetArea();
	F1.GetPerimeter();
	F1.Print();

	system("pause");
	return 0;
}