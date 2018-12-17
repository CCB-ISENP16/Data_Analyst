#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAILLE 500

/*
typedef struct date
{
  int Jour;
  int Mois;
  int Annee;
} Date;
*/

typedef struct app
{
  char Name [50];
  char Category [50];
  int Rating;
  int Reviews;
  char Size [20];
  int Installs;
  char Type[50];
  char Price[50];
  char Content_Rating[50];
  char Genres [50];
  char Last_Updated[20];
  char Current_Ver [20];
  char Android_Ver [20];
} APP;

void fp_OuvertureFichier(FILE **);
int choose (char *StrSelect); // Goal : choose an attribut CL
int filter(APP *Store, APP *Store_Filtred);  // Call choose function; sort by an attribut L
float partof(FILE* fic); // Call choose function; Goal : calculate the percentage of the choosen attribut C
float average(FILE* fic); // Call choose function; Goal : calculate the average. L
float hopedl (FILE*fic); // Call choose function; Goal : calculate the odds to be download. C

void Txt_to_Struc(FILE* fic, int *i, APP *Store); // Read the .txt file in order to create a struc of it
int nbdeligne(FILE* fic); // count the number of ligne and so the numbre of App
void printStore(APP *Store,int i); // Print all the App
