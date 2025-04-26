
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char nomes[2][15] = {};
    int jogador = 0;
    bool jogando = true;
    
    int pedrinhas[28][2] = {};
    int teste[28][2] = {{1, 2}, {1, 2},{1, 2},{1, 2}};
    int id = 0;
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= i; j++){
            pedrinhas[id][0] = i;
            pedrinhas[id][1] = j;
            id++;
        }
    }
    
    printf("Pedrinhas:\n");
    for (int i = 0; i <= 28; i++) {
        printf("%d | %d", pedrinhas[28][0], pedrinhas[28][1]);
    }

    printf("%s", "Qual nome do primeiro jogador? ");
    scanf("%s", nomes[0]);
    
    printf("Qual nome do segundo jogador? ");
    scanf("%s", nomes[1]);
    
    printf("%s & %s estão jogando!", nomes[0], nomes[1]);

    while (jogando) {
        
    }
 
    return 0;
}
