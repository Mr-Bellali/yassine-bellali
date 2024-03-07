#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct client {
    char nom[30];
    float article[3];
    float totalHT;
    float TVA;
    float montantTVA;
    float TTC;
    char modePaiement[30];
};

float getTotalHT(float artcl1,float artcl2,float artcl3){
    return artcl1+artcl2+artcl3;
}

float getmontantTVA(float Totalarticles){
    return Totalarticles * 0.2;
}

float getTTC(float totalHT, float montantTVA){
    return totalHT + montantTVA;
}


int main()
{
    struct client cl;
    int choix;

    printf("Entrer ton nom: ");
    gets(cl.nom);

    for(int i=0 ; i<3 ; i++){
        printf("\nentrer larticle Nr %d :",i+1);
        scanf("%f",&cl.article[i]);
    }


    printf("choiser le mode de paiement: \n");
    printf("1. cash\n");
    printf("2. credit card\n");
    printf("3. cheque\n");
    printf(">>");

    scanf("%d",&choix);

    switch (choix){
        case 1 :
            strcpy(cl.modePaiement,"cash");
        break;
        case 2 :
            strcpy(cl.modePaiement,"credit card");
        break;
        case 3 :
            strcpy(cl.modePaiement,"cheque");
        break;
        default :
            printf("invalide choice!!");
        break;
    }


    cl.totalHT = getTotalHT(cl.article[0],cl.article[1],cl.article[2]);
    cl.montantTVA = getmontantTVA(cl.totalHT);
    cl.TTC = getTTC(cl.totalHT, cl.montantTVA);

    printf("\n\n\n#############################################\n\n");
    printf("#\t\t\tFacture\t\t\t\n\n");
    printf("# Nom de client: %s\n\n",cl.nom);
    for(int j=0; j<3 ; j++){
        printf("# Article Nr %d: %.2f\n\n",j+1,cl.article[j]);
    }
    printf("# Total HT: %.2f \n\n",cl.totalHT);
    printf("# Taux de la TVA: 20% \n\n");
    printf("# Montant de la TVA: %.2f \n\n",cl.montantTVA);
    printf("# Total TTC: %.2f \n\n",cl.TTC);
    printf("# Mode de paiement: %s \n\n",cl.modePaiement);
    printf("#############################################\n");

    return 0;
}
