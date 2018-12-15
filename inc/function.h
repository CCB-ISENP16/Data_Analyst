#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct date
{
  int Jour;
  int Mois;
  int Annee;
} Date;

typedef struct app
{
  char Name [50];
  char Category [50];
  float Rating;
  int Reviews;
  char Size [20];
  int Installs;
  int Type;
  float Price;
  float Content_Rating;
  char Genres [50];
  Date Last_Updated;
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
