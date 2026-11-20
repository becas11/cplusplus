#include <iostream>
#include <string.h>

using namespace std;

int op;

void menu () {

    cout << "Diz oque queres fazer: \n ";
    cout << "1- Mostra a ano \n";
    cout << "2- Sair do programa \n";
    cout << "escolha: ";
}



int getYear(){ return 2026; }
int getMonth(){ return 5;}
int getDay(){ return 17;}

int aMinhaIdade(int ano, int mes, int dia){
    int aux = getYear() - ano;}

    if (getMouth() < mes) {
        aux --;
    }else{
        if(getDay() < dia && getMonth() == mes){
           aux -- x;

        }

    }
    return aux;

int main (){

    int ano, op;

    cout << "a minha idade = " << aMinhaIdade(2011, 5, 17) << "anos\n";

    do {
        menu();
        cin >> op;

        if (op == 1){
            ano = getYear();
            cout << ano;
            cout << "\n";


        }


    }while (op != 2);


    return 0;

}



