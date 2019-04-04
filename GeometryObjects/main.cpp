#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

int main() {


	ifstream infile("input.txt");

	int X[7], Y[7];

	if (infile.fail()) {
		cout << "FAILED TO READ THE FILE";
	}
	else {
		//line
		infile >> X[0] >> Y[0] >> X[1] >> Y[1];
		//circle
		infile >> X[2] >> Y[2] >> X[3] >> Y[3];
		//square
		infile >> X[4] >> Y[4] >> X[5] >> Y[5];
		//rectangle
		infile >> X[6] >> Y[6] >> X[7] >> Y[7];
	}

	vector<Point*> points;

	for (int iterator = 0; iterator <= 7; iterator++) {
		points.push_back(new Point(X[iterator], Y[iterator]));
	}

	vector<Shape*> shapes;
	
	Line *line = new Line(*points[0], *points[1]);
	shapes.push_back(line);
	Circle *circle = new Circle(*points[2], *points[3]);
	shapes.push_back(circle);
	Square *square = new Square(*points[4], *points[5]);
	shapes.push_back(square);
	Rectangle *rectangle = new Rectangle(*points[6], *points[7]);
	shapes.push_back(rectangle);

	int choice;

	do {
		cout << "Pick a shape: " << endl;
		cout << "1. Line" << endl;
		cout << "2. Circle" << endl;
		cout << "3. Square" << endl;
		cout << "4. Rectangle" << endl;
		cout << "5. Show 'em" << endl;

		cin >> choice;

		switch (choice) {
		case 1:

			cout << "The length of the line is: " << line->getPerim() << endl;
			break;

		case 2:

			cout << "The perimeter of the circle is: " << circle->getPerim() << " cm" << endl;
			break;

		case 3:

			cout << "The perimeter of the square is: " << square->getPerim() << " cm" << endl;
			break;

		case 4:

			cout << "The perimeter of the rectangle is: " << rectangle->getPerim() << " cm" << endl;
			break;

		case 5:

			cout << "All shapes: " << endl << endl;
			for (int i = 0; i < shapes.size(); i++) {
				cout << shapes[i]->getPerim() << endl;
			}
			cout << endl;
			break;

		default:
			break;
		}

	} while (choice != 6);

	for (int i = 0; i < shapes.size(); i++) {
		delete shapes[i];
	}
	shapes.clear();
	system("Pause");
	return 0;
}