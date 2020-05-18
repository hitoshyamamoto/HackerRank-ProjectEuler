#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull somatoria(ull limite, ull multiplos){
    ull upperLimit = (limite - (limite-1)%multiplos)/multiplos;
    ull somatoria = multiplos*(upperLimit*(upperLimit+1))/2;
    return somatoria;
}

int main(){
    int entrada;
    scanf("%d",&entrada);

    for(int i=0; i<entrada; i++){
        ull aux;
        ull Soma = 0;

        scanf("%lld",&aux);
        Soma = somatoria(aux,3)+somatoria(aux,5)-somatoria(aux,15);
        printf("%lld\n", Soma);
    }

    return 0;
}