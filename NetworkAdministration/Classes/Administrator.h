#pragma once
#include "Network.h"
#include "User.h"

class Administrator : public User
{
public:
	Administrator();

	Administrator(const string, const string);
	friend class User;
	
	string getUsers();
	virtual ~Administrator();

private:
	string Username;
	string Password;
	bool isConnected;
};

