#include "Revision.h"

void Revision::GetPlatform()
{
	cout << "-----Platform-----" << endl
		<< endl
		<< "1. Perforce" << endl
		<< "2. GitHub" << endl
		<< endl;

	int PlatformIndex = Input::GetInteger("Platform: ", 1, 2, LightGrey);

	switch (PlatformIndex)
	{
	case 1:
		userPlatform = Perforce;
		break;
	case 2:
		userPlatform = GitHub;
		break;
	}
}

void Revision::GetUsername()
{
	username = Input::GetString("Username: ", LightGrey);
}

void Revision::GetPassword()
{
	password = username = Input::GetString("Password: ", LightGrey);
}

void Revision::GetTwoFactor()
{
	twoFactor = username = Input::GetString("What is the code sent to your relevant email? ", LightGrey);
}

void Revision::GetServerName()
{
	serverName = username = Input::GetString("Server Name: ", LightGrey);
}