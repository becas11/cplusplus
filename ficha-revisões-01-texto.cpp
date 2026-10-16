#include <iostream>

using namespace std;
int main() {
    string nome,localidade,genero;
    string mensagem;
    int idade;

    cout << "Qual e o teu nome: ";
    cin >> nome;
    cout << "Quantos anos tens: ";
    cin >> idade;
    cout << "Onde moras: ";
    cin >> localidade;
    cout << "Es homem ou mulher: ";
    cin >> genero;

    if ("genero = Masculino"){
        mensagem = "Caro Sr" + nome;
    }
     else if ("genero = Femenino"){
        mensagem = "Cara Sra" + nome;
    }

    if (idade>=18){
    mensagem = mensagem + "maior de idade";
    }
     else if (idade<18){
     mensagem = mensagem + "menor de idade";
    }

    mensagem = mensagem + "mora em" + localidade;

    cout << mensagem;


return 0;
}
