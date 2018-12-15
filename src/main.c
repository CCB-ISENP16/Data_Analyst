#include "../inc/function.h"

void main(void)
{
  int r;
  FILE* fic=NULL;

  fp_OuvertureFichier(&fic);

  //r = partof(fic);
r = choose();
if(fic!=NULL)
{
  fclose(fic);
  fic=NULL;
}
}
