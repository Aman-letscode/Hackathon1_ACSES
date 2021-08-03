#include <iostream>
#include <string>
#include "notes.h"
using namespace std;

void pdf()
{
	int sub;
	char yn;

	string syl = "start https://www.github.com";
	string math = "start https://www.google.com";
	string phy = "start https://www.youtube.com";
	string chem = "start https://www.instagram.com";
	string eng = "start https://www.facebook.com";
	string evs = "start https://www.twitter.com";
	string pps = "start https://www.pubg.com";
	string mech = "start https://www.microsoft.com";

	
	start:
		system("cls");
		cout << endl
			 << " Note:" << endl
			 << " [1] Press 1 to view Syllabus" << endl
			 << " [2] Press 2 to view Mathematics notes." << endl
			 << " [3] Press 3 to view Physics notes." << endl
			 << " [4] Press 4 to view Chemistri notes." << endl
			 << " [5] Press 5 to view English notes." << endl
			 << " [6] Press 6 to view Programming for Problem Solving notes." << endl
			 << " [7] Press 7 to view Environmental Science notes." << endl
			 << " [8] Press 8 to view Mechanics notes." << endl
			 << endl;

		cout << "What will you like to have:";
		cin >> sub;
		cout << endl;

		switch (sub)
		{
		case 1:
			cout << " Opening Syllabus" << endl;
			system(syl.c_str());
			break;

		case 2:
			cout << " Opening Notes of Mathematics" << endl;
			system(math.c_str());
			break;

		case 3:
			cout << " Opening Notes of Physics" << endl;
			system(phy.c_str());
			break;

		case 4:
			cout << " Opening Notes of Chemistry" << endl;
			system(chem.c_str());
			break;

		case 5:
			cout << " Opening Notes of English" << endl;
			system(eng.c_str());
			break;

		case 6:
			cout << " Opening Notes of Environmental Science" << endl;
			system(evs.c_str());
			break;

		case 7:
			cout << " Opening Notes of Programming for Problem Solving" << endl;
			system(pps.c_str());
			break;

		case 8:
			cout << " Opening Notes of Mechanics" << endl;
			system(mech.c_str());
			break;

		default:
			cout << " You entered invalid number, try again" << endl;
			goto start;
		}
		cout << endl
			 << " View More (y/n): ";
		getchar();
		cin >> yn;
		cout << endl;
	if(yn=='y'){
		goto start;
	}
	else{
		exit(0);
	}
}
