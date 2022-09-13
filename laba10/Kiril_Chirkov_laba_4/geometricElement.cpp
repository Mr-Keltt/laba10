#include <iostream>
using namespace std;
#include "geometricElement.h"

geometricElement::geometricElement(string name)
{
	this->_name = name;
	this->_len = NULL;
}

string geometricElement::getName()
{
	return this->_name;
}

int geometricElement::getLen()
{
	return _len;
};