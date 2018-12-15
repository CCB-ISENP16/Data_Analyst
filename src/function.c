#include "../inc/function.h"

//fonction d ouverture du fichier
void fp_OuvertureFichier(FILE** fp)
{
  fprintf(stdout,"fp_OuvertureFichier: Begin\n");

  *fp=fopen("data/googleplaystorecrop.txt","r+");
  if(*fp==NULL)
  {
    fprintf(stdout,"Erreur ouverture fichier r+\n");

    *fp=fopen("data/googleplaystorecrop.txt","w+");
    if(*fp==NULL)
    {
      fprintf(stdout,"Erreur ouverture fichier w+. Sortie du programme\n");
      exit(-1);
    }
  }
  fprintf(stdout,"fp_OuvertureFichier: End\n");
};

float partof(FILE *fic)
{

  int choix1,choix2;
  float rate=214.4;


  choix1 = choose();
  choix2 = choose();

  printf("choix1: %d\n",choix1);
  printf("choix2: %d\n",choix2);

  return rate;
};

int choose ()
{

  int Selected;
  do{

    printf("Choisissez un champs(1 a 13):\n1)Name\n2)Category\n3)Rating\n4)Reviews\n5)Size\n6)Installs\n7)Type\n8)Price\n9Content_Rating\n10)Genres\n11)Last_Updated\n12)Current_Ver\n13)Android_Ver\n");
    scanf("%d",&Selected);

    switch (Selected)
    {
      case 1:
      return 1;
      break;

      case 2:
      return 2;
      break;

      case 3:
      return 3;
      break;

      case 4:
      return 4;
      break;

      case 5:
      return 5;
      break;

      case 6:
      return 6;
      break;

      case 7:
      return 7;
      break;

      case 8:
      return 8;
      break;

      case 9:
      return 9;
      break;

      case 10:
      return 10;
      break;

      case 11:
      return 11;
      break;

      case 12:
      return 12;
      break;

      case 13:
      return 13;
      break;

      default:
      printf("\n\nERREUR DE SAISIE\n\n");
      Selected = -1;
      break;
    };

  }while (Selected == -1);
};

int filter(FILE* fic)
{ APP AppFictive [11];
  for (int i = 0 ; i<10; i++)
  {
    AppFictive[i]=creerUneStructure(fic)
  }
  yolo=choose();
  if (yolo==1)
  {
    AppFictive = creerUneStructure(fic);
  }
};

int nbdeligne(FILE*)
{
  int i
  while (fgets(LineBuffer,TAILLELINEBUFFER,fic)!=NULL)
  {i++};
  return i ;
};

APP creerUneStructure(FILE*)
{
  APP AppFictive ;
  int yolo;
  char LineBuffer [TAILLELINEBUFFER];
  char tampon [TAILLELINEBUFFER];
  const char s[2] = ",";
  const char b[2] = "\"";
  char *token;
  while (fgets(LineBuffer,TAILLELINEBUFFER,fic)!=NULL)
  {
    printf ("%s\n",LineBuffer);
    token = strtok(LineBuffer, s);
    strcpy(AppFictive->Name,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Category,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Rating,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Reviews,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Size,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Installs,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Type,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Content_Rating,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Genres,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Last_Updated,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Current_Ver,token);
    token = strtok(NULL, s);
    strcpy(AppFictive->Android_Ver,token);
    token = strtok(NULL, s);
    return AppFictive;
  }
  return AppFictive;
};
