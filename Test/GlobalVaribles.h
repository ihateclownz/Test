#pragma once
#ifndef GLOBALVARIBLES_
#define GLOBALVARIBLES_


using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.


 void		pause(),
				Type(),
				intro(),
				TypeQuestion(),
				loadPlayer();
bool		Running;
bool		playerExists;
string	type,
				settingsFile;

/*
struct UserInformation {
	string	userName,
		userRivalName;
	int		userLevel,
		userExP;
	float	userLocX,
		userLocY,
		userLocZ;
}p1;
*/

extern struct UserInformation;

#endif // !GLOBALVARIBLES_