#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordinateur.h"
#include "magasin.h"

// Variables globales
Ordinateur magasin[100];
int nombreOrdinateurs = 0;

void ajouterOrdinateur() {
    // Demander les informations sur le nouvel ordinateur
    char marque[20];
    char modele[20];
    int stock;

    printf("Marque : ");
    scanf("%s", marque);
    printf("Modèle : ");
    scanf("%s", modele);
    printf("Stock : ");
    scanf("%d", &stock);

    // Ajouter l'ordinateur au magasin
    strcpy(magasin[nombreOrdinateurs].marque, marque);
    strcpy(magasin[nombreOrdinateurs].modele, modele);
    magasin[nombreOrdinateurs].stock = stock;

    nombreOrdinateurs++;

    printf("\nNouvel ordinateur ajouté avec succès !");
}

void consulterDetails() {
    if (nombreOrdinateurs == 0) {
        printf("\nAucun ordinateur n'est disponible dans le magasin.");
        return;
    }

    printf("\nListe des ordinateurs disponibles :\n");
    for (int i = 0; i < nombreOrdinateurs; i++) {
        printf("%d. %s %s (Stock : %d)\n", i + 1, magasin[i].marque, magasin[i].modele, magasin[i].stock);
    }

    int choix;
    printf("\nEntrez le numéro de l'ordinateur à consulter : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > nombreOrdinateurs) {
        printf("\nNuméro d'ordinateur invalide.");
        return;
    }

    Ordinateur ordinateur = magasin[choix - 1];
    printf("\nDétails de l'ordinateur :\n");
    printf("Marque : %s\n", ordinateur.marque);
    printf("Modèle : %s\n", ordinateur.modele);
    printf("Stock : %d\n", ordinateur.stock);

    printf("\nDétails consultés avec succès !");
}

void mettreAJourStock() {
    if (nombreOrdinateurs == 0) {
        printf("\nAucun ordinateur n'est disponible dans le magasin.");
        return;
    }

    printf("\nListe des ordinateurs disponibles :\n");
    for (int i = 0; i < nombreOrdinateurs; i++) {
        printf("%d. %s %s (Stock : %d)\n", i + 1, magasin[i].marque, magasin[i].modele, magasin[i].stock);
    }

    int choix;
    printf("\nEntrez le numéro de l'ordinateur à mettre à jour : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > nombreOrdinateurs) {
        printf("\nNuméro d'ordinateur invalide.");
        return;
    }

    int nouveauStock;
    printf("Nouveau stock : ");
    scanf("%d", &nouveauStock);

    magasin[choix - 1].stock = nouveauStock;

    printf("\nStock mis à jour avec succès !");
}

