#include <iostream>

using namespace std;


int funcaoSomarNs(int x){
    if (x == 0){
        return 0;
    }else {
        if (x>0){
            return x + funcaoSomarNs(x-1);
        }else{
            return x + funcaoSomarNs(x+1);
        }
    }

}


int main (){

    int numero;

    cout << "Diz um numero: ";
    cin >> numero;
    cout << "n\R: "<< funcaoSomarNs;


    return 0;
}





