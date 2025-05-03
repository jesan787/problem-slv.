#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length() > 20 ||t.length() > 20 )
       return 0;

     if(s<t)  
     cout<<s<<endl;
    else if(s==t)
    cout<<t<<endl;
    else{
        cout<<t<<endl;
    }
}
