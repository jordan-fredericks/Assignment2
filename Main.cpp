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

	cout << length << "\n";
	cout << width << "\n";

	//float area = CalculateArea(length, width);

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