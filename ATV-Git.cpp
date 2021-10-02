#include <stdio.h>

int main(){
    int a;
    printf("Digite a quantidade de numeros a serem comparados: \n");
        scanf("%d", &a);
        int v[a];
        int maior = 0;
        int menor;
        int i; 
    for (i=0; i<a; i++){
        printf("Digite o %d numero \n", i+1);
            scanf("%d", &v[i]);

    }i=0;menor=v[0];
    for (i = 0; i < a; i++)
    {
        if(menor>v[i]){
            menor = v[i];
        }else{}
        if(maior<v[i]){
            maior=v[i];
        }}
        printf("O maior numero eh: %d\n", maior);
        printf("O menor numero eh: %d", menor);

    

    return 0;
}
