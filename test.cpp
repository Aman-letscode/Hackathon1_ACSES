// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,temp;
//     cin>>n;
//     int arr[n];   
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int flag=1;
//     for(int i=0;i<n;i++)
//     {
//         flag=1;
//         for(int j=i-1;j>=0;j--)
//         {
//             if(arr[i]==arr[j])
//             {
//                 flag=0;
//                 break;
//             }
//         }   
//         if(flag)
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int r,sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            r=arr[i]%k;
            if(r!=0)
            {
                count++;
                if(r>k-r)
                sum=sum+k-r;
                else
                sum=sum+r;
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}