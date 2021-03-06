#pragma once

class Flop
{
private:
	unsigned char serial;
	unsigned char tape;
	float  duration;
public:
	Flop(unsigned char a, unsigned char b, float c);
	Flop();
	~Flop();
	unsigned char getSerial() const;
	unsigned char getTape() const;
	unsigned char ser_tap;
};
