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
  fprintf(stdout,"fp_OuvertureFichier: End\n\n");
}


float partof(FILE *fic)
{

  int choix1 = 0,choix2 = 0;
  char StrSelect1[50],StrSelect2[50];
  float rate = 0;

  //choix1 = choose(StrSelect1);
  //choix2 = choose(StrSelect2);

  printf("choix1: %d\n",choix1);
  printf("choix2: %d\n",choix2);

  return rate;
}

char *choose (int *Selected)
{
  static char StrSelect[50];
  do{

    printf("Choisissez un champs(1 a 13):\n1)Name\n2)Category\n3)Rating\n4)Reviews\n5)Size\n6)Installs\n7)Type\n8)Price\n9Content_Rating\n10)Genres\n11)Last_Updated\n12)Current_Ver\n13)Android_Ver\n");
    scanf("%d",Selected);

    switch (*Selected)
    {
      case 1:
      strcpy(StrSelect,"Name");
      *Selected = 1;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 2:
      strcpy(StrSelect,"Category");
      *Selected = 2;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 3:
      strcpy(StrSelect,"Rating");
      *Selected = 3;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 4:
      strcpy(StrSelect,"Reviews");
      *Selected = 4;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 5:
      strcpy(StrSelect,"Size");
      *Selected = 5;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 6:
      strcpy(StrSelect,"Installs");
      *Selected = 6;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 7:
      strcpy(StrSelect,"Type");
      *Selected = 7;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 8:
      strcpy(StrSelect,"Price");
      *Selected = 8;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 9:
      strcpy(StrSelect,"Content_Rating");
      *Selected = 9;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 10:
      strcpy(StrSelect,"Genres");
      *Selected = 10;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 11:
      strcpy(StrSelect,"Last_Updated");
      *Selected = 11;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 12:
      strcpy(StrSelect,"Current_Ver");
      *Selected = 12;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 13:
      strcpy(StrSelect,"Android_Ver");
      *Selected = 13;
      printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      default:
      printf("\n\nERREUR DE SAISIE\n\n");
      *Selected = -1;
      break;
    }

  }while (*Selected == -1);
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
    //printf("Star of while loop\n"); // Only for DEBUG
    //printf("i : %d\n",*i); // Only for DEBUG

    token = strtok(LineBuffer, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Name,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Category,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    Store[*i].Rating = atof(token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    Store[*i].Reviews = atof(token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Size,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    Store[*i].Installs = atof(token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Type,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Price,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Content_Rating,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Genres,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Last_Updated,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Current_Ver,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Android_Ver,token); // Copy  the token in the correspondant member of the struct

    *i = *i+1; // Just a counter in place each member in each struct

    //printf("End of whileloop\n"); // Only for DEBUG
  }
  printf("End of creerUneStructure function\n"); //Only for DEBUG
}


int nbdeligne(FILE* fic)
{
  int i=0;
  char LineBuffer[TAILLE];

  while (fgets(LineBuffer,TAILLE,fic)!=NULL) // Read the all the file until NULL
  {
    i++; // at the end of each line, we increase the counter in order to known the number of App
  }
  return i;
};

void printStore(APP *Store,int i)
{
  printf("Start of printStore function\n");

  for(int j=0;j<i;j++)
  {
    printf("*** App n° %d ***\n",j);

    printf("\rName of App :            \t\t%s\n",Store[j].Name);
    printf("\rCategory of App :        \t\t%s\n",Store[j].Category);
    printf("\rRating of App :          \t\t%.2f\n",Store[j].Rating);
    printf("\rReviews of App :         \t\t%.2f\n",Store[j].Reviews);
    printf("\rSize of App :            \t\t%s\n",Store[j].Size);
    printf("\rNb Installs of App :     \t\t%.2f\n",Store[j].Installs);
    printf("\rType of App :            \t\t%s\n",Store[j].Type);
    printf("\rPrice of App :           \t\t%s\n",Store[j].Price);
    printf("\rContent_Rating of App :  \t\t%s\n",Store[j].Content_Rating);
    printf("\rGenres of App :          \t\t%s\n",Store[j].Genres);
    printf("\rLast_Updated of App :    \t\t%s\n",Store[j].Last_Updated);
    printf("\rCurrent_Ver of App :     \t\t%s\n",Store[j].Current_Ver);
    printf("\rAndroid_Ver of App :     \t\t%s\n",Store[j].Android_Ver);

    printf("************************\n");
  }
  printf("End of printStore function\n");
}


void ResizeStruct(APP*Store,FILE*fic) // dimension le tableau de structure selon le fichier
{

  APP *NewStore = NULL;

  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  NewStore=malloc(NbDeLigne*sizeof(APP));
  //printf("taille %d\n", NewStore);
  //pt_nouveau=malloc(i*sizeof(DVD));
}


void filter (APP*Store,int Selected,int j)
 {
//   if (Selected == 1)
//   {
//     void qsort (void *Store, size_t j, size_t sizeof (APP), compare_Name));
//     static int compare_Name (const APP *a,const APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       APP const *pa = a;
//       APP const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return strcmp (pa->Name, pb->Name);
//     }
//     //void qsort (void *Store, size_t j, size_t sizeof APP, compare_Name));
//     printStore(Store,j);
//   };
//   if (Selected == 2)
//   {
//     static int compare_Category (const APP  *a, const APP  *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       APP const *pa = a;
//       APP const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return pa->Category- pb->Category;
//     }
//     qsort (Store,j,sizeof(APP),compare_Category);
//     printStore(Store,j);
//   };
//   if (Selected == 3)
//   {
//     static int compare_Rating (const APP const *a, const APP *b)
//     {
//       int ret = 0;
//       double const *pa = a;
//       double const *pb = b;
//       double diff = *pa.Rating - *pb.Rating;
//       if (diff > 0)
//       {
//         ret = 1;
//       }
//       else if (diff < 0)
//       {
//         ret = -1;
//       }
//       else
//       {
//         ret = 0;
//       }
//
//       return ret;
//     }
//   };
//   if (Selected == 4)
//   {
//     static int compare_Review (const APP *a, const APP  *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       int const *pa = a;
//       int const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return *pa.Reviews - *pb.Reviews;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Review));
//     printStore(Store,j);
//   };
//   if (Selected == 5)
//   {
//     static int compare_Size (const APP const *a, APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       int const *pa = a;
//       int const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return *pa.Size - *pb.Size;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Size));
//     printStore(Store,j);
//   };
//   if (Selected == 6)
//   {
//     static int compare_Install (const APP *a, const APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       int const *pa = a;
//       int const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return *pa.Installs - *pb.Installs;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Install));
//     printStore(Store,j);
//   };
//   if (Selected == 7)
//   {
//     static int compare_Type (const APP *a, const APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       int const *pa = a;
//       int const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return *pa.Type - *pb.Type;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Type));
//     printStore(Store,j);
//   };
//   if (Selected == 8)
//   {
//     static int compare_Price (const APP *a,const  APP *b)
//     {int ret = 0;
//       double const *pa = a;
//       double const *pb = b;
//       double diff = *pa.Price - *pb.Price;
//       if (diff > 0)
//       {
//         ret = 1;
//       }
//       else if (diff < 0)
//       {
//         ret = -1;
//       }
//       else
//       {
//         ret = 0;
//       }
//
//       return ret;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Price));
//     printStore(Store,j);
//   };
//   if (Selected == 9)
//   {
//     static int compare_Content_Rating (const APP *a, const APP *b)
//     {
//       int ret = 0;
//       double const *pa = a;
//       double const *pb = b;
//       double diff = *pa.Rating - *pb.Rating;
//       if (diff > 0)
//       {
//         ret = 1;
//       }
//       else if (diff < 0)
//       {
//         ret = -1;
//       }
//       else
//       {
//         ret = 0;
//       }
//
//       return ret;
//     }
//
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Content_Rating));
//     printStore(Store,j);
//   };
//   if (Selected == 10)
//   {
//     static int compare_Genres (const APP *a,const  APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       APP const *pa = a;
//       APP const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return strcmp (pa->Genres, pb->Genres);
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Genres));
//     printStore(Store,j);
//   };
//   if (Selected == 11)
//   {
//     static int compare_Last_Updated (const APP *a,const  APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       int const *pa = a;
//       int const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return *pa.Last_Updated - *pb.Last_Updated;
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Last_Updated));
//     printStore(Store,j);
//   };
//   if (Selected == 12)
//   {
//     static int compare_Current_Ver (const APP *a,const  APP *b)
//     {
//       /* definir des pointeurs type's et initialise's
//       avec les parametres */
//       APP const *pa = a;
//       APP const *pb = b;
//
//       /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//       return strcmp (pa->Current_Ver, pb->Current_Ver);
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Current_Ver));
//     printStore(Store,j);
//   };
//   if (Selected == 13)
//   {
//     static int compare_Android_Ver (const APP *a,const  APP *b)
//     {
//       {
//         /* definir des pointeurs type's et initialise's
//         avec les parametres */
//         APP const *pa = a;
//         APP const *pb = b;
//
//         /* evaluer et retourner l'etat de l'evaluation (tri croissant) */
//         return strcmp (pa->Android_Ver, pb->Android_Ver);
//       }
//     }
//     void qsort (void *Store, size_t j, size_t sizeof APP, compare_Android_Ver));
//     printStore(Store,j);
//   };
}









void average(APP *Store,int Selected, int i)
{
  printf("Start of Average function\n"); // Only For DEBUG

  float Average = 0; //
  float Sum = 0;

  switch (Selected)
  {
    case 3:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Rating);
      //printf("Sum : %.2f\n",Sum);
      printf("Rating of App n°%d : %.2f\n",j,Store[j].Rating); //Only For DEBUG
    }
//printf("i : %d\n",i);

    Average = Sum/i;
    printf("The average of Rating is : %.2f\n",Average);
    //return Average;
    break;

    case 4:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Reviews);
      printf("Nb of Reviews of App n°%d : %.2f\n",j,Store[j].Reviews); // Only For DEBUG
    }

    Average = Sum/i;
    printf("The average of Reviews is : %.2f\n",Average);
    //return Average;
    break;

    case 6:
    for (int j=0;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Installs);
      printf("Nb of Installs of App n°%d : %.2f\n",j,Store[j].Installs); // Only for DEBUG
    }

    Average = Sum/i;
    printf("The average of Installs is : %.2f\n",Average);
    //return Average;
    break;

    default : // If an other values is choosen :
    printf("Le parametre choisie ne permet pas de faire une moyenne 😥\n"); // print a erreur if the member of the struct is not a integer value
  }

  printf("End of Average function\n"); // Only For DEBUG
}


void Correct_Current_Ver(APP *Store,int i)
{
  printf("Start of Correct_Current_Ver function\n"); // Only for DEBUG

  for (int j=1;j<i;j++) // Treat all the structs
  {
    if (((strcmp("Varies_with_device",Store[j].Current_Ver))==0) || (strcmp("NaN",Store[j].Current_Ver))==0) // If the member contain "Varies_with_device" or "NaN" we change it and force it to 0.
    {
      strcpy(Store[j].Current_Ver,"0"); // We remplace the current values with 0
      printf("Current_Ver of App n°%d is forced to : %s\n",j,Store[j].Current_Ver); // Only for DEBUG

    }
    else
      printf("Current_Ver of App n°%d is : %s\n",j,Store[j].Current_Ver); // Only for DEBUG
  }
  printf("End of Correct_Current_Ver function\n"); // Only for DEBUG
}

// void Correct_Rating(APP *Store,int i)
// {
//   printf("Start of Correct_Rating function\n"); // Only for DEBUG
//
//   for (int j=1;j<i;j++) // Treat all the structs
//   {
//     if (strcmp("NaN",Store[j].Rating)==0) // If the member contain "Varies_with_device" or "NaN" we change it and force it to 0.
//     {
//       Store[j].Current_Ver = 0.0; // We remplace the current values with 0
//       printf("Rating of App n°%d is forced to : %.2f\n",j,Store[j].Rating); // Only for DEBUG
//
//     }
//     else
//       printf("Rating of App n°%d is : %.2f\n",j,Store[j].Rating); // Only for DEBUG
//   }
//   printf("End of Correct_Rating function\n"); // Only for DEBUG
// }


char *Paramete_Of_Name()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Nom d'une App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Category()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Nom d'une Category): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
int Paramete_Of_Rating()
{
  int SearchParameter;
  printf("Entrer un parametre de recherche (Note): \n");
  scanf("%d\n",&SearchParameter);
  return SearchParameter;
}
int Paramete_Of_Reviews()
{
  int SearchParameter;
  printf("Entrer un parametre de recherche (Nb de Reviews): \n");
  scanf("%d\n",&SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Size()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Taille de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
int Paramete_Of_Installs()
{
  int SearchParameter;
  printf("Entrer un parametre de recherche (Nb d'Installs): \n");
  scanf("%d\n",&SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Type()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Type d'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Price()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Prix de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Content_Rating()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Content_Rating): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Genres()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Genres de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Last_Updated()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Last_Updated de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Current_Ver()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Current_Ver de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}
char *Paramete_Of_Android_Ver()
{
  static char SearchParameter[50];
  printf("Entrer un parametre de recherche (Android_Ver de l'App): \n");
  scanf("%s\n",SearchParameter);
  return SearchParameter;
}

void menu(FILE* fic)
{

  int Selected = 0,NbStructs = 0,choix = 0;
  APP Store[200];
  char *StrSelect[50];

  Txt_to_Struc(fic,&NbStructs,Store);

do{

  printf("\n\n🤶🎅 Menu Principal 🎅🤶\n\n");

  printf("1) Afficher le PlayStore\n");
  printf("2) Recherche Avancée\n");
  printf("3) Calculer une moyenne\n");
  printf("4) Calculer une esperance\n");
  printf("5) Quiter le programme\n\n");

  printf("Votre choix : ");
  scanf("%d",&Selected);

  //Txt_to_Struc(fic,&NbStructs,Store);

  switch (Selected)
  {
    case 1:
    printStore(Store,NbStructs);
    break;

    case 3:
    *StrSelect = choose(&choix);
    average(Store,choix,NbStructs);
    break;

    case 5:
    printf("\n\n🎉🍾 Joyeuse fete ! 🍾🎉\n");
    break;

    default :
    printf("Erreur de saisie\n");
    break;
  }
}while(Selected != 5);
}
