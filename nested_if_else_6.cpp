#include<iostream>
using namespace std;
int main () {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

    //rahul khn jaayega uska nishakarsh nikalenge

    int amount;

    cin>>amount;

    if (amount>5000)
    {
     if (amount>10000)
     {
        cout<<"Roadtrip with neha\n";
     }else{
         cout<<"Shopping with neha\n";
     }
     

    }
    else if(5000 < amount>2000){
        cout<<"Date with Aanaya\n";
    }
    else{
        cout<<"Dost zindabad\n";
    }
    
    return 0;
}