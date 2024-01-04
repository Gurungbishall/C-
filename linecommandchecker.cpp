#include<iostream>
#include<string>
using namespace std;
int main()
   {
    string stg,ch;
    int i=0;
    cout<<"Enter the command:\n";
    getline(cin,stg);
     if(stg[i]=='/')
        {
          i++;
          if(stg[i]=='/')
              {
                cout<<"Single line command\n";
              }
          else if(stg[i]=='*')
              {
                if (stg[stg.size()-2]=='*')
                {
                  if (stg[stg.size()-1]=='/')
                  {
                    cout<<"Multi line command\n";
                  }
                }
                else
                  {
                    cout<<"Not a command\n";
                  }
              }
          else
              {
                cout<<"Not a command\n";
              }
           }
      else
       {
        cout<<"Not a commmand\n";
       }
    return 0;
    }