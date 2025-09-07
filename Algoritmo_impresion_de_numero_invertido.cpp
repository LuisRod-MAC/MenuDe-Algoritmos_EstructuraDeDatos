#include <iostream>
using namespace std;

int separar_num(int num){
    int digito=1, divisor=10;
    digito=num%divisor;
    num = num/divisor;

    if (digito!=0)
    {
        cout<<digito;
        separar_num(num);
    }
     return 0;
}

int main (){
    int num = 0;
    cout << "Ingresa tu numero: ";
    cin >> num;

    separar_num(num);

    return 0;
}
