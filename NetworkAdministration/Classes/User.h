#pragma once
#include "Network.h"

using namespace std;

class User : public Network
{
public:
	User();
	User(const string&, const string&);
	string getUsername();
	
	bool Connect() override;
	bool checkConnection() override;
	bool checkUsername(const string&) override;
	bool checkUser(const string&, const string&) override;
	bool LogOut() override;

	virtual ~User();

private:
	string Username;
	string Password;
	bool isConnected;
};

