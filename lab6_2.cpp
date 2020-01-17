#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	

	cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
	cout << "?????: ";
	string x ;
	getline(cin,x) ;
	cout <<  "Fahsai: Wow!!!" << x << " that is a really cool name.\n";
	cout <<  "Fahsai: I think you are Engineering student. What is your student ID?\n";
	cout << x << ": " ;
	int y ;
	cin >> y ;
	
	y=y/pow(10,7);
	y=y-12;
	
	cout << "Fahsai: I think you may be GEAR " << y << "." << " I have a free movie tickets for you.\n" ;
	cout << "Fahsai: Let's go to cinema together!!!\n" ;
	cout << "Fahsai: What movie do you want to watch?\n" ;
	cout << x << ": " ;
	cin.ignore();
	string z ;
	getline(cin,z);
	cout << "Fahsai: So....which day are you free to go with me?\n" ;
	string q ;
	cout << x << ": " ;
	getline(cin,q);
	cout << "Fahsai: " << q << "....that is OK!!! I'm looking forward to watch " << z << " with you.\n" ;
	cout << x << ": " ;
	string w ;
	getline(cin,w);
	cout << "Fahsai: 555+ see you " << q << ". Bye Bye  \\(^ ^)/" ;
	
	return 0;
}