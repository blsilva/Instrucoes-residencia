#include <iostream>

using namespace std;

int main(){
    int A = 0;
    int B = 0;
    int soma = 0;
    int subt = 0;
    int multi = 0;
    int div = 0;
    int res = 0;

    cout << "Digite o valor de A " << endl;
    cin >> A;

    cout << "Digite o valor de B " << endl;
    cin >> B;

    soma = A+B;
    subt = A-B;
    multi = A*B;
    div = A/B;
    res = A % B;

    cout<<"O resultado da soma e " << soma << endl;
    cout<<"O resultado da subtracao e " << subt << endl;
    cout<<"O resultado da multiplicacao e " << multi << endl;
    cout<<"O resultado da divisao e " << div << endl;
    cout<<"O resultado do resto e " << res << endl;

return 0;
}