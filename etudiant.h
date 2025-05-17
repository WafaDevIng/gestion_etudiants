#include<stdio.h>
#include<string.h>

#ifndef ETUDIANT_H
#define ETUDIANT_H

typedef struct{
	int id;
	char nom[20];
	char prenom[20];
	float moyenne;
}Etudiant;

#endif