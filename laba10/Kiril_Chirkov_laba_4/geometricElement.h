class geometricElement
{
protected:
	string _name;
	int _len;

public:
	geometricElement(string);

	string getName();

	virtual void setLen(int) = 0;

	int getLen();
};