#include<iostream>
#include<string>
#include<windows.h>
#include "login.h"
#include "login.cpp"
#include "create.h"
#include "create.cpp"
using namespace std;

int dash(int n,string arr[]);

int main(){
    int n=2;
    string option[]={"create id", "Login"};
    system("cls");
    cout<<"welcome to Student Study Manager"<<endl;
    // create();
    cout<<"Do you like to enroll in the system(y) or to login(l)?"<<endl;
    int a = dash(n,option);

    // cin>>yn;
    if(a==0){
        create();
    }
    else if(a==1){
        login();
    }


    
return 0;

}

int dash(int n,string arr[]){
	int pointer = 0;
	
	while(true)
	{
		system("cls");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Dashboard\n\n";
		
		for (int i = 0; i < n; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << arr[i] << endl;
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << arr[i] << endl;

			}
		}
		Sleep(150);
		while(true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = n-1;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				if (pointer == n)
				{
					pointer =0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
					for(int j=0;j<n;j++){
						if(pointer == j){
							return j;
							break;
						}

					}
				
				break;
			}
		}
		
		Sleep(150);
	}
}