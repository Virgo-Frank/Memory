#include <chrono>
#include <iostream>
#include <thread>
#include <string>
#include <vector>
using namespace std;

using namespace std::this_thread;
using namespace std::chrono;

bool checkStr(vector<int> strList);

void printStr() {
	srand(time(0));
	int rnd;
	int strLength;
	cout << "enter string length\n";
	cin >> strLength;
	vector<int> strList;
	system("cls");
	for (int i = 0; i < strLength; i++)
	{
		rnd = rand() % 10;
		std::cout << rnd;
		std::cout << "\n";
		strList.push_back(rnd);

		sleep_for(seconds(1));
		system("cls");
	}
	std::cout << "input to reveal string\n";
	cin.get();
	cin.get();
	for (int i = 0; i < strList.size(); i++)
	{
		cout << strList[i];
	}
}

void continuous() {
	srand(time(0));
	int rnd;
	int strLength;
	cout << "enter string length\n";
	cin >> strLength;
	vector<int> strList;
	while (true) {
		system("cls");
		for (int i = 0; i < strLength; i++)
		{
			rnd = rand() % 10;
			std::cout << rnd;
			std::cout << "\n";
			strList.push_back(rnd);

			sleep_for(seconds(1));
			system("cls");
		}
		std::cout << "input to reveal string\n";
		cin.get();
		cin.get();
		for (int i = 0; i < strList.size(); i++)
		{
			cout << strList[i];
		}
		cin.get();
		checkStr(strList);
		strList.clear();
	}
	
}

bool checkStr(vector<int> strList) {
	
	system("cls");
	std::cout << "Enter string:\n";
	string input;
	input = cin.get();
	system("cls");
	if (input.size() == strList.size())
	{
		for (int i = 0; i < strList.size(); i++)
		{
			if (input[i] != strList[i]) {
				std::cout << "Incorrect string";
				cin.get();
				return false;
			}
		}
		return true;
	}
	std::cout << "Incorrect string";
	cin.get();
	return false;

}


int main()
{
	string promt;
	cout << "continuous? (y/n)\n";
	promt = cin.get();
	if (promt == "y")
		continuous();

	printStr();
	bool check = true;
	while (check) {
		cin.get();
		system("cls");
		cout << "\nRepeat? y/n\n";
		promt = cin.get();
		if (promt == "y") {
			cin.get();
			system("cls");
			printStr();
		}
		else
			check = false;
	}
}

