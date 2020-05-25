#pragma once
#include <iostream>
using namespace std;

class Parallelogram
{
private:
	float side_a; // side a
	float side_b; // side b
	float h; // height
	float area;
	float perimetr;
	static int count; // count of figures
	static float suma; // total area of all figures
public:
	Parallelogram(); // default constructor
	Parallelogram(float _side_a, float _h); // parameterized constructor
	Parallelogram(float _side_a, float _side_b, float _h); // parameterized constructor
	void Suma(); // 
	void Print() const;
	// setters ~^-^~
	void SetSide_a(float _side_a);
	void SetSide_b(float _side_b);
	void Set_h(float _h);
	// getters ~^-^~
	float GetArea();
	float GetPerimeter();

};