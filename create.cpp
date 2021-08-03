#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include "login.h"
#include "create.h"
using namespace std;

void create()
{
    string id, pass, num;
    char a;
    int i;
    ofstream myfiles;
START:
    system("CLS");
    cout << "Enter the login Id:";
    cin >> id;
    cout << "\nEnter the password:";
    for (i = 0;;)
    {
        a = getch();
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
        {
            pass[i] = a;
            ++i;
            cout << '*';
        }
        if (a == '\b')
        {
            cout << "\b \b";
            --i;
        }
        if (a == '\r')
        {
            if (i <= 7)
            {

                cout << "\nPassword is too short, please enter the correct password";
                getch();
                goto START;
            }
            else
            {
                cout << "\nThis is the password: ";
                for (int j = 0; j < i; j++)
                {
                    cout << pass[j];
                }
                break;
            }
        }
    }
    cout << "\nEnter the phone number:";
    cin >> num;
    cout<<num;
    myfiles.open("test.csv", ios::app);
    myfiles << id << ",";
    for (int j = 0; j < i; j++)
    {
        myfiles << pass[j];
    }
    myfiles << "," << num << endl;
    if (!myfiles)
    {
        cout << "UR ACCOUNT IS NOT SAVED." << endl;
        getch();
        goto START;
    }
    else{
        cout<<"Your Account is created! Press enter to redirect you to the login page.";
        getch();
        login();
    }

}