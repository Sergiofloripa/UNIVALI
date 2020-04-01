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
    cout << endl << "Valor inserido é:" << valor << endl;

    if (valor==1){
        int binario;
        cout << "1 -> Conversão Binário para Decimal" << endl;
        cin >> binario;
        cout << endl << "O valor Binário digitado foi" << binario << endl;

    }else{
         if(valor==2){
            int decimal;
    cout << "1 -> Conversão Decimal para Binário " << endl;
    cin >> decimal;
    cout << endl << "O valor Decimal digitado foi" << decimal << endl;

    }else {

    cout << " Digite um Valor Válido";
}
}    return 0;

}
