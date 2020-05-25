#include "paralelogram.h"
int Parallelogram::count = 0;
float Parallelogram::suma = 0;

Parallelogram::Parallelogram()
{
	side_a = 0;
	side_b = 0;
	h = 0;
	area = 0;
	perimetr = 0;
	suma = 0;
	count = 0;
}
Parallelogram::Parallelogram(float _tmp, float _h)
{
	side_a = _tmp;
	side_b = _tmp;
	h = _h;
	area = 0;
	perimetr = 0;
	suma = 0;
	count = 0;
}
Parallelogram::Parallelogram(float _side_a, float _side_b, float _h)
{
	Parallelogram();
	side_a = _side_a;
	side_b = _side_b;
	h = _h;
	area = 0;
	perimetr = 0;
	suma = 0;
	++count;
}
void Parallelogram::Suma()
{   suma = suma + area;   }
void Parallelogram::Print() const
{
	cout << "Side a = " << side_a << endl;
	cout << "Side b = " << side_b << endl;
	cout << "Height = " << h << endl;
	cout << "Area = " << area << " cm^2" << endl;
	cout << "Perimetr = " << perimetr << " cm" << endl;
	cout << "Count figures: " << count << endl;
	cout << "Suma area: " << suma << endl;
}
// setters ~^-^~
void Parallelogram::SetSide_a(float _side_a)
{
	side_a = _side_a;
	++count;
}
void Parallelogram::SetSide_b(float _side_b)
{
	side_b = _side_b;
	++count;
}
void Parallelogram::Set_h(float _h)
{
	h = _h;
	++count;
}
// getters ~^-^~
float Parallelogram::GetArea()
{
	area = side_b * h;
	Suma();
	return area;
}
float Parallelogram::GetPerimeter()
{
	perimetr = (side_a + side_b) * 2;
	return perimetr;
}

