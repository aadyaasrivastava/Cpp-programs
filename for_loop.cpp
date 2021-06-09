#include<iostream>
using namespace std;
int main(){
    

   /* for (int i = 0; i < 10; i++)
    {
        /*    cout<<"Hello World"<<endl;
     }
     
     */
     int n;
     cin>>n;

     int sum = 0;
     for (int counter = 1; counter <= n; counter++)
     {
         sum=sum+counter;
     }
     cout<<sum<<endl;
     
    

    return 0;
}