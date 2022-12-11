// beecrowd 1079 | Médias Ponderadas

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    int n;
    float number[3], media_ponderada[n], soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> fixed >> setprecision(1) >> number[j];
            switch (j) {
            case 0:
                soma += number[j]*2;
                break;
            case 1:
                soma += number[j]*3;
                break;
            case 2:
                soma += number[j]*5;
                break;
            }
        }
        media_ponderada[i] = soma/10;
        soma = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(1) << media_ponderada[i] << endl;
    }

    return 0;
}

// opcao que talvez funcione

int main() {
    float n1,n2,n3,total,media;
    int cont,numero;
    cin >> numero;
    for (cont=1;cont<=numero;cont++){
        cin>>n1>>n2>>n3;
        total=n1*2.0+n2*3.0+n3*5.0;
        media=total/10.0;
        cout<<media<<endl;
    }
    return 0;
}