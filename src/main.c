#include "../inc/function.h"

void main(void)
{
  int r;
  FILE* fic=NULL;

  fp_OuvertureFichier(&fic);

  //r = partof(fic);
r = filter(fic);
printf ("%d",r);
if(fic!=NULL)
{
  fclose(fic);
  fic=NULL;
}
}
