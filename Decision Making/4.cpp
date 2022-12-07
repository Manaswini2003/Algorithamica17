#include<bits/stdc++.h>
using namespace std;

int main()
{
string str;
cout<<"enter the month:";
cin>> str;
if(str =="feb")
cout<<"28 or 29 days"<<endl;
else if(str == "jan" || str == "mar" || str == "may" || str == "july" || str == "aug" || str == "oct"|| str == "dec") 
cout<<"31 days"<<endl;
else
cout<<"30 days"<<endl;
return 0;
}
