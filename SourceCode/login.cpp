#include <iostream>
#include<conio.h>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include "ScrollingMenu.cpp"
#include "create.h"
#include "login.h"

using namespace std;

class LoginRow
{
private:
    std::vector<std::string> m_data;

public:
    std::string const &operator[](std::size_t index) const
    {
        return m_data[index];
    }
    std::size_t size() const
    {
        return m_data.size();
    }
    void readNextRow(std::istream &str)
    {
        std::string line;
        std::getline(str, line);
        std::stringstream lineStream(line);
        std::string cell;

        m_data.clear();
        while (std::getline(lineStream, cell, ','))
        {
            m_data.push_back(cell);
        }

        if (!lineStream && cell.empty())
        {
            m_data.push_back("");
        }
    }
};

std::istream &operator>>(std::istream &str, LoginRow &data)
{
    data.readNextRow(str);
    return str;
}

void login()
{
    int i = 0;
    char q,a;
    Start:
    system("CLS");
    std::ifstream file("test.csv");
    LoginRow row;
    string id, pass;
    std::cout << "Enter your id:";
    std::cin >> id;
    std::cout << "Enter your password:";
    for (int j = 0;;)
    {
        a = getch();
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
        {
            pass[j] = a;
            ++j;
            cout << '*';
        }
        else if (a == '\b')
        {
            cout << "\b \b";
            --j;
        }
        else if (a == '\r')
        {
            break;
        }
    }
    while (file >> row)
    {
        if (row[0] == id)
        {
            if (row[1] == pass)
            {
                menu();
                i = 1;
                break;
            }
            else{
                i=2;
            }
        }
    }
    if (i = 0)
    {
        std::cout << "Sorry! No id found, please create an Id"<<endl<<"Do you want to create an id (y/n)? : ";
        std::cin>>q;
        if(q=='y'){
            create();
        }
        else{
            std::cout<<"Press enter to try again!!";
            Sleep(2000);
            goto Start;
        }

        
    }
    else if(i=2)
    {
        std::cout<<"Incorrect password!Press enter to try again.";
        getchar();
        goto Start;
    }
}