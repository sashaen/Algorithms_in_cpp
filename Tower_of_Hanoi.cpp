#include<bits/stdc++.h>
using namespace std;

// source- s, auxiliary- a, destination-d, number_of_disc- n

void Tower(int n,char s,char a,char d){
	if(n==1){
		cout<<"Shift disc 1 from "<<s<<" to "<<d<<endl;
		return;
	}
	Tower(n-1,s,d,a);
	cout<<"Shift disc "<<n<<" from"<<s<<" to "<<d<<endl;
	Tower(n-1,a,s,d);

}

// main

int main(){
	int n;
	cin>>n; // no of discs
	Tower(n,'S','A','D');
	return 0;
	
}
