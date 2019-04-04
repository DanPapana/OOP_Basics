#include "Administrator.h"


Administrator::Administrator()
{
	Username = "";
	Password = "";
	isConnected = false;
}

Administrator::Administrator(const string, const string)
{
}

Administrator::Administrator(const string username, const string password)
{
	if (Username == "" && Password == "" && isConnected == false) {
		Username = username;
		Password = password;
	}
}

string Administrator::getUsers() {
	string UserList;
	for (int i = 0; i < user.size(); i++) {
		if (user[i]->checkConnection() == true) {
			UserList += ", " + user[i]->getUsername();
		}
	}
	return UserList;
}

Administrator::~Administrator()
{
}
