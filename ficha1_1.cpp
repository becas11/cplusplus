#include <iostream>

using namespace std;

int main() {
    int numero;
    for (int i=0; i<0; i=0);{

    cout << "Diz-me um opcao entre 1 e 3 \n";
    cout << "0 (sair do programa)\n";
    cout << "a sua opcao";
    cin  >> numero;
    switch (numero) {
        case 0:
            break;
        case 1:
            cout << "um bom programador";
            break;
        case 2:
            cout << " muito bom programador";
            break;
        case 3:
            cout << " excelente programador";
            break;
        default:
            cout << "nao sei oque estas a pedir";
            break;

    }
    if (numero == 0) break;
;

    }





    return  0;
}
