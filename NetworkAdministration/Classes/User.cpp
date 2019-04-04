#include "User.h"
using namespace std;

User::User() {
	Username = "";
	Password = "";
	isConnected = false;
}

User::User(const string& username, const string& password) {
	if (Username == "" && Password == "") {
		Username = username;
		Password = password;
	}
}

bool User::checkUser(const string& username, const string& password) {
	if (username == Username && password == Password) {
		return true;
	}
	return false;
}

bool User::checkConnection() {
	return isConnected;
}

bool User::LogOut() {
	if (isConnected == true) {
		isConnected = false;
		return true;
	}
	return false;
}

bool User::Connect() {
	isConnected = true;
}

string User::getUsername() {
	return Username;
}

bool User::checkUsername(const string& username) {
	if (username == Username) {
		return true;
	}
	return false;
}

User::~User()
{
}
