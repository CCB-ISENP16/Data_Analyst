#include "../inc/function.h"

int main(void)
{

  FILE* fic=NULL;

  //printf("Start of prog\n");

  fp_OuvertureFichier(&fic); // open file .txt

  menu(fic);

  //printf("Fin de prog\n");

  if(fic!=NULL)
  {
    fclose(fic);
    fic=NULL;
  }

  return 0;
}
