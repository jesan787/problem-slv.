#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
   char temp;
    cin>>a>>b;
    int x,y;
    x=a.size();
    y=b.size();
    c=a+b;
    temp = a[0];
    a[0]=b[0];
    b[0]= temp;
    cout<<x<<" "<<y<<"\n"<<c<<"\n"<<a<<" "<<b<<endl;


}
