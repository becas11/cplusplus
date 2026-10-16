#include <iostream>

using namespace std;


int main (){

    float resultado = 0;
    int i;
    for( i = 1; i <= 10; i++){
        resultado += i;
    }
    i=11;
    do {
        resultado -=i;
        i++;
    }while (i<=15);

    while (i<=20) {
        i++;
    }

    cout << resultado;



return 0;


}






