#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int count = 0;
    char repeat = 'y';

    do{
        printf("Apakah anda ingin mengulangi (y / n) : ");
        cin >> repeat;
        if(repeat == 'y'){
            count++;
        }
    }while(repeat == 'y');

    return 0;
}