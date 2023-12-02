#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n = 10;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Perulangan ke (%d, %d) \n", i, j);
        }
    }

    return 0;
}