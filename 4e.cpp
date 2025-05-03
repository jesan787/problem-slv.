#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    int n=a.size();
    
    for(int i=0;i<n;i++){
         
         sum+=a[i]-'0';
         //ascii value of '0' is 48. so when we minus it from ascii value of digit we get there real numerical value or digit.
         //thats how we convert ascii value to digit value.
         
         
         
    }
    
   cout<<sum<<endl;
   return 0;


}
