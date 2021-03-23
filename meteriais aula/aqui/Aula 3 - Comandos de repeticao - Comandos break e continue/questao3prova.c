#include <stdio.h>

int main()
{
    int c,c_cid,c_est,num_veiculos,num_acidentes;
    int maior,ma_cid, menor, me_cid,c_234=0;
    float soma=0,media;
    float soma_234=0,media_234;


    for(c=1; c<=200; c++)
    {
        printf("Digite codigo da cidade: ");
        scanf("%i",&c_cid);
        printf("Digite codigo do estado: ");
        scanf("%i",&c_est);
        printf("Digite numero de veiculos: ");
        scanf("%i",&num_veiculos);
        printf("Digite numero acidentes de transito: ");
        scanf("%i",&num_acidentes);

        soma = soma + num_veiculos;

        if( c == 1)
        {
            maior=num_acidentes;
            ma_cid=c_cid;
            menor=num_acidentes;
            me_cid=c_cid;
        }
        if( maior < num_acidentes)
        {
            maior=num_acidentes;
            ma_cid=c_cid;
        }
        if( menor > num_acidentes)
        {
            menor=num_acidentes;
            me_cid=c_cid;
        }

        if( c_est == 234 )
        {
            soma_234= soma_234 + num_acidentes;
            c_234++;
        }

    }
    media = soma / 200;
    media_234 = soma_234 / c_234;
    printf("Maior indice: %i cidade: %i\n",maior,ma_cid);
    printf("Menor indice: %i cidade: %i\n",menor,me_cid);
    printf("Media de acidentes: %.2f\n", media);
    printf("Media de acidentes no Rio Grande do Sul: %.2f\n", soma_234);

    return 0;
}
