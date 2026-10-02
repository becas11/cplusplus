#include <iostream>

using namespace std;

int main() {
    string conta;
    float n1,n2;
    float calculo;

    cout <<"Contas possiveis:\n";
    cout << "somar\n";
    cout << "subtrair\n";
    cout << "multiplicar\n";
    cout << "dividir\n";

    cout << "Diz qual conta queres efetuar:  ";
    cin >> conta;

    //cout << "Escolheste:  " << conta;

    cout << "Diz o 1.num:  ";
    cin >> n1;
    cout << "Diz o 2.num:  ";
    cin >> n2;

    if(conta == "somar"){
      cout <<"Soma = " << (n1 + n2);
    } else if(conta == "subtrair"){
      cout <<"Subtracao = " << (n1 - n2);
    } else if(conta == "multiplicar"){
      cout <<"Multiplicacao= " << (n1 * n2);
    } else if(conta == "dividir"){

     if (n2 == 0 ) {
        cout <<"Impossivel fazer o calculo";
     } else {
     calculo = (n1) / (n2);
     cout <<"Divisao = " << calculo;

     }

    } else {
        cout << "o que raio queres fazer !! ";

    }

}
