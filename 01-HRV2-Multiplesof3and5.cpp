#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull multiples(ull soma, int aux, int mult){
    if(mult*3>= aux && mult*5>=aux) return soma;
    if(mult*3<aux) soma+=mult*3;
    if(mult*5<aux && mult*5%3!=0) soma+=mult*5;
    return multiples(soma, aux, mult++);
}

int main(){
    int entrada;
    scanf("%d",&entrada);

    for(int i=0; i<entrada; i++){
        ull aux;
        ull Soma = 0;

        scanf("%lld",&aux);
        Soma = multiples(Soma,aux,1);
        printf("%lld\n", Soma);
    }

    return 0;
}