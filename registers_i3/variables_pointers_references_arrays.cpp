#include <iostream>
#include "Header.h"


int main(int argv, char *args[], char *envp[])
{
	for (int i = 0; i < argv; i++)
		std::cout << args[i] << "\n";
	int i = 0;
	while (envp[i])
	{
		std::cout << envp[i] << "\n";
		i++;
	}
	int n = 5;
	int* p;
	p = &n;
	*p = *p + 64;
	int& refn = n;
	refn = 1;
	unsigned char sn = sizeof(n);
	unsigned char sp = sizeof(p);
	unsigned char srefn = sizeof(refn);
	unsigned char arr[16]{ 0 };
	unsigned char sarr = sizeof(arr);
	arr[4] = 0x22;
	arr[9] = 127;
	arr[10] = arr[4] + arr[9];
	std::cout << "\n\nMierda pa to dios!!! \n Se siente conyo!!\n";

	Flop fiu(2, 1, 0.12);
	std::cout << fiu.getSerial() << " " << fiu.getTape() << "   " << sizeof(fiu) << "\n";
  


	return 0;
}