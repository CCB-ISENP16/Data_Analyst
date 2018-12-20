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

typedef struct apptxt
{
  char Name[50];
  char Category[50];
  char Rating[50];
  char Reviews[50];
  char Size[50];
  char Installs[50];
  char Type[50];
  char Price[50];
  char Content_Rating[50];
  char Genres[50];
  char Last_Updated[50];
  char Current_Ver[50];
  char Android_Ver[50];
} APPtxt;

typedef struct apptype
{
  char Name[50];
  char Category[50];
  float Rating;
  float Reviews;
  float Size;
  float Installs;
  char Type[50];
  float Price;
  char Content_Rating[50];
  char Genres[50];
  char Last_Updated[50];
  char Current_Ver[50];
  float Android_Ver;
} APPtype;

void fp_OuvertureFichier(FILE **);
char *choose (int *Selected); // Goal : choose an attribut CL
void filter (APPtxt*Store,int Selected,int j);  // Call choose function; sort by an attribut L
void partof(APPtype *NewStore,int choix,int NbStructs); // Call choose function; Goal : calculate the percentage of the choosen attribut C
void average(APPtype *Store,int Selected, int i); // Call choose function; Goal : calculate the average. L
float hopedl (FILE*fic); // Call choose function; Goal : calculate the odds to be download. C

void Txt_to_Struc(FILE* fic, int *i, APPtxt *Store); // Read the .txt file in order to create a struc of it
void RawStructToTypeStruct(APPtxt *Raw_Store, APPtype *New_Store,int NbStructs);
int nbdeligne(FILE* fic); // count the number of ligne and so the numbre of App
void printStore(APPtype *Store,int i); // Print all the App
void Correct_Member(APPtxt *Raw_Store,int i);
void menu(FILE* fic);
