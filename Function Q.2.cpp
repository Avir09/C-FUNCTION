#include <iostream>
using namespace std;

double circumference(int r){
	float circum= 2*3.14*r;
	return circum;
}

double area(int r){
	float area= 3.14*r*r;
	return area;
}

int main(){
	
	int r;
	cin>>r;
	
	cout<<"The circumference of the circle is: "<<circumference(r)<<endl;
	cout<<"The area of the circle is: "<<area(r)<<endl;
	
	return 0;
}
