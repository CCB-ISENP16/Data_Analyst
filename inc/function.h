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
  char Rating[50];
  char Reviews[50];
  char Size [20];
  char Installs[50];
  char Type[50];
  char Price[50];
  char Content_Rating[50];
  char Genres [50];
  char Last_Updated[20];
  char Current_Ver [20];
  char Android_Ver [20];
} APP;

void fp_OuvertureFichier(FILE **);
int choose (); // goal : choose an attribut CL
int filter(FILE* fic);  // Call choose function; sort by an attribut L
float partof(FILE* fic); // Call choose function; goal : calculate the percentage of the choosen attribut C
float average(FILE* fic); // Call choose function; goal : calculate the average. L
float hopedl (FILE*fic); // Call choose function; goal : calculate the odds to be download. C
void test (void);
