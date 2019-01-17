#include "../inc/function.h"

int main(void)
{

  FILE* fic=NULL;
  FILE* fic2=NULL;
  //printf("Start of prog\n");

  fp_OuvertureFichier(&fic); // open file .txt
  fp_OuvertureFichierCSV(&fic2);
  menu(fic,fic2);

  //printf("Fin de prog\n");

  if(fic!=NULL)
  {
    fclose(fic);
    fic=NULL;
  }
  fclose(fic2);
  return 0;
}
