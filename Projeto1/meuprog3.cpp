#include <iostream>

using namespace std;

int main(){
    float A = 0;
    float B = 0;
    float soma = 0;
    float subt = 0;
    float multi = 0;
    float div = 0;
    int res = 0;

    cout << "Digite o valor de A " << endl;
    cin >> A;

    cout << "Digite o valor de B " << endl;
    cin >> B;

    soma = A+B;
    subt = A-B;
    multi = A*B;
    div = A/B;
    res = static_cast <int> (A) % static_cast <int> (B);

    cout<<"O resultado da soma e " << soma << endl;
    cout<<"O resultado da subtracao e " << subt << endl;
    cout<<"O resultado da multiplicacao e " << multi << endl;
    cout<<"O resultado da divisao e " << div << endl;
    cout<<"O resultado do resto e " << res << endl;

return 0;
}