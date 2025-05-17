#include<stdio.h>
#include "etudiant.h"

extern void ajouterEtudiant(Etudiant *liste, int *nb);

int main(){
	Etudiant liste[100];
	int nb=0;
	
	ajouterEtudiant(liste,&nb);
	printf("etudiant ajoute:%s %s (ID:%d)\n",liste[0].id,liste[0].nom,liste[0].prenom);
}