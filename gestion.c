#include<stdio.h>
#include "etudiant.h"
void ajouterEtudiant(Etudiant *liste,int *nb){
	printf("ID: ");
	scanf("%d",&liste[*nb].id);
	printf("Nom: ");
	scanf("%s",&liste[*nb].nom);
	printf("Prenom: ");
	scanf("%s",&liste[*nb].prenom);
	printf("Moyenne: ");
	scanf("%f",&liste[*nb].moyenne);
	(*nb)++;
}