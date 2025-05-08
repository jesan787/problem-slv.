    #include<iostream>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
     
        while(t--)
        { bool found= false;
             string s;
        cin>>s;
     
        for(int i=0; i<s.length()-2;i++){
     
            if(s[i] =='0' && s[i+1]== '1' && s[i+2]=='0' )
            {
                cout<<"Good"<<endl;
                found=true;
                break;
     
            }
            else if (s[i] =='1' && s[i+1]== '0' && s[i+2]=='1' )
                {cout<<"Good"<<endl;
                found=true;
                break;
            }
     
     
        }
        if(!found)
                cout<<"Bad"<<endl;
        }
        return 0;
     
     
    }
