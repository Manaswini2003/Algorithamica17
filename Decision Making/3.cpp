#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c;
cout<<"enter the values of a,b,c:";
cin>>a,b,c;
if(a==b && b==c)
cout<<"its an equilateral triangle"<<endl;
else if(a==b||b==c||c==a)
cout<<"its an isosceles triangle "<<endl;
else 
cout<<"its an scalene triangle"<<endl;
return 0;
}
