#include <iostream>
using namespace std;
int main()
{
   int i, x;
   char str[100];
   cout<<"Enter message: ";
   cin>>str;
   cout<<"Lmao what you trynna do?\n";
   cout<<"1) Secret secret\n";
   cout<<"2) Spill the beans\n";
   cin>>x;
   switch(x)
   {
        case 1:for(i=0; (i<500 && str[i]!='\0'); i++)
            str[i]=str[i]+3;
            cout<<"\nEncrypted string: " << str << endl;
        break;
        case 2:for(i=0; (i<500 && str[i]!='\0'); i++)
            str[i]=str[i]-3;
            cout<<"\nDecrypted string: "<<str<<endl;
        break;
        default:
            cout<<"Select an option\n";
    }
    return 0;
}