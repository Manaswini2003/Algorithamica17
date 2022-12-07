#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	char j;
	cin>>j;
	cin>>i;
	if(j=='a'||j=='c'||j=='e' || j=='g'){
	    if(i%2!=0){
		cout<<"square is black";
	    }  
	    else{
	    	cout<<"square is white";
		}
	}
	else if(j=='b'||j=='d'||j=='f'||j=='h'){
	    if(i%2==0){
		cout<<"Square is black";
		}
		else{
			cout<<"square is white";
		}
	}
	return 0;
}
