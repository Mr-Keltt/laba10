#include <iostream>
using namespace std;
#include "geometricElement.h"
#include "figure.h"
#include <cmath>

figure::figure(string name, int finLen, int cornersCount) : geometricElement(name)
{
	if (cornersCount <= 3) this->_cornersCount = 3;
	else this->_cornersCount = cornersCount;
	setLen(finLen);
	this->_finLen = finLen;
}

void figure::setLen(int finLen)
{
	this->_len = finLen * _cornersCount;
}