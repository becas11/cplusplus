#include <iostream>

using namespace std;


char peca[9] = { '0', '1', '2','3', '4', '5','6', '7', '8'};
int posicao;

void jogo(){

    cout << "\n" << '0' << "|" << '1' << "|" << '2';
    cout << "\n" << '3' << "|" << '4' << "|" << '5';
    cout << "\n" << '6' << "|" << '7' << "|" << '8';
}
    bool jogoacabou(){
        return false;
    }

    bool jogoganho(){
        return false;
    }

int main(){


    do{

        jogo();
        cout << "\nOnde queres jogar o X: ";
        cin >> posicao;

        cout << "\nOnde queres jogar o O: ";
        cin >> posicao;


    }while(!jogoacabou());


return 0;
}

