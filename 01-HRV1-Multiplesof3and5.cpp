#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    int entrada;
    scanf("%d",&entrada);

    for(int i=0; i<entrada; i++){
        ull aux;
        ull Soma = 0;

        scanf("%lld",&aux);
        for(int i=1; i<aux; i++){
            if(3*i>=aux) break;
            Soma+=3*i;
        }
        for(int i=1; i<aux; i++){
            if(5*i>=aux) break;
            if(5*i%3!=0) Soma+=5*i;
        }
        printf("%lld\n", Soma);
    }

    return 0;
}