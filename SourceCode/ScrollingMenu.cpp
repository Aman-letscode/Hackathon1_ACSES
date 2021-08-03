// Scrolling menu tutorial WITHOUT ANY EXTRA HEADER FILES!

#include <iostream>
#include <string>
#include <windows.h>
#include "notes.cpp"
#include "notes.h"


using namespace std;

int menu()
{
	string Menu[4] = { "Attendence","Notes", "Quiz","logout"};
	int pointer = 0;
	
	while(true)
	{
		system("cls");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Dashboard\n\n";
		
		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << Menu[i] << endl;
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << Menu[i] << endl;

			}
		}
		
		while(true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				if (pointer == 4)
				{
					pointer =
					 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				switch (pointer)
				{
					case 0:
					{
						cout << "\n\n\nStarting new game...";
						Sleep(1000);
					} break;
					case 1:
					{
						cout << "\n\n\nThis is the options...";
						Sleep(1000);
					} break;
					case 2:
					{
						return 0;
					} break;
					case 3:
					{
						return 0;
					} break;
				}
				break;
			}
		}
		
		Sleep(150);
	}
	
	return 0;
}

