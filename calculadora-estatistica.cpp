#include <iostream>
#include <iomanip>
using namespace std;
#define K 11

// abaixo está a frequência absoluta de cada coluna
float freq_acumulada = 0;
int co[K] = {4,8,35,20,24,9,9,2,4,2,3};
int o3[K] = {13,29,16,12,16,12,5,11,2,3,1};
int temp[K] = {2,2,5,16,14,17,12,23,21,7,1};
int umid[K] = {3,13,21,23,14,12,8,7,4,7,8};

// abaixo está todos os dados de CO e O3 organizados por mes (use ela para calcular a média para a questão 5)
float co_jan[] = {6.6,6.2,7.9,8.6,8.8,6.4,6.9,7.9,8.2,8.7,6.3,6.3,6.3,6.4,7.7,7.9,7.9,7.7,6.9,6.2,6.2,6.1,7.3,6.6,6.2,5.1,6.1,5.7,6.7,6.5,5.7};
float o3_jan[] = {113.6,115.2,130.4,110.4,107.2,86.4,120,150.4,149,117.3,59.7,27.2,119.2,120.8,26.7,50.1,35.2,40,96,142,134.3,82.1,233.2,72,96.8,61.6,32.8,35.2,87.2,85.6,34.7};

float co_fev[] = {5.8,6.2,5.5,6.7,7.9,6.4,6.9,6.4,5.2,5.7,4.7,7.3,6.2,6.7,6.2,6.7,6.1,6.7,7.4,5.9,5.5,6.1,7.2,5.6,7.2,6.9,6.9,7.7};
float o3_fev[] = {22.9,83.9,204.2,192.5,99.7,182.3,141,87.2,34.4,40,60.8,82,98.9,200,172.7,65.2,149.2,100,128.4,135.7,121.2,85.2,48.4,81.6,72.8,164.9,137.1,82.4};

float co_mar[] = {6.3,7.7,6.4,6.4,7.9,6.2,6.8,8.0,8.3,7.8,6.9,7.5,8.4,8.1,6.6,7.1,6.6,7.7,10.3,7.5,11.4,9.5,7.8,7.4,8.9,9.5,10.1,12.5,6.2,7.9,7.6};
float o3_mar[] = {38.8,30.4,26.7,33.6,24,12.3,12.3,129.2,105.6,116.8,85.3,56,61.9,50.7,40.5,48.5,92.8,97.1,32,56,91.7,38.9,33.1,34.7,140.8,27.7,18.8,24,33.1,28.8,18.7};

float co_abr[] = {9.1,7.0,7.2,7.8,9.1,9.7,6.3,10.8,12,8.9,7.6,9.4,11.9,10.3,8.3,7.8,11.6,6.9,7.8,6.9,4.7,7.9,7.4,8.5,8.5,9.0,8.9,10.3,6.1,7.0};
float o3_abr[] = {27.2,42.7,62.4,68.3,16.5,122.1,104,35.2,150.3,48.8,38.4,59.7,39.6,63.5,92,29.9,20.3,19.7,13.3,34.7,40,150.2,120.7,28.8,9.1,2.7,11.2,33.1,34.4,53.6};

float frequencia_relativa(float, float);
float frequencia_relativa_porcentagem(float, float);
float frequencia_acumulada(float, float);
float frequencia_acumulada_porcentagem(float, float);

int main(int argc, char** argv) {
    // abaixo é só substituir a função para o que deseja
    for (int i = 0; i < K; i++) {
       cout << frequencia_acumulada_porcentagem(umid[i],120) << endl;
    }

    // abaixo é para calcular a média para a questão 5
    float soma = 0;
    float media;
    for (int i = 0; i < 30; i++) {
        soma += o3_abr[i];
    }
    media = soma/30;
    cout << media << endl;
    return 0;
}

float frequencia_relativa(float frequencia_absoluta, float total) {
    return frequencia_absoluta / total;
}

float frequencia_relativa_porcentagem(float frequencia_absoluta, float total) {
    return (frequencia_absoluta / total) * 100;
}

float frequencia_acumulada(float frequencia_absoluta, float total) {
    freq_acumulada += frequencia_absoluta;
    return freq_acumulada;
}

float frequencia_acumulada_porcentagem(float frequencia_absoluta, float total) {
    freq_acumulada += frequencia_absoluta;
    return freq_acumulada/total*100;
}



