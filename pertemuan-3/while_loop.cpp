#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int count = 0;    
    char repeat = 'y';

    while(repeat == 'y'){
        printf("Apakah anda ingin mengulangi (y / n) : ");
        cin >> repeat;
        if(repeat == 'y'){
            count++;
        }
    }
    printf("Anda mengulang sebanyak %d\n", count);

    return 0;
}