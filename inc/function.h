#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAILLE 500

// #define    pricerange2      0.99
// #define    pricerange3      1.00
// #define    pricerange4      1.04
// #define    pricerange6      1.26
// #define    pricerange8      1.49
// #define    pricerange9      1.5
// #define    pricerange10     1.59
// #define    pricerange11     1.61
// #define    pricerange12     1.70
// #define    pricerange13     1.75
// #define    pricerange14     1.76
// #define    pricerange15     1.96
// #define    pricerange16     1.97
// #define    pricerange17     1.99
// #define    pricerange19     2.49
// #define    pricerange20     2.50
// #define    pricerange21     2.56
// #define    pricerange22     2.59
// #define    pricerange23     2.60
// #define    pricerange24     2.90
// #define    pricerange2      2.95
// #define    pricerange3      2.99
// #define    pricerange4      3.02
// #define    pricerange5      3.04
// #define    pricerange6      3.08
// #define    pricerange7      3.28
// #define    pricerange8      3.49
// #define    pricerange9      3.61
// #define    pricerange10     3.88
// #define    pricerange11     3.90
// #define    pricerange12     3.95
// #define    pricerange13     3.99
// #define    pricerange14     4.29
// #define    pricerange15     4.49
// #define    pricerange16     4.59
// #define    pricerange17     4.60
// #define    pricerange18     4.77
// #define    pricerange19     4.80
// #define    pricerange20     4.84
// #define    pricerange21     4.85
// #define    pricerange22     4.99
// #define    pricerange23     5.00
// #define    pricerange24     5.49
// #define    pricerange10     5.99
// #define    pricerange11     6.49
// #define    pricerange12     6.99
// #define    pricerange13     7.49
// #define    pricerange14     7.99
// #define    pricerange15     8.49
// #define    pricerange16     8.99
// #define    pricerange17     9.00
// #define    pricerange18     9.99
// #define    pricerange19     10.00
// #define    pricerange20     10.99
// #define    pricerange21     11.99
// #define    pricerange22     12.99
// #define    pricerange23     13.99
// #define    pricerange24     14.00
// #define    pricerange19     14.99
// #define    pricerange20     15.49
// #define    pricerange21     15.99
// #define    pricerange22     16.99
// #define    pricerange23     17.99
// #define    pricerange24     18.99
// #define    pricerange10     19.40
// #define    pricerange11     19.90
// #define    pricerange12     19.99
// #define    pricerange13     24.99
// #define    pricerange14     25.99
// #define    pricerange15     28.99
// #define    pricerange16     29.99
// #define    pricerange17     30.99
// #define    pricerange18     33.99
// #define    pricerange19     37.99
// #define    pricerange20     39.99
// #define    pricerange21     46.99
// #define    pricerange22     74.99
// #define    pricerange23     79.99
// #define    pricerange24     89.99
// #define    pricerange13     109.99
// #define    pricerange14     154.99
// #define    pricerange15     200.00
// #define    pricerange16     299.99
// #define    pricerange17     379.99
// #define    pricerange18     389.99
// #define    pricerange19     394.99
// #define    pricerange20     399.99

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

typedef struct tab_graph // New_Store after treatment
{
  float y;
  float x;
} TAB_graph;

typedef struct tab_graphString // New_Store after treatment
{
  char y [1000];
  char x [100000000];
} TAB_graphString;

void fp_OuvertureFichier(FILE **); // Open .txt file
char *choose (int *Selected); // Goal : choose an attribut CL
void partof(APPtype *NewStore,int choix,int NbStructs); // Call choose function; Goal : calculate the percentage of the choosen attribut C
float average(APPtype *Store,int Selected, int i); // Call choose function; Goal : calculate the average. L
float hopedl (FILE*fic); // Call choose function; Goal : calculate the odds to be download. C

APPtype* ResizeStructType(FILE*fic); // Use dynamic memory to stock the struct
APPtxt* ResizeStrucTxt(FILE*fic); // Use dynamic memory to stock the struct
TAB_graph* ResizeStrucGraph(APPtype *Store, FILE* fic); // Use dynamic memory to stock the struct
TAB_graphString* ResizeStrucGraphString(APPtype *Store, FILE* fic);

void Sort_float(APPtype *Store,int NbStructs); // Sort by ascending the Apps
void Txt_to_Struc(FILE* fic, int *i, APPtxt *Store); // Read the .txt file in order to create a struc of it
void RawStructToTypeStruct(APPtxt *Raw_Store, APPtype *New_Store,int NbStructs); // Copy the Raw_Store into the New_Store in a new struct(Char + Float)
int nbdeligne(FILE* fic); // count the number of ligne and so the numbre of App
void printStore(APPtype *Store,int i); // Print all the App
void Correct_Member(APPtxt *Raw_Store,int i); // Delete some part of Category in order to treat the struct easier later.
void menu(FILE* fic,FILE * fic2); // print the menu
void Esperance(APPtype *Store,int NbStructs); // Calcul the "Esperance"

void RawStructToGraph(APPtype *Store, TAB_graph *Graph, int NbStructs);
void SortGraph(TAB_graph *GraphSting, int NbStructs);


void fp_OuvertureFichierCSV(FILE** fp2); // Open the .txt file
void exportGraph (TAB_graph *Graph, int NbStructs, FILE *fic2);
void TAB_graphToTAB_graphString(TAB_graph *Graph, TAB_graphString *GraphSting, int NbStructs);
