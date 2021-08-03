// #include <iostream>
// #include <string>
// #include<fstream>
// #include<time.h>
// #include "otp.cpp"
// using namespace std;      



// class login
// {
//     string Id, pass, Idin, passin;
//     int phone;

// public:
//     static int count;
//     void create_Id();
//     void login_Id();
//     friend void reset(login l1);
// };

// void login::create_Id()
// {

//     cout << "Enter your userId : ";
//     cin >> Id;
//     getchar();
//     cout << "Enter the password:";
//     cin >> pass;
//     getchar();
//     cout << "Enter your phone number:";
//     cin >> phone;
//     getchar();
// }

// void login ::login_Id()
// {
//     cout << "Enter your Id:";
//     cin >> Idin;
//     getchar();
//     cout << "Enter your password:";
//     cin >> passin;
//     getchar();
//     if (Idin != Id)
//     {
//         cout << "Invalid Id! Please Try Again" << endl;
//     }
//     else if (passin != pass)
//     {
//         cout << "Invalid Password! Please Try Again" << endl;
//     }
//     else
//     {
//         cout << "Access granted" << endl;
//         count = 1;
//     }
// }

// void reset(login l1)
// {
//     int n;
//     string new_pas;
//     cout << "Enter the phone number:";
//     cin >> n;
//     if (n == l1.phone)
//     {
//         cout << "Here is you otp : " << generateOTP(6) << endl;
//         do
//         {
//             cout << "Enter your new password:";
//             cin >> new_pas;
//         } while (new_pas == l1.pass);
//         l1.pass = new_pas;
//         system("CLS");
//         l1.login_Id();
//     }
//     else
//     {
//         cout << "Incorrect Phone Number!" << endl;
//         reset(l1);
//     }
// }

// int login ::count;
// void id()
// {
//     int n = 0;
//     system("CLS");
//     login l1;
//     l1.create_Id();
//     system("CLS");
//     for (int i = 0; i < 3; i++)
//     {
//         l1.login_Id();
//         if (l1.count == 1)
//         {
//             n=1;
//             break;
//         }
//     }
//     if(n==0){
//         reset(l1);
//     }
// }
