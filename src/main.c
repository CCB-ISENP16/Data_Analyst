#include "../inc/function.h"

void main(void)
{
  float r;
  APPtxt Store[200];
  //APPtxt Store_Filtred[200];
  int NbStructs = 0;
  int j=0;
  int a;
  int Selected = 0;
  FILE* fic=NULL;
  char *StrSelect[50];

  fp_OuvertureFichier(&fic); // open file .txt

  menu(fic);
  //Txt_to_Struc(fic,&NbStructs,Store);
  //*StrSelect = choose(&Selected);
  //printStore(Store,i);
  //a = filter(Store,Store_Filtred);
  //Correct_Current_Ver(Store,NbStructs);
  //Correct_Rating(Store,NbStructs);
  //average(Store,Selected,NbStructs);
  printf("Fin de programme\n");

  if(fic!=NULL)
  {
    fclose(fic);
    fic=NULL;
  }
}
