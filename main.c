#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "magasin.h"

int main() {
    int choix;

    while (1) {
        printf("\nGestion du Magasin d'Ordinateurs\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Consulter les détails d'un ordinateur\n");
        printf("3. Mettre à jour les stocks\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                char motDePasse[20];
                printf("\nEntrez le mot de passe administrateur : ");
                scanf("%s", motDePasse);

                if (strcmp(motDePasse, "0000") == 0) {
                    ajouterOrdinateur();
                } else {
                    printf("\nMot de passe administrateur incorrect. Opération annulée.");
                }
                break;
            }
            case 2:
                consulterDetails();
                break;
            case 3: {
                char motDePasse[20];
                printf("\nEntrez le mot de passe administrateur : ");
                scanf("%s", motDePasse);

                if (strcmp(motDePasse, "0000") == 0) {
                    mettreAJourStock();
                } else {
                    printf("\nMot de passe administrateur incorrect. Opération annulée.");
                }
                break;
            }
            case 4:
                printf("\nAu revoir !");
                exit(0);
                break;
            default:
                printf("\nChoix invalide. Veuillez réessayer.");
        }
    }

    return 0;
}
