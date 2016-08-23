#include "stdafx.h"
#include "GlobalVaribles.h"

void intro()
{
	type = "Hello there! \nWelcome to the world of POKEMON! \nMy name is OAK! People call me the POKEMON PROF!";
	Type();
	type = "This world is inhabited by creatures called POKEMON! \nFor some people, POKEMON are pets.Others use them for fights.\nMyself... I study POKEMON as a profession.";
	Type();
	type = "First, what is your name?\n";
	TypeQuestion();
	cin >> p1.userName;
	pause();
	system("cls");
	type = "Right! So your name is " + p1.userName + ".";
	Type();

	type = "This is my grandson. He's been your rival since you were a baby\n....Erm, what is his name again?";
	Type();
}

