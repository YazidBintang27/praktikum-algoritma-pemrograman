#include <iostream>

using namespace std;

void say_hello(string name){
	cout << "\nHello " << name << endl;
}

int main(){
	string name;
	cout << "Input name : ";
	getline(cin, name);
	
	say_hello(name);
	
	return 0;
}
