#pragma once
#include <string>
#include <iostream>

#include "Input.h"
#include "Console.h"

using namespace std;

enum Platform
{
	Perforce,
	GitHub
};

class Revision
{
protected:
	Platform userPlatform;
	string email;
	string username;
	string password;
	string twoFactor;
	string serverName;

public:

	//Get All Information
	void GetPlatform();
	void GetUsername();
	void GetPassword();
	void GetTwoFactor();
	void GetServerName();


};