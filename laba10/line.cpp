#include <iostream>
using namespace std;
#include "geometricElement.h"
#include "line.h"

line::line(string name, int len) : geometricElement(name)
{
	setLen(len);
}

void line::setLen(int len)
{
	if (len > 0) this->_len = len;
	else this->_len = 0;
}