#include <iostream>
using namespace std;

#include "geometricElement.h"
#include "line.h"
#include "figure.h"


int main()
{
	setlocale(0, "");

	geometricElement *ge;
	line l("прямая", 10);
	figure f("квадрат", 5, 4);

	ge = &l;
	cout << ge->getName() << " " << ge->getLen() << endl;

	ge = &f;
	cout << ge->getName() << " " << ge->getLen() << endl;
}