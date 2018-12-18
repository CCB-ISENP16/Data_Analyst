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
  // const char s0[2] = ",";
  // char *token;
  // char *token_temp;
  // char LineBuffer[TAILLE];
  // int choix1,choix2;
  // float rate = 0;
  //
  // choix1 = choose();
  // choix2 = choose();
  //
  // printf("choix1: %d\n",choix1);
  // printf("choix2: %d\n",choix2);
  //
  // fseek(fic, 0, SEEK_SET);
  //
  // while (fgets(LineBuffer,TAILLE,fic)!=NULL)
  // {
  //   //printf("%s\n",LineBuffer);
  //
  //   /* get the first token */
  //   token = strtok(LineBuffer, s0);
  //
  //   /* walk through other tokens */
  //   while( token != NULL )
  //   {
  //     printf( " %s\n", token );
  //     token = strtok(NULL, s0);
  //   }
  // }
  //
  // return rate;
}

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
}
void ResizeStruct(APP*Store,FILE*fic) // dimension le tableau de structure selon le fichier
{
  int NdDeLigne;
  NbDeLigne=nbdeligne(FILE* fic);
  Store= APP*malloc(NbDeligne*sizeof(APP));
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

void filter (APP*Store,int Selected)
{ int j = nbdeligne(fic);
  if (Selected == 1)
  {
    static int compare_Name (APP const *a, APP const *b)
    {
      /* definir des pointeurs type's et initialise's
        avec les parametres */
        APP const *pa = a;
        APP const *pb = b;

        /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
        return strcmp (pa->Name, pb->Name);
      }
    void qsort (void *Store, size_t j, size_t sizeof APP, compare_Name));
    printStore(Store,j);
  };
  if (Selected == 2)
  {
    static int compare_Category (APP const *a, APP const *b)
    {
      /* definir des pointeurs type's et initialise's
        avec les parametres */
        APP const *pa = a;
        APP const *pb = b;

        /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
        return pa->Category- pb->Category);
            }
    void qsort (void *Store, size_t j, size_t sizeof APP, compare_Category));
    printStore(Store,j);
  };
  if (Selected == 3)
  {
    static int compare_Rating (APP const *a, APP const *b)
    {
      int ret = 0;
   double const *pa = a;
   double const *pb = b;
   double diff = *pa.Rating - *pb.Rating;
   if (diff > 0)
   {
      ret = 1;
   }
   else if (diff < 0)
   {
      ret = -1;
   }
   else
   {
      ret = 0;
   }

   return ret;
}
};
  if (Selected == 4)
  {
    static int compare_Review (APP const *a, APP const *b)
    {
      /* definir des pointeurs type's et initialise's
        avec les parametres */
     int const *pa = a;
     int const *pb = b;

     /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
     return *pa.Reviews - *pb.Reviews;
      }
    void qsort (void *Store, size_t j, size_t sizeof APP, compare_Review));
    printStore(Store,j);
  };
  if (Selected == 5)
  {
    static int compare_Size (APP const *a, APP const *b)
    {
      /* definir des pointeurs type's et initialise's
      avec les parametres */
   int const *pa = a;
   int const *pb = b;

   /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
   return *pa.Size - *pb.Size;
    }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Size));
  printStore(Store,j);
};
if (Selected == 6)
    {
      static int compare_Install (APP const *a, APP const *b)
      {
        /* definir des pointeurs type's et initialise's
        avec les parametres */
     int const *pa = a;
     int const *pb = b;

     /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
     return *pa.Installs - *pb.Installs;
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Install));
  printStore(Store,j);
};
if (Selected == 7)
    {
      static int compare_Type (APP const *a, APP const *b)
      {
        /* definir des pointeurs type's et initialise's
        avec les parametres */
     int const *pa = a;
     int const *pb = b;

     /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
     return *pa.Type - *pb.Type;
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Type));
  printStore(Store,j);
};
if (Selected == 8)
    {
      static int compare_Price (APP const *a, APP const *b)
      {int ret = 0;
   double const *pa = a;
   double const *pb = b;
   double diff = *pa.Price - *pb.Price;
   if (diff > 0)
   {
      ret = 1;
   }
   else if (diff < 0)
   {
      ret = -1;
   }
   else
   {
      ret = 0;
   }

   return ret;
}
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Price));
  printStore(Store,j);
};
if (Selected == 9)
    {
      static int compare_Content_Rating (APP const *a, APP const *b)
      {
        int ret = 0;
     double const *pa = a;
     double const *pb = b;
     double diff = *pa.Rating - *pb.Rating;
     if (diff > 0)
     {
        ret = 1;
     }
     else if (diff < 0)
     {
        ret = -1;
     }
     else
     {
        ret = 0;
     }

     return ret;
  }

  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Content_Rating));
  printStore(Store,j);
};
if (Selected == 10)
    {
      static int compare_Genres (APP const *a, APP const *b)
      {
        /* definir des pointeurs type's et initialise's
          avec les parametres */
          APP const *pa = a;
          APP const *pb = b;

          /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
          return strcmp (pa->Genres, pb->Genres);
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Genres));
  printStore(Store,j);
};
if (Selected == 11)
    {
      static int compare_Last_Updated (APP const *a, APP const *b)
      {
        /* definir des pointeurs type's et initialise's
        avec les parametres */
     int const *pa = a;
     int const *pb = b;

     /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
     return *pa.Last_Updated - *pb.Last_Updated;
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Last_Updated));
  printStore(Store,j);
};
if (Selected == 12)
    {
      static int compare_Current_Ver (APP const *a, APP const *b)
      {
        /* definir des pointeurs type's et initialise's
          avec les parametres */
          APP const *pa = a;
          APP const *pb = b;

          /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
          return strcmp (pa->Current_Ver, pb->Current_Ver);
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Current_Ver));
  printStore(Store,j);
};
if (Selected == 13)
    {
      static int compare_Android_Ver (APP const *a, APP const *b)
      {
        {
          /* definir des pointeurs type's et initialise's
            avec les parametres */
            APP const *pa = a;
            APP const *pb = b;

            /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
            return strcmp (pa->Android_Ver, pb->Android_Ver);
          }
        }
  void qsort (void *Store, size_t j, size_t sizeof APP, compare_Android_Ver));
  printStore(Store,j);
};
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
    printf("\rRating of App :          \t\t%s\n",Store[j].Rating);
    printf("\rReviews of App :         \t\t%s\n",Store[j].Reviews);
    printf("\rSize of App :            \t\t%s\n",Store[j].Size);
    printf("\rNb Installs of App :     \t\t%s\n",Store[j].Installs);
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
