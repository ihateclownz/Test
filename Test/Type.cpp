#include "stdafx.h"
#include "GlobalVaribles.h"

void Type() {
	int sleepSpeed = 50;

	int x = 0;
	while (type[x] != '\0')
	{
		cout << type[x];
		Sleep(sleepSpeed);
		x++;
	};
	pause();
}


void TypeQuestion() {
	int x = 0;
	while (type[x] != '\0')
	{
		cout << type[x];
		Sleep(50);
		x++;
	};

}