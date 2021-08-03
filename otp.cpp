#include <bits/stdc++.h> 
using namespace std; 
   
string generateOTP(int len) 
{ 
    srand(time(NULL));
    string str = "0123456789"; 
    int n = str.length(); 
    
    string OTP; 
   
    for (int index=1; index<=len; index++) 
        OTP.push_back(str[rand() % n]); 
   
    return(OTP); 
} 
   
 
// int main() 
// { 
//     srand(time(NULL)); 
//     char ch='y';
//     int len = 6; 
//     while(ch=='y' || ch=='Y'){
//     cout << "Your Generated OTP is :- "<<generateOTP(len).c_str()<<endl; 
//     cout<<"--Regenerate OTP--\nY/N : ";
//     cin>>ch;
//     }
//     system("pause");
//     return 0; 
// }