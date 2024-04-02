#pragma once
#include <string>
using namespace std;

class Tire
{
private:
	int tireId;
	int tireWidth;
	int tireRatio;
	string tireConstruction;
	int tireRimDiameter;
	int tireLoadIndex;
	string tireSpeedRating;
	long tirePrice;

public:
	string toString()
	{
		return "ID:" + to_string(tireId) + ", Width:" + to_string(tireWidth) + ", Ratio:" + to_string(tireRatio) + ", Construction:" + tireConstruction + ", Rim Diameter:" + to_string(tireRimDiameter) + ", Load Index:" + to_string(tireLoadIndex) + ", Speed Rating:" + tireSpeedRating + ", Price:" + to_string(tirePrice);
	}
	Tire(int tireId, int tireWidth, int tireRatio, string tireConstruction, int tireRimDiameter, int tireLoadIndex, string tireSpeedRating, long tirePrice)
	{
		this->tireId = tireId;
		this->tireWidth = tireWidth;
		this->tireRatio = tireRatio;
		this->tireConstruction = tireConstruction;
		this->tireRimDiameter = tireRimDiameter;
		this->tireLoadIndex = tireLoadIndex;
		this->tireSpeedRating = tireSpeedRating;
		this->tirePrice = tirePrice;
	}
	int getTireId() const
	{
		return tireId;
	}

};