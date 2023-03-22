#include <iostream>
using namespace std;

bool vote(int age){
	
	if (age>= 18){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	cout<<"Enter the age of the person: ";
	int age;
	cin>>age;
	if(vote(age)==true){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
