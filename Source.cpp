#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int T;
	map<string, int> contactList;
	string name;
	int phoneNumber;
	cin >> T; // how many times user inputs names and phonenumbers
	for (int i = 0; i < T; i++) {
		cin>> name;
		cin >> phoneNumber;
		contactList[name] = phoneNumber; //map[key]=value
	}

	while (cin >> name) {

		if (contactList.find(name) != contactList.end()) {
			cout << name << "=" << contactList.find(name)->second << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}
	return 0;
}