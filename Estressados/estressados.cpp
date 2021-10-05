#include<iostream>
#include<vector>
#include <algorithm>
#include<cstdlib>
bool existe (std::vector<int> vet, int num)
{
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] == num){
            return true;
        }
    }
    return false;
}
int contar (std::vector<int> vet, int num)
{
    int a = 0;
    //std::cout << "\n" << a << "\n";
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] == num){
            a = a + 1;
        }
    }
    return a;
}
int procura_valor (std::vector<int> lista, int num)
{
    for (int i = 0; i < lista.size(); i++){
        if (lista[i] == num){
            return 1;
        }
    }
    return -1;
}
int valor_apartir (std::vector<int> lista, int num, int ini)
{
    for (int i = ini; i < lista.size(); i++){
            if (lista[i] == num){
                return i;
            }
    }

}
int procura_menor (std::vector<int> lista)
{
    int a = RAND_MAX;
        for (int i = 0; i < lista.size(); i++){
            if (a > lista[i]){
                a = lista[i];
            }
        }
    return a;
}

int procurar_menor_pos(std::vector<int> lista)
{
    int a = procura_menor(lista);
    int b = valor_apartir(lista, a, 0);
    return b;
}
int procurar_menor_pos_apartir(std::vector<int> lista, int ini)
{   
    int a = procura_menor(lista);
    int b = valor_apartir(lista, a, ini);
    return b;
    
}


int procurar_melhor_pos_se(std::vector<int> lista)
{   
    int a = 0;
    for (int i = 0; i < lista.size(); i++){
        if (lista[i] > 0){
            a = 1;
            i = lista.size();
        }else{
            a = -1;
        }
    }
    return a;
}
float calcular_stress_medio(std::vector<int> lista)
{       float res;
        int soma = 0;
        for (int i = 0; i < lista.size(); i++){
            if (lista[i] < 0){
                soma += lista[i] * -1;
                }
            if (lista[i] > 0){
                soma += lista[i];
            }
        res = soma / lista.size();        
        }
    return res;    
}
std::string mais_homens_ou_mulheres(std::vector<int> lista)
{
    int h = 0;
    int m = 0;
        for (int i = 0; i < lista.size(); i++){
            if (lista[i] > 0){
                h++ ;
            }else{
                m++;
            }
        }
        if (h > m){
            return "Homens";
        }else{}
        if (m > h){
            return "Mulheres";
        }else{}
        if (h == m){
            return "Empate";
        } 
}


int main()
{
    {
        std::cout << "\n--- Existe ---\n";
    std::cout << existe({-1, -50, -99}, -1) << "\n"; //1
    std::cout << existe({-1, -50, -99}, 10);         //0
    
        std::cout << "\n--- Conta ---\n";
    std::cout << contar({-1, -50, -1, -99}, -1) << "\n";//2
    std::cout << contar({-1, -50, -1, -99}, 10);        //0
    
        std::cout << "\n--- Procura ---\n";
    std::cout << procura_valor({-1, -50, -1 -99}, -50) << "\n"; // 1
    std::cout << procura_valor({-1, -50, -1, -99}, 10) ; // -1
        //busca
    }

    {
        std::cout << "\n--- Procura posicao inicial ---\n";
    std::cout << valor_apartir({5, 3, -1, -50, -1, -99}, -1, 0) <<"\n"; // 2
    std::cout << valor_apartir({5, 3, -1, -50, -1, -99}, -1, 3) <<"\n"; // 4
    std::cout << valor_apartir({5, 3, -1, -50, -1, -99}, -1, 4); // 4

        std::cout << "\n--- Procura menor ---\n";
    std::cout << procura_menor({5, 3, -1, -50, -1, -99}); // -99
     
        std::cout <<"\n--- Procura a posicao do menor ---\n";
    std::cout << procurar_menor_pos({5, 3, -1, -50, -1, -99}); // 5

        std::cout << "\n--- Procura menor na posicao a partir de ---\n";
    std::cout << procurar_menor_pos_apartir({5, 3, -1, -50, -1, 10}, 3); // 3

        std::cout <<"\n--- Homem mais calmo ---\n";
    std::cout << procurar_melhor_pos_se({5, 3, -1, -50, -1, -99}) << "\n"; // 1
    std::cout << procurar_melhor_pos_se({-1, -50, -1, -99}); // -1
        //melhor caso
    }

    {
        std::cout << "\n--- Media de estress ---\n";
    std::cout << calcular_stress_medio({5, 3, -1, -50, -1, -99});

        std::cout << "\n--- Mais homens ou mulheres ---\n";
    std::cout << mais_homens_ou_mulheres({5, 3, -1, -50, -1, -99}) << "\n"; // "mulheres"
    std::cout << mais_homens_ou_mulheres({5, 3, 1, -50, -1, -99}) << "\n"; // "empate"
    std::cout << mais_homens_ou_mulheres({5, 3, 1, -50, -1, 99}); // "homens"

    }
    return 0;
}