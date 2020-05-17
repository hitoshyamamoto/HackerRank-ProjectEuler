#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada;
    scanf("%d",&entrada);

    for(int i=0; i<entrada; i++){
        int aux;
        int Soma = 0;

        scanf("%d",&aux);
        for(int i=1; i<aux; i++){
            if(3*i>=aux) break;
            Soma+=3*i;
        }
        for(int i=1; i<aux; i++){
            if(5*i>=aux) break;
            if(5*i%3!=0) Soma+=5*i;
        }
        printf("%d\n", Soma);
    }

    return 0;
}