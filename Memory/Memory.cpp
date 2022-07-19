#include <chrono>
#include <iostream>
#include <thread>
#include <string>
#include <vector>
using namespace std;

using namespace std::this_thread;
using namespace std::chrono;

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


int main()
{
	printStr();
}

