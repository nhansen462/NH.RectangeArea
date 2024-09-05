
//Nicholas Hansen Rectangle Area
#include <iostream>
#include <conio.h>

using namespace std;

//Prototypes
float GetLengthFromUser();
float GetWidthFromUser();
float CalculateArea(float length, float width);
void DisplayArea(float length, float width);


int main() {
	float length = GetLengthFromUser();
	float width = GetWidthFromUser();

	DisplayArea(length, width);

	(void)_getch();
	return 0;
}

//Functions
float GetLengthFromUser() {
	cout << "Enter the length of the rectangle: ";
	float length;
	cin >> length;
	return length;
}

float GetWidthFromUser() {
	cout << "Enter the length of the rectangle: ";
	float width;
	cin >> width;
	return width;
}

float CalculateArea(float length, float width) {
	return length * width;
}

void DisplayArea(float length, float width) {
	cout << "The area of the Rectangle is " << CalculateArea(length, width);
}