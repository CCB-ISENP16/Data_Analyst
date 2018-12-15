#include "../inc/function.h"

void main(void)
{
  float r;
  FILE* fic=NULL;

  fp_OuvertureFichier(&fic);

  r = partof(fic);

if(fic!=NULL)
{
  fclose(fic);
  fic=NULL;
}
}
