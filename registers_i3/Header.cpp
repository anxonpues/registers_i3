#include "Header.h"

Flop::Flop(unsigned char a, unsigned char b, float c)
{
	serial = a;
	tape = b;
	duration = c;
	if (a > b)
		ser_tap = a - b;
	else
		ser_tap = b - a;
}

Flop::Flop()		// default initializer
	:
	serial(0),
	tape(1),
	duration(0.0f)
{
}

Flop::~Flop()
{
}

unsigned char Flop::getSerial() const
{
	return serial;
}

unsigned char Flop::getTape() const
{
	return tape;
}
