#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;
    cout << "Calculadora Binario - Decimal" << endl;
    cout << "Informe o que deseja converter" << endl;
    cout << "1 -> Binario para Decimal"<< endl;
    cout << "2 -> Decimal para Binario"<< endl;

    cin >> valor;
    cout << endl << "Valor inserido �:" << valor << endl;

    if (valor==1){
        int binario;
        cout << "1 -> Convers�o Bin�rio para Decimal" << endl;
        cin >> binario;
        cout << endl << "O valor Bin�rio digitado foi" << binario << endl;

    }else{
         if(valor==2){
            int decimal;
    cout << "1 -> Convers�o Decimal para Bin�rio " << endl;
    cin >> decimal;
    cout << endl << "O valor Decimal digitado foi" << decimal << endl;

    }else {

    cout << " Digite um Valor V�lido";
}
}    return 0;

}
