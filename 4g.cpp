// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string S;
//     cin >> S;

//     for (char &c : S) {
//         if (c == ',')
//             c = ' ';
//         else if (islower(c))
//             c = toupper(c);
//         else if (isupper(c))
//             c = tolower(c);
//     }

//     cout << S << endl;
//     return 0;
// }


    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string s;
      getline(cin,s);
     
        for(int i=0; i<s.size(); i++)
        {
            if( s[i]==',')
            cout<<" ";
           else if( islower(s[i])){
               s[i]=toupper(s[i]);
            cout<<s[i];//toupper(s[i]);
            }
     
            else if( isupper(s[i])){
            s[i]=tolower(s[i]);
            cout<<s[i];//tolower(s[i])<<endl;
            }
     
        }
    }
