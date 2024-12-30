#include <iostream>
using namespace std;

int main() {
 float radius, area;
 const float pi = 3.14159; //value of Pi

 cout << "Enter radius of the circle: ";
 cin >> radius;

 area = pi * radius * radius;

 cout << "Area of the circle: " << area << endl;

    return 0;
}

