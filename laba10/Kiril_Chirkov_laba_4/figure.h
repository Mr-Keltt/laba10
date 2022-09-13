class figure : public geometricElement
{
private:
	int _cornersCount;
	int _finLen;

public:
	figure(string, int, int);

	void setLen(int) override;
};