#include "../inc/function.h"

void main(void)
{
  float r;
  APP Store[200];
  APP Store_Filtred[200];
  int i=0;
  int j=0;
  int a;
  FILE* fic=NULL;

  fp_OuvertureFichier(&fic); // open file .txt

  Txt_to_Struc(fic,&i,Store);
  printStore(Store,i);
  a = filter(Store,Store_Filtred);
  printf("Fin de programme\n");

if(fic!=NULL)
{
  fclose(fic);
  fic=NULL;
}
}
