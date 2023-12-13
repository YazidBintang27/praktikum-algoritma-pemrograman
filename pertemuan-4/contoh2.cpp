#include <iostream>

using namespace std;

void say_hello(string name){
	cout << "\nHello " << name << endl;
}

int main(){
	
	string name;
	
	cout << "Input Name : ";
	getline(cin, name);
	
	for(int i = 1; i <= 3; i++) say_hello(name);
	
	return 0;
}
