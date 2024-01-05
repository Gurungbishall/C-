#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
  {
    string stg;
    int choice=0;
    while (choice!=3)
    {
        cout<<"1.for Upper case 2.for Lower case 3.for Exit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
             cout<<"Enter the stg:";
             cin.ignore();
             getline(cin,stg);
             transform(stg.begin(),stg.end(),stg.begin(),::toupper);
             cout<<stg<<"\n";
            break;
        case 2:
             cout<<"Enter the stg:";
             cin.ignore();
             getline(cin,stg);
             transform(stg.begin(),stg.end(),stg.begin(),::tolower);
             cout<<stg<<"\n";
            break;
        case 3:
             cout<<"Exiting\n";
            break;
        default:
             cout<<"Invalid Choice:\n";
            break;
        }
    }
    return 0;
  }