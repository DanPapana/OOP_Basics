#include "Network.h"

Network::Network()
{
}

void Network::SignUp(const string& username, const string& password) {
	user.push_back(new User(username, password));
}

int Network::getUserID(const string& username) {
	for (unsigned int id = 0; id < user.size(); id++) {
		if (user[id]->checkUsername(username)) {
			return id;
		}
	}
	return -1;
}

bool Network::LogIn(const string& username, const string& password) {
	int temp_id = getUserID(username);
	if (temp_id > -1) {
		if (user[temp_id]->checkUser(username, password) == true && user[temp_id]->checkConnection() == false) {
			user[temp_id]->Connect();
			return true;
		}
	}
	return false;
}

void Network::DeleteUser(const string& username) {
	int temp_id = getUserID(username);
	user.erase(user.begin()+temp_id);
}

Network::~Network()
{
}
