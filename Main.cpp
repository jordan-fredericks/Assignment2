#include <iostream>
#include <conio.h>

using namespace std;

//function prototypes
float GetLengthFromUser();
float GetWidthFromUser();
float CalculateArea(float length, float width);
void DisplayArea(float area);

int main()
{
	float length = GetLengthFromUser();
	float width = GetWidthFromUser();
	float area = CalculateArea(length, width);
	DisplayArea(area);

	(void)_getch();
	return 0;
}

float GetLengthFromUser()
{
	int value = 0;

	cout << "Please enter the length :";
	cin >> value;

	return value;
}

float GetWidthFromUser()
{
	int value = 0;

	cout << "Please enter the width :";
	cin >> value;

	return value;
}

float CalculateArea(float length, float width)
{
	int value = 0;

	value = length * width;

	return value;
}

void DisplayArea(float area)
{
	cout << "The area of your rectangle is " << area << ".";
}