#include<iostream>
using namespace std;
main()
{
	char str[100];
cin>>str;

bool IsBreak=false;
 

for (int i=0; str[i]!='\0'; i++) 
 if (str[i]<48 || str[i]>57) {cout<<"Not number"; IsBreak=true; break;}
	else cout<<"Hellow "<<str;
}
