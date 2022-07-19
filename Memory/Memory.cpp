#include <chrono>
#include <iostream>
#include <thread>
#include <string>
using namespace std;

using namespace std::this_thread;
using namespace std::chrono;

void printStr() {
	srand(time(0));
	string str = "";
	int rnd;
	for (int i = 0; i < 4; i++)
	{
		rnd = rand() % 10;
		std::cout << rnd;
		std::cout << "\n";
		str += to_string(rnd);

		sleep_for(seconds(1));
		system("cls");
	}
	std::cout << "input to reveal string";
	cin.get();
	cout << str;

}


int main()
{
	printStr();
}

