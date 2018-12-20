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


void partof(APPtype *New_Store,int choix,int NbStructs)
{
printf("Start of partof function\n");
  float Everyone=0,Teen=0,Everyone_10=0,Mature_17=0,Adults_only_18=0;
  float Rating_Of_Everyone=0,Rating_Of_Teen=0,Rating_Of_Everyone_10=0,Rating_Of_Mature_17=0,Rating_Of_Adults_only_18=0;
  int i = 0;
  int Rating = 0;

  switch (choix)
  {
    case 1: //Name
    break;

    case 2: // Category
    break;

    case 3: // Rating
    break;

    case 4: // Reviews
    break;

    case 5: // Size
    break;

    case 6: // Installs
    break;

    case 7: // Type
    printf("Start of case 7\n");
    printf("NbStructs : %d\n",NbStructs);
    for (int j=1;j<NbStructs;j++)
    {
      if(strcmp(New_Store[j].Type,"Free") == 0)
      {
        i++;

        //printf("i : %d\n",i); Only for DEBUG
      }
    }
    Rating = ((i/(NbStructs-1))*100);
    printf("Rating of Free app : %d \n",Rating);
    printf("End of case 7\n");
    break;

    case 8 : // Price
    break;

    case 9 : //Content_Rating

    printf("NbStructs : %d\n",NbStructs);
    for (int j=1;j<NbStructs;j++)
    {
      if(strcmp(New_Store[j].Content_Rating,"Everyone") == 0)
      {
        Everyone=Everyone + 1.0;
        printf("Everyone : %.0f\n",Everyone); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Teen") == 0)
      {
        Teen=Teen+1;
        printf("Teen : %.0f\n",Teen); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Everyone_10+") == 0)
      {
        Everyone_10=Everyone_10+1;
        printf("Everyone_10 : %.0f\n",Everyone_10); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Mature_17_+") == 0)
      {
        Mature_17=Mature_17+1;
        printf("Mature_17 : %.0f\n",Mature_17); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Adults_only_18+") == 0)
      {
        Adults_only_18=Adults_only_18+1;
        printf("Adults_only_18 : %.0f\n",Adults_only_18); //Only for DEBUG
      }
    }
    Rating_Of_Everyone = ((Everyone/(NbStructs-1))*100);
    Rating_Of_Teen = ((Teen/(NbStructs-1))*100);
    Rating_Of_Everyone_10 = ((Everyone_10/(NbStructs-1))*100);
    Rating_Of_Mature_17 = ((Mature_17/(NbStructs-1))*100);
    Rating_Of_Adults_only_18 = ((Adults_only_18/(NbStructs-1))*100);

    printf("Rating of Everyone app : %.2f \n",Rating_Of_Everyone);
    printf("Rating of Teen app : %.2f \n",Rating_Of_Teen);
    printf("Rating of Everyone_10 app : %.2f \n",Rating_Of_Everyone_10);
    printf("Rating of Mature_17 app : %.2f \n",Rating_Of_Mature_17);
    printf("Rating of Adults_only_18 app : %.2f \n",Adults_only_18);

    printf("End of case 7\n");
    break;

    case 10: //Genres
    break;

    case 11: //Last_Updated
    break;

    case 12: //Current_Ver
    break;

    case 13: //Android_Ver
    break;
  }
  printf("End of partof function\n");
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

void Txt_to_Struc(FILE* fic, int *i, APPtxt *Store)
{
  char LineBuffer[TAILLE];
  const char s[2] = ",";
  char *token;
  *i = 0;

  printf("Start of creerUneStructure function\n"); // Only for DEBUG

  while (fgets(LineBuffer,TAILLE,fic)!=NULL)
  {
    printf("Star of while loop\n"); // Only for DEBUG

    token = strtok(LineBuffer, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Name,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Category,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Rating,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Reviews,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Size,token); // Copy  the token in the correspondant member of the struct

    token = strtok(NULL, s); // Cut the raw ligne in multiple string placed in "token"
    strcpy(Store[*i].Installs,token); // Copy  the token in the correspondant member of the struct

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

    printf("End of whileloop\n"); // Only for DEBUG
  }
  printf("End of creerUneStructure function\n"); //Only for DEBUG
}

void RawStructToTypeStruct(APPtxt *Raw_Store, APPtype *New_Store,int NbStructs)
{
  for (int j=1;j<NbStructs;j++)
  {
    strcpy(New_Store[j].Name,Raw_Store[j].Name);
    strcpy(New_Store[j].Category,Raw_Store[j].Category);

    New_Store[j].Rating = atof((Raw_Store[j].Rating));
    New_Store[j].Reviews = atof(Raw_Store[j].Reviews);
    New_Store[j].Size = atof(Raw_Store[j].Size);
    New_Store[j].Installs = atof(Raw_Store[j].Installs);

    strcpy(New_Store[j].Type,Raw_Store[j].Type);
    New_Store[j].Price = atof(Raw_Store[j].Price);
    strcpy(New_Store[j].Content_Rating,Raw_Store[j].Content_Rating);
    strcpy(New_Store[j].Genres,Raw_Store[j].Genres);
    strcpy(New_Store[j].Last_Updated,Raw_Store[j].Last_Updated);

    New_Store[j].Current_Ver = atof(Raw_Store[j].Current_Ver);
    New_Store[j].Android_Ver = atof(Raw_Store[j].Android_Ver);
  }
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

void printStore(APPtype *Store,int i)
{
  printf("Start of printStore function\n");

  for(int j=0;j<i;j++)
  {
    printf("\n\n*** App n° %d ***\n\n",j);

    printf("\rName of App :            \t\t%s\n",Store[j].Name);
    printf("\rCategory of App :        \t\t%s\n",Store[j].Category);
    printf("\rRating of App :          \t\t%.2f\n",Store[j].Rating);
    printf("\rReviews of App :         \t\t%.2f\n",Store[j].Reviews);
    printf("\rSize of App :            \t\t%.0f\n",Store[j].Size);
    printf("\rNb Installs of App :     \t\t%.2f\n",Store[j].Installs);
    printf("\rType of App :            \t\t%s\n",Store[j].Type);
    printf("\rPrice of App :           \t\t%2.f\n",Store[j].Price);
    printf("\rContent_Rating of App :  \t\t%s\n",Store[j].Content_Rating);
    printf("\rGenres of App :          \t\t%s\n",Store[j].Genres);
    printf("\rLast_Updated of App :    \t\t%s\n",Store[j].Last_Updated);
    printf("\rCurrent_Ver of App :     \t\t%2.f\n",Store[j].Current_Ver);
    printf("\rAndroid_Ver of App :     \t\t%2.f\n",Store[j].Android_Ver);

    //printf("************************\n");
  }
  printf("End of printStore function\n");
}


void ResizeStruct(APPtxt *Store,FILE*fic) // dimension le tableau de structure selon le fichier
{

  APPtxt *NewStore = NULL;

  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  NewStore=malloc(NbDeLigne*sizeof(APPtxt));
  //printf("taille %d\n", NewStore);
  //pt_nouveau=malloc(i*sizeof(DVD));
}


void filter (APPtxt *Store,int Selected,int j)
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









void average(APPtype *Store,int Selected, int i)
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

    case 5:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Size);
      printf("Size of App n°%d : %.0f\n",j,Store[j].Size); // Only For DEBUG
    }

    Average = Sum/i;
    printf("The average of Size is : %.2f octets\n",Average);
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

    case 8:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Price);
      printf("Price of App n°%d : %.2f\n",j,Store[j].Price); // Only for DEBUG
    }

    Average = Sum/i;
    printf("The average of Price is : %.2f $\n",Average);
    //return Average;
    break;

    default : // If an other values is choosen :
    printf("Le parametre choisie ne permet pas de faire une moyenne 😥\n"); // print a erreur if the member of the struct is not a integer value
  }

  printf("End of Average function\n"); // Only For DEBUG
}


void Correct_Current_Ver(APPtxt *Raw_Store,int i)
{
  printf("Start of Correct_Current_Ver function\n"); // Only for DEBUG

  for (int j=1;j<i;j++) // Treat all the structs
  {
    if (((strcmp("Varies_with_device",Raw_Store[j].Current_Ver))==0) || (strcmp("NaN",Raw_Store[j].Current_Ver))==0) // If the member contain "Varies_with_device" or "NaN" we change it and force it to 0.
    {
      strcpy(Raw_Store[j].Current_Ver,"0"); // We remplace the current values with 0
      printf("Current_Ver of App n°%d is forced to : %s\n",j,Raw_Store[j].Current_Ver); // Only for DEBUG

    }
    else
    printf("Current_Ver of App n°%d is : %s\n",j,Raw_Store[j].Current_Ver); // Only for DEBUG
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
  APPtype New_Store[200];
  APPtxt Raw_Store[200];
  char *StrSelect[50];

  Txt_to_Struc(fic,&NbStructs,Raw_Store);
  Correct_Member(Raw_Store,NbStructs);
  RawStructToTypeStruct(Raw_Store,New_Store,NbStructs);

  do{

    printf("\n\n🤶🎅 Menu Principal 🎅🤶\n\n");

    printf("1) Afficher le PlayStore\n");
    printf("2) Recherche Avancée\n");
    printf("3) Calculer une moyenne\n");
    printf("4) Calculer une esperance\n");
    printf("5) Calculer un pourcentage\n");
    printf("6) Quiter le programme\n\n");

    printf("Votre choix : ");
    scanf("%d",&Selected);

    switch (Selected)
    {
      case 1:
      printStore(New_Store,NbStructs);
      break;

      case 2:
      *StrSelect = choose(&choix);
      break;

      case 3:
      *StrSelect = choose(&choix);
      average(New_Store,choix,NbStructs);
      break;

      case 5:
      *StrSelect = choose(&choix);
      partof(New_Store,choix,NbStructs);
      break;

      case 6:
      printf("\n\n🎉🍾 Joyeuse fete ! 🍾🎉\n");
      break;

      default :
      printf("Erreur de saisie\n");
      break;
    }
  }while(Selected != 5);
}


void Correct_Member(APPtxt *Raw_Store,int i)
{
  printf("Start of Correct_Member function\n"); // Only for DEBUG

  for (int j=1;j<i;j++) // Treat all the structs
  {

    printf("\n\n***** APP n°%d *****\n\n",j);

    if (strcmp(Raw_Store[j].Rating,"NaN") == 0)
    {
      strcpy(Raw_Store[j].Rating,"0"); // We remplace the current values with 0
      printf("Rating of App n°%d is forced to : %s\n",j,Raw_Store[j].Rating); // Only for DEBUG
    }
    else if (strcmp(Raw_Store[j].Rating,"NaN") != 0)
    {
      printf("Rating of App n°%d is : %s\n",j,Raw_Store[j].Rating); // Only for DEBUG
    }


    if (strcmp(Raw_Store[j].Size,"Varies_with_device") == 0)
    {
      strcpy(Raw_Store[j].Size,"0"); // We remplace the current values with 0
      printf("Size of App n°%d is forced to : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
    }

    else if (strcmp(Raw_Store[j].Size,"Varies_with_device") != 0)
    {
      printf("Size of App n°%d is : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
    }

    char Size[20]; // variable de transfere

    strcpy(Size,Raw_Store[j].Size); // Copy the string of the struct into the variable de transfere

    for (int c=0;c<20;c++) // treat all the array
    {
      if(Size[c] == 'M') // if a 'M' is detect, we replace it with 6 '0' for Mega
      {
        Size[c] = '0';
        Size[c+1] = '0';
        Size[c+2] = '0';
        Size[c+3] = '0';
        Size[c+4] = '0';
        Size[c+5] = '0';
        Size[c+6] = '\0';
      }

      if(Size[c] == 'k') // if a 'k' is detect, we replace it with 3 '0' for Kilo
      {
        Size[c] = '0';
        Size[c+1] = '0';
        Size[c+2] = '0';
        Size[c+3] = '\0';
      }

      if(Size[c] == '.') // if a '.' is detect, we delete it in order to have all the values in octets (easier to sort by ascending)
      {
        Size[c] = Size[c+1];
        Size[c+1] = Size[c+2];
        Size[c+2] = Size[c+3];
      }
    }

    strcpy(Raw_Store[j].Size,Size); // Copu the variable de transfere into the struct
    //printf("SIZE : %s\n",Raw_Store[j].Size); Only for DEBUG

    if (strcmp(Raw_Store[j].Price,"0") != 0)
    {
      char Price[10];
      strcpy(Price,Raw_Store[j].Price); // We remplace the current values with 0
      for(int c=0;c<10;c++)
      {
        Price[c] = Price[c+1];
        //printf("%c\n",Price[c]); // Only for DEBUG
      }
      strcpy(Raw_Store[j].Price,Price);
      printf("Price of App n°%d is forced to : %s\n",j,Raw_Store[j].Price); // Only for DEBUG
    }
    else if (strcmp(Raw_Store[j].Price,"0") == 0)
    {
      printf("Price of App n°%d is : %s\n",j,Raw_Store[j].Price); // Only for DEBUG
    }


    if ((strcmp(Raw_Store[j].Current_Ver,"Varies_with_device") == 0 )||(strcmp(Raw_Store[j].Current_Ver,"NaN") == 0))
    {
      strcpy(Raw_Store[j].Current_Ver,"0"); // We remplace the current values with 0
      printf("Current_Ver of App n°%d is forced to : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
    }

    else if ((strcmp(Raw_Store[j].Current_Ver,"Varies_with_device") != 0 )||(strcmp(Raw_Store[j].Current_Ver,"NaN") != 0))
    {
      printf("Current_Ver of App n°%d is : %s\n",j,Raw_Store[j].Current_Ver); // Only for DEBUG
    }


    if (strcmp(Raw_Store[j].Android_Ver,"Varies_with_device\n") == 0) // If the member of the struct is "Varies_with_device"
    {
      strcpy(Raw_Store[j].Android_Ver,"0"); // We remplace the current values with 0
      printf("Android_Ver of App n°%d is forced to : %s\n",j,Raw_Store[j].Android_Ver); // Only for DEBUG
    }

    else if (strcmp(Raw_Store[j].Android_Ver,"Varies_with_device") != 0) // Else we don't change.
    {
      printf("Android_Ver of App n°%d is : %s\n",j,Raw_Store[j].Android_Ver); // Only for DEBUG
    }

  }
  printf("End of Correct_Member function\n"); // Only for DEBUG
}
