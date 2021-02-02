#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
        cout << "Hello Waifu!\n";
        int age;
        cout << "How old is your waifu?: ";
        cin >> age;
        if (age < 18)
        {
            cout << "Go to jail.\n";
        }
        else
        {
            cout << "You're good.\n";
        }
        cout << "\n";
	}
}