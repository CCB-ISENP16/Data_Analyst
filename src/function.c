#include "../inc/function.h"

//fonction d ouverture du fichier
void fp_OuvertureFichier(FILE** fp)
{
  fprintf(stdout,"fp_OuvertureFichier: Begin\n");

  *fp=fopen("data/data.txt","r+"); // open in read+ (Open for reading and writing)
  if(*fp==NULL)
  {
    fprintf(stdout,"Erreur ouverture fichier r+\n"); // if the opening in r+ failed

    *fp=fopen("data/data.txt","w+"); // open the file in w+ in order to create it if it does not exist WARNING in this mode the cursor is placed at the end of the file.
    if(*fp==NULL)
    {
      fprintf(stdout,"Erreur ouverture fichier w+. Sortie du programme\n"); // if the opening fail again we stop the programme
      exit(-1);
    }
  }
  fprintf(stdout,"fp_OuvertureFichier: End\n");
}


float partof(FILE *fic)
{

  int choix1 = 0,choix2 = 0;
  char StrSelect1[50],StrSelect2[50];
  float rate = 0;

  choix1 = choose(StrSelect1);
  choix2 = choose(StrSelect2);

  printf("choix1: %d\n",choix1);
  printf("choix2: %d\n",choix2);

  return rate;
}

int choose (char *StrSelect)
{

  int Selected;
  do{

    printf("Choisissez un champs(1 a 13):\n1)Name\n2)Category\n3)Rating\n4)Reviews\n5)Size\n6)Installs\n7)Type\n8)Price\n9Content_Rating\n10)Genres\n11)Last_Updated\n12)Current_Ver\n13)Android_Ver\n");
    scanf("%d",&Selected);

    switch (Selected)
    {
      case 1:
      StrSelect = "Name";
      printf("Le filtre est : %s\n",StrSelect);
      return 1;
      break;

      case 2:
      StrSelect = "Category";
      printf("Le filtre est : %s\n",StrSelect);
      return 2;
      break;

      case 3:
      StrSelect = "Rating";
      printf("Le filtre est : %s\n",StrSelect);
      return 3;
      break;

      case 4:
      StrSelect = "Reviews";
      printf("Le filtre est : %s\n",StrSelect);
      return 4;
      break;

      case 5:
      StrSelect = "Size";
      printf("Le filtre est : %s\n",StrSelect);
      return 5;
      break;

      case 6:
      StrSelect = "Installs";
      printf("Le filtre est : %s\n",StrSelect);
      return 6;
      break;

      case 7:
      StrSelect = "Type";
      printf("Le filtre est : %s\n",StrSelect);
      return 7;
      break;

      case 8:
      StrSelect = "Price";
      printf("Le filtre est : %s\n",StrSelect);
      return 8;
      break;

      case 9:
      StrSelect = "Content_Rating";
      printf("Le filtre est : %s\n",StrSelect);
      return 9;
      break;

      case 10:
      StrSelect = "Genres";
      printf("Le filtre est : %s\n",StrSelect);
      return 10;
      break;

      case 11:
      StrSelect = "Last_Updated";
      printf("Le filtre est : %s\n",StrSelect);
      return 11;
      break;

      case 12:
      StrSelect = "Current_Ver";
      printf("Le filtre est : %s\n",StrSelect);
      return 12;
      break;

      case 13:
      StrSelect = "Android_Ver";
      printf("Le filtre est : %s\n",StrSelect);
      return 13;
      break;

      default:
      printf("\n\nERREUR DE SAISIE\n\n");
      Selected = -1;
      break;
    }

  }while (Selected == -1);
}

void Txt_to_Struc(FILE* fic, int *i, APP *Store)
{
  char LineBuffer[TAILLE];
  const char s[2] = ",";
  char *token;
  *i = 0;

  printf("Start of creerUneStructure function\n"); // Only for DEBUG

  while (fgets(LineBuffer,TAILLE,fic)!=NULL)
  {
    printf("Star of while loop\n"); // Only for DEBUG
    printf("i : %d\n",*i); // Only for DEBUG

    token = strtok(LineBuffer, s);
    strcpy(Store[*i].Name,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Category,token);

    token = strtok(NULL, s);
    Store[*i].Rating = atoi(token);

    token = strtok(NULL, s);
    Store[*i].Reviews = atoi(token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Size,token);

    token = strtok(NULL, s);
    Store[*i].Installs = atoi(token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Type,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Price,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Content_Rating,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Genres,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Last_Updated,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Current_Ver,token);

    token = strtok(NULL, s);
    strcpy(Store[*i].Android_Ver,token);

    token = strtok(NULL, s);
    *i = *i+1;

    printf("End of whileloop\n"); // Only for DEBUG
  }
  printf("End of creerUneStructure function\n"); //Only for DEBUG
}


int nbdeligne(FILE* fic)
{
  int i=0;
  char LineBuffer[TAILLE];
  while (fgets(LineBuffer,TAILLE,fic)!=NULL)
  {
    i++;
  }
  return i;
};

void printStore(APP *Store,int i)
{

  for(int j=0;j<i;j++)
  {
    printf("*** App n° %d ***\n",j);

    printf("\rName of App :            \t\t%s\n",Store[j].Name);
    printf("\rCategory of App :        \t\t%s\n",Store[j].Category);
    printf("\rRating of App :          \t\t%d\n",Store[j].Rating);
    printf("\rReviews of App :         \t\t%d\n",Store[j].Reviews);
    printf("\rSize of App :            \t\t%s\n",Store[j].Size);
    printf("\rNb Installs of App :     \t\t%d\n",Store[j].Installs);
    printf("\rType of App :            \t\t%s\n",Store[j].Type);
    printf("\rPrice of App :           \t\t%s\n",Store[j].Price);
    printf("\rContent_Rating of App :  \t\t%s\n",Store[j].Content_Rating);
    printf("\rGenres of App :          \t\t%s\n",Store[j].Genres);
    printf("\rLast_Updated of App :    \t\t%s\n",Store[j].Last_Updated);
    printf("\rCurrent_Ver of App :     \t\t%s\n",Store[j].Current_Ver);
    printf("\rAndroid_Ver of App :     \t\t%s\n",Store[j].Android_Ver);

    printf("************************\n");
  }
}

int filter(APP *Store, APP *Store_Filtred)
{
  int choix = 0 ;
  char StrSelect[50] = "Blabla";

  choix = choose(StrSelect);

  printf("Filter choosen : %s\n",StrSelect);

  }
