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

typedef struct apptxt // Raw_Store from .txt file (Only char)
{
  char Name[200];
  char Category[100];
  char Rating[50];
  char Reviews[100];
  char Size[100];
  char Installs[100];
  char Type[50];
  char Price[100];
  char Content_Rating[50];
  char Genres[100];
  char Last_Updated[50];
  char Current_Ver[50];
  char Android_Ver[50];
} APPtxt;

typedef struct apptype // New_Store after treatment
{
  char Name[200];
  char Category[100];
  float Rating;
  float Reviews;
  float Size;
  float Installs;
  char Type[50];
  float Price;
  char Content_Rating[50];
  char Genres[100];
  char Last_Updated[50];
  char Current_Ver[50];
  float Android_Ver;
} APPtype;

void fp_OuvertureFichier(FILE **); // Open .txt file
char *choose (int *Selected); // Goal : choose an attribut CL
void partof(APPtype *NewStore,int choix,int NbStructs); // Call choose function; Goal : calculate the percentage of the choosen attribut C
float average(APPtype *Store,int Selected, int i); // Call choose function; Goal : calculate the average. L
float hopedl (FILE*fic); // Call choose function; Goal : calculate the odds to be download. C
APPtype* ResizeStructType(FILE*fic); // Use dynamic memory to stock the struct
APPtxt* ResizeStrucTxt(FILE*fic); // Use dynamic memory to stock the struct
void Sort_float(APPtype *Store,int NbStructs); // Sort by ascending the Apps
void Txt_to_Struc(FILE* fic, int *i, APPtxt *Store); // Read the .txt file in order to create a struc of it
void RawStructToTypeStruct(APPtxt *Raw_Store, APPtype *New_Store,int NbStructs); // Copy the Raw_Store into the New_Store in a new struct(Char + Float)
int nbdeligne(FILE* fic); // count the number of ligne and so the numbre of App
void printStore(APPtype *Store,int i); // Print all the App
void Correct_Member(APPtxt *Raw_Store,int i); // Delete some part of Category in order to treat the struct easier later.
void menu(FILE* fic); // print the menu
void Esperance(APPtype *Store,int NbStructs); // Calcul the "Esperance"
