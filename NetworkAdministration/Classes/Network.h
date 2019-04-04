#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Network
{
public:
	Network();
	void SignUp(const string&, const string&);
	bool LogIn(const string&, const string&);
	int getUserID(const string&);
	void DeleteUser(const string&);

	//virtual string getUsers() = 0;
	virtual bool Connect() = 0;
	virtual bool checkConnection() = 0;
	virtual bool checkUsername(const string&) = 0;
	virtual bool checkUser(const string&, const string&) = 0;
	virtual bool LogOut() = 0;

	//virtual void Disconnect(string = 0, string = 0, string = 0, string = 0, string = 0, string = 0, string = 0, string = 0, string = 0, string = 0, string = 0) = 0;

	~Network();

protected:
	vector<User*> user;
};