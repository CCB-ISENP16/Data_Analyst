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

  float Everyone=0,
  Teen=0,
  Everyone_10=0,
  Mature_17=0,
  Adults_only_18=0;

  float Rating_Of_Everyone=0,
  Rating_Of_Teen=0,
  Rating_Of_Everyone_10=0,
  Rating_Of_Mature_17=0,
  Rating_Of_Adults_only_18=0;

  float ART_AND_DESIGN=0,
  AUTO_AND_VEHICLES=0,
  BEAUTY=0,
  BOOKS_AND_REFERENCE=0,
  BUSINESS=0,
  COMICS=0,
  COMMUNICATION=0,
  DATING=0,
  EDUCATION=0,
  ENTERTAINMENT=0,
  EVENTS=0,
  FINANCE=0,
  FOOD_AND_DRINK=0,
  HEALTH_AND_FITNESS=0,
  HOUSE_AND_HOME=0,
  LIBRARIES_AND_DEMO=0,
  LIFESTYLE=0,
  GAME=0,
  FAMILY=0,
  MEDICAL=0,
  SOCIAL=0,
  SHOPPING=0,
  PHOTOGRAPHY=0,
  SPORTS=0,
  TRAVEL_AND_LOCAL=0,
  TOOLS=0,
  PERSONALIZATION=0,
  PRODUCTIVITY=0,
  PARENTING=0,
  WEATHER=0,
  VIDEO_PLAYERS=0,
  NEWS_AND_MAGAZINES=0,
  MAPS_AND_NAVIGATION=0;

  float Rating_Of_ART_AND_DESIGN=0,
  Rating_Of_AUTO_AND_VEHICLES=0,
  Rating_Of_BEAUTY=0,
  Rating_Of_BOOKS_AND_REFERENCE=0,
  Rating_Of_BUSINESS=0,
  Rating_Of_COMICS=0,
  Rating_Of_COMMUNICATION=0,
  Rating_Of_DATING=0,
  Rating_Of_EDUCATION=0,
  Rating_Of_ENTERTAINMENT=0,
  Rating_Of_EVENTS=0,
  Rating_Of_FINANCE=0,
  Rating_Of_FOOD_AND_DRINK=0,
  Rating_Of_HEALTH_AND_FITNESS=0,
  Rating_Of_HOUSE_AND_HOME=0,
  Rating_Of_LIBRARIES_AND_DEMO=0,
  Rating_Of_LIFESTYLE=0,
  Rating_Of_GAME=0,
  Rating_Of_FAMILY=0,
  Rating_Of_MEDICAL=0,
  Rating_Of_SOCIAL=0,
  Rating_Of_SHOPPING=0,
  Rating_Of_PHOTOGRAPHY=0,
  Rating_Of_SPORTS=0,
  Rating_Of_TRAVEL_AND_LOCAL=0,
  Rating_Of_TOOLS=0,
  Rating_Of_PERSONALIZATION=0,
  Rating_Of_PRODUCTIVITY=0,
  Rating_Of_PARENTING=0,
  Rating_Of_WEATHER=0,
  Rating_Of_VIDEO_PLAYERS=0,
  Rating_Of_NEWS_AND_MAGAZINES=0,
  Rating_Of_MAPS_AND_NAVIGATION=0;

  int i = 0;
  int Rating = 0;
  float floatRating = 0.0;
  char StrParameter[20];
  char Name[20];
  float floatParameter = 0.0;

  //char Category1 [50];

  switch (choix)
  {
    case 1: //Name
    printf("Comming Soon\n");
    /*
    printf("Entrer un parametre :\n");
    scanf("%s",StrParameter);

    for(int j=1;j<NbStructs;j++)
    {
    for(int k=1;k<20;k++)
    {
    strcmp(StrParameter,Name[k]);
  }
  i++;
  //printf("i : %d\n",i); //Only for DEBUG
}
*/
break;

case 2: // Category

printf("NbStructs : %d\n",NbStructs);
for (int j=1;j<NbStructs;j++)
{
  if(strcmp(New_Store[j].Category,"ART_AND_DESIGN") == 0)
  {
    ART_AND_DESIGN=ART_AND_DESIGN + 1.0;
    printf("ART_AND_DESIGN : %.0f\n",ART_AND_DESIGN); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"AUTO_AND_VEHICLES") == 0)
  {
    AUTO_AND_VEHICLES=AUTO_AND_VEHICLES+1;
    printf("AUTO_AND_VEHICLES : %.0f\n",AUTO_AND_VEHICLES); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"BEAUTY") == 0)
  {
    BEAUTY=BEAUTY+1;
    printf("BEAUTY : %.0f\n",BEAUTY); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"BOOKS_AND_REFERENCE") == 0)
  {
    BOOKS_AND_REFERENCE=BOOKS_AND_REFERENCE+1;
    printf("BOOKS_AND_REFERENCE : %.0f\n",BOOKS_AND_REFERENCE); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"BUSINESS") == 0)
  {
    BUSINESS=BUSINESS+1;
    printf("BUSINESS : %.0f\n",BUSINESS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"COMICS") == 0)
  {
    COMICS=COMICS+1;
    printf("COMICS : %.0f\n",COMICS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"COMMUNICATION") == 0)
  {
    COMMUNICATION=COMMUNICATION+1;
    printf("COMMUNICATION : %.0f\n",COMMUNICATION); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"DATING") == 0)
  {
    DATING=DATING+1;
    printf("DATING : %.0f\n",DATING); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"EDUCATION") == 0)
  {
    EDUCATION=EDUCATION+1;
    printf("EDUCATION : %.0f\n",EDUCATION); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"ENTERTAINMENT") == 0)
  {
    ENTERTAINMENT=ENTERTAINMENT+1;
    printf("ENTERTAINMENT : %.0f\n",ENTERTAINMENT); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"EVENTS") == 0)
  {
    EVENTS=EVENTS+1;
    printf("EVENTS : %.0f\n",EVENTS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"FINANCE") == 0)
  {
    FINANCE=FINANCE+1;
    printf("FINANCE : %.0f\n",FINANCE); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"FOOD_AND_DRINK") == 0)
  {
    FOOD_AND_DRINK=FOOD_AND_DRINK+1;
    printf("FOOD_AND_DRINK : %.0f\n",FOOD_AND_DRINK); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"HEALTH_AND_FITNESS") == 0)
  {
    HEALTH_AND_FITNESS=HEALTH_AND_FITNESS+1;
    printf("HEALTH_AND_FITNESS : %.0f\n",HEALTH_AND_FITNESS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"HOUSE_AND_HOME") == 0)
  {
    HOUSE_AND_HOME=HOUSE_AND_HOME+1;
    printf("HEALTH_AND_FITNESS : %.0f\n",HOUSE_AND_HOME); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"LIBRARIES_AND_DEMO") == 0)
  {
    LIBRARIES_AND_DEMO=LIBRARIES_AND_DEMO+1;
    printf("LIBRARIES_AND_DEMO : %.0f\n",LIBRARIES_AND_DEMO); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"LIFESTYLE") == 0)
  {
    LIFESTYLE=LIFESTYLE+1;
    printf("LIFESTYLE : %.0f\n",LIFESTYLE); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"GAME") == 0)
  {
    GAME=GAME+1;
    printf("GAME : %.0f\n",GAME); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"FAMILY") == 0)
  {
    FAMILY=FAMILY+1;
    printf("FAMILY : %.0f\n",FAMILY); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"MEDICAL") == 0)
  {
    MEDICAL=MEDICAL+1;
    printf("MEDICAL : %.0f\n",MEDICAL); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"SOCIAL") == 0)
  {
    SOCIAL=SOCIAL+1;
    printf("SOCIAL : %.0f\n",SOCIAL); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"SHOPPING") == 0)
  {
    SHOPPING=SHOPPING+1;
    printf("SHOPPING : %.0f\n",SHOPPING); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"PHOTOGRAPHY") == 0)
  {
    PHOTOGRAPHY=PHOTOGRAPHY+1;
    printf("PHOTOGRAPHY : %.0f\n",PHOTOGRAPHY); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"SPORTS") == 0)
  {
    SPORTS=SPORTS+1;
    printf("SPORTS : %.0f\n",SPORTS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"TRAVEL_AND_LOCAL") == 0)
  {
    TRAVEL_AND_LOCAL=TRAVEL_AND_LOCAL+1;
    printf("TRAVEL_AND_LOCAL : %.0f\n",TRAVEL_AND_LOCAL); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"TOOLS") == 0)
  {
    TOOLS=TOOLS+1;
    printf("TOOLS : %.0f\n",TOOLS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"PERSONALIZATION") == 0)
  {
    PERSONALIZATION=PERSONALIZATION+1;
    printf("PERSONALIZATION : %.0f\n",PERSONALIZATION); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"PRODUCTIVITY") == 0)
  {
    PRODUCTIVITY=PRODUCTIVITY+1;
    printf("PRODUCTIVITY : %.0f\n",PRODUCTIVITY); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"PARENTING") == 0)
  {
    PARENTING=PARENTING+1;
    printf("PRODUCTIVITY : %.0f\n",PARENTING); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"WEATHER") == 0)
  {
    WEATHER=WEATHER+1;
    printf("WEATHER : %.0f\n",WEATHER); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"VIDEO_PLAYERS") == 0)
  {
    VIDEO_PLAYERS=VIDEO_PLAYERS+1;
    printf("WEATHER : %.0f\n",VIDEO_PLAYERS); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"NEWS_AND_MAGAZINES") == 0)
  {
    NEWS_AND_MAGAZINES=NEWS_AND_MAGAZINES+1;
    printf("NEWS_AND_MAGAZINES : %.0f\n",NEWS_AND_MAGAZINES); //Only for DEBUG
  }

  if(strcmp(New_Store[j].Category,"MAPS_AND_NAVIGATION") == 0)
  {
    MAPS_AND_NAVIGATION=MAPS_AND_NAVIGATION+1;
    printf("MAPS_AND_NAVIGATION : %.0f\n",MAPS_AND_NAVIGATION); //Only for DEBUG
  }
}

Rating_Of_ART_AND_DESIGN = ((ART_AND_DESIGN/(NbStructs-1.0))*100.0); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
Rating_Of_AUTO_AND_VEHICLES = ((AUTO_AND_VEHICLES/(NbStructs-1.0))*100.0);
Rating_Of_BEAUTY = ((BEAUTY/(NbStructs-1.0))*100.0);
Rating_Of_BOOKS_AND_REFERENCE = ((BOOKS_AND_REFERENCE/(NbStructs-1.0))*100.0);
Rating_Of_BUSINESS = ((BUSINESS/(NbStructs-1.0))*100.0);
Rating_Of_COMICS = ((COMICS/(NbStructs-1.0))*100.0);
Rating_Of_COMMUNICATION = ((COMMUNICATION/(NbStructs-1.0))*100.0);
Rating_Of_DATING = ((DATING/(NbStructs-1.0))*100.0);
Rating_Of_EDUCATION = ((EDUCATION/(NbStructs-1.0))*100.0);
Rating_Of_ENTERTAINMENT = ((ENTERTAINMENT/(NbStructs-1.0))*100.0);
Rating_Of_EVENTS = ((EVENTS/(NbStructs-1.0))*100.0);
Rating_Of_FINANCE = ((FINANCE/(NbStructs-1.0))*100.0);
Rating_Of_FOOD_AND_DRINK = ((FOOD_AND_DRINK/(NbStructs-1.0))*100.0);
Rating_Of_HEALTH_AND_FITNESS = ((HEALTH_AND_FITNESS/(NbStructs-1.0))*100.0);
Rating_Of_HOUSE_AND_HOME = ((HOUSE_AND_HOME/(NbStructs-1.0))*100.0);
Rating_Of_LIBRARIES_AND_DEMO = ((LIBRARIES_AND_DEMO/(NbStructs-1.0))*100.0);
Rating_Of_LIFESTYLE = ((LIFESTYLE/(NbStructs-1.0))*100.0);
Rating_Of_GAME = ((GAME/(NbStructs-1.0))*100.0);
Rating_Of_FAMILY = ((FAMILY/(NbStructs-1.0))*100.0);
Rating_Of_MEDICAL = ((MEDICAL/(NbStructs-1.0))*100.0);
Rating_Of_SOCIAL = ((SOCIAL/(NbStructs-1.0))*100.0);
Rating_Of_SHOPPING = ((SHOPPING/(NbStructs-1.0))*100.0);
Rating_Of_PHOTOGRAPHY = ((PHOTOGRAPHY/(NbStructs-1.0))*100.0);
Rating_Of_SPORTS = ((SPORTS/(NbStructs-1.0))*100.0);
Rating_Of_TRAVEL_AND_LOCAL = ((TRAVEL_AND_LOCAL/(NbStructs-1.0))*100.0);
Rating_Of_TOOLS = ((TOOLS/(NbStructs-1.0))*100.0);
Rating_Of_PERSONALIZATION = ((PERSONALIZATION/(NbStructs-1.0))*100.0);
Rating_Of_PRODUCTIVITY = ((PRODUCTIVITY/(NbStructs-1.0))*100.0);
Rating_Of_PARENTING = ((PARENTING/(NbStructs-1.0))*100.0);
Rating_Of_WEATHER = ((WEATHER/(NbStructs-1.0))*100.0);
Rating_Of_VIDEO_PLAYERS = ((VIDEO_PLAYERS/(NbStructs-1.0))*100.0);
Rating_Of_NEWS_AND_MAGAZINES = ((NEWS_AND_MAGAZINES/(NbStructs-1.0))*100.0);
Rating_Of_MAPS_AND_NAVIGATION = ((MAPS_AND_NAVIGATION/(NbStructs-1.0))*100.0); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)


printf("\n\n*** RESULTS ***\n\n");
printf("Rating of ART_AND_DESIGN app 🎨 : %.2f \n",Rating_Of_ART_AND_DESIGN); // Print the results
printf("Rating of AUTO_AND_VEHICLES app 🚗 : %.2f \n",Rating_Of_AUTO_AND_VEHICLES);
printf("Rating of BEAUTY app 💄 : %.2f \n",Rating_Of_BEAUTY);
printf("Rating of BOOKS_AND_REFERENCE app 📕 : %.2f \n",Rating_Of_BOOKS_AND_REFERENCE);
printf("Rating of BUSINESS app 💸 : %.2f \n",Rating_Of_BUSINESS);
printf("Rating of COMICS app : 💬 %.2f \n",Rating_Of_COMICS);
printf("Rating of COMMUNICATION app 🗣 : %.2f \n",Rating_Of_COMMUNICATION);
printf("Rating of DATING app 💑  : %.2f \n",Rating_Of_DATING);
printf("Rating of EDUCATION app 👨 : %.2f \n",Rating_Of_EDUCATION);
printf("Rating of ENTERTAINMENT app ⚽️ : %.2f \n",Rating_Of_ENTERTAINMENT);
printf("Rating of EVENTS app : 📆 %.2f \n",Rating_Of_EVENTS);
printf("Rating of FINANCE app  📈 : %.2f \n",Rating_Of_FINANCE);
printf("Rating of FOOD_AND_DRINK app 🍔 : %.2f \n",Rating_Of_FOOD_AND_DRINK);
printf("Rating of HEALTH_AND_FITNESS app 🍎 : %.2f \n",Rating_Of_HEALTH_AND_FITNESS);
printf("Rating of HOUSE_AND_HOME app 🏠 : %.2f \n",Rating_Of_HOUSE_AND_HOME);
printf("Rating of LIBRARIES_AND_DEMO app 📗 : %.2f \n",Rating_Of_LIBRARIES_AND_DEMO);
printf("Rating of LIFESTYLE app : %.2f \n",Rating_Of_LIFESTYLE);
printf("Rating of GAME app 📺 : %.2f \n",Rating_Of_GAME);
printf("Rating of FAMILY app : %.2f \n",Rating_Of_FAMILY);
printf("Rating of MEDICAL app 🏥 : %.2f \n",Rating_Of_MEDICAL);
printf("Rating of SOCIAL app 👬 : %.2f \n",Rating_Of_SOCIAL);
printf("Rating of SHOPPING app 🛒 : %.2f \n",Rating_Of_SHOPPING);
printf("Rating of PHOTOGRAPHY app  📷  : %.2f \n",Rating_Of_PHOTOGRAPHY);
printf("Rating of SPORTS app 🏀 : %.2f \n",Rating_Of_SPORTS);
printf("Rating of TRAVEL_AND_LOCAL app ✈️ : %.2f \n",Rating_Of_TRAVEL_AND_LOCAL);
printf("Rating of TOOLS app 🔨 : %.2f \n",Rating_Of_TOOLS);
printf("Rating of PERSONALIZATION app ✏️ : %.2f \n",Rating_Of_PERSONALIZATION);
printf("Rating of PRODUCTIVITY app 📋 : %.2f \n",Rating_Of_PRODUCTIVITY);
printf("Rating of PARENTING app : %.2f \n",Rating_Of_PARENTING);
printf("Rating of WEATHER app ⛅️ : %.2f \n",Rating_Of_WEATHER);
printf("Rating of VIDEO_PLAYERS app 🎞 : %.2f \n",Rating_Of_VIDEO_PLAYERS);
printf("Rating of NEWS_AND_MAGAZINES app 📰 : %.2f \n",Rating_Of_NEWS_AND_MAGAZINES);
printf("Rating of MAPS_AND_NAVIGATION app 🧭 : %.2f \n",Rating_Of_MAPS_AND_NAVIGATION); // Print the results

printf("\n***********************\n\n");

printf("End of case 7\n"); // Only for DEBUG
break;

case 3: // Rating

printf("Entrer un parametre :\n");
scanf("%f",&floatParameter); // define a Threshold values

for(int j=1;j<NbStructs;j++) // Treat all the struc
{

  //printf("INSTALL : %f\n",New_Store[j].Installs); // Only for DEBUG
  //printf("INSTALL_HARD : %f\n",floatParameter); // Only for DEBUG

  if(New_Store[j].Rating < floatParameter) // if the current member is lower than the Threshold
  {
    i++; // We increase the counter i
    //printf("i : %d\n",i); //Only for DEBUG
  }
}
floatRating = ((i/(NbStructs-1.0))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
printf("%.2f percent of the app have been Ratied less than %.2f\n",floatRating,floatParameter);
//printf("End of case 3\n");
break;

case 4: // Reviews

printf("Entrer un parametre :\n");
scanf("%f",&floatParameter);

for(int j=1;j<NbStructs;j++)
{

  //printf("INSTALL : %f\n",New_Store[j].Installs); // Only for DEBUG
  //printf("INSTALL_HARD : %f\n",floatParameter); // Only for DEBUG

  if(New_Store[j].Reviews < floatParameter)
  {
    i++;
    //printf("i : %d\n",i); //Only for DEBUG
  }
}
floatRating = ((i/(NbStructs-1.0))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
printf("%.2f percent of the app have been Reviewed less than %.2f\n",floatRating,floatParameter);

break;

case 5: // Size

printf("Entrer un parametre :\n");
scanf("%f",&floatParameter);

for(int j=1;j<NbStructs;j++)
{

  //printf("INSTALL : %f\n",New_Store[j].Installs); // Only for DEBUG
  //printf("INSTALL_HARD : %f\n",floatParameter); // Only for DEBUG

  if(New_Store[j].Size < floatParameter)
  {
    i++;
    //printf("i : %d\n",i); //Only for DEBUG
  }
}
floatRating = ((i/(NbStructs-1.0))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
printf("%.2f percent of the app have a Size lower than %.2f\n",floatRating,floatParameter);

break;

case 6: // Installs
printf("Entrer un parametre :\n");
scanf("%f",&floatParameter);

for(int j=1;j<NbStructs;j++)
{

  //printf("INSTALL : %f\n",New_Store[j].Installs); // Only for DEBUG
  //printf("INSTALL_HARD : %f\n",floatParameter); // Only for DEBUG

  if(New_Store[j].Installs < floatParameter)
  {
    i++;
    //printf("i : %d\n",i); //Only for DEBUG
  }
}
floatRating = ((i/(NbStructs-1.0))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
printf("%.2f percent of the app have been download less than %.2f\n",floatRating,floatParameter);
printf("End of case 6\n");
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

printf("Entrer un parametre :\n");
scanf("%f",&floatParameter);

for(int j=1;j<NbStructs;j++)
{

  //printf("INSTALL : %f\n",New_Store[j].Installs); // Only for DEBUG
  //printf("INSTALL_HARD : %f\n",floatParameter); // Only for DEBUG

  if(New_Store[j].Price < floatParameter)
  {
    i++;
    //printf("i : %d\n",i); //Only for DEBUG
  }
}
floatRating = ((i/(NbStructs-1.0))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
printf("%.2f percent of the app have a Price lower than %.2f\n",floatRating,floatParameter);

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
Rating_Of_Everyone = ((Everyone/(NbStructs-1))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
Rating_Of_Teen = ((Teen/(NbStructs-1))*100);
Rating_Of_Everyone_10 = ((Everyone_10/(NbStructs-1))*100);
Rating_Of_Mature_17 = ((Mature_17/(NbStructs-1))*100);
Rating_Of_Adults_only_18 = ((Adults_only_18/(NbStructs-1))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)

printf("\n\n*** RESULTS ***\n\n");
printf("Rating of Everyone app : %.2f \n",Rating_Of_Everyone);
printf("Rating of Teen app : %.2f \n",Rating_Of_Teen);
printf("Rating of Everyone_10 app : %.2f \n",Rating_Of_Everyone_10);
printf("Rating of Mature_17 app : %.2f \n",Rating_Of_Mature_17);
printf("Rating of Adults_only_18 app : %.2f \n",Adults_only_18);
printf("\n***********************\n\n");

printf("End of case 7\n");
break;

case 10: //Genres
printf("Same as Category, next time type 2 for Category 😛\n");
break;

case 11: //Last_Updated
printf("Comming Soon\n");
break;

case 12: //Current_Ver
printf("Comming Soon\n");
break;

case 13: //Android_Ver
printf("Comming Soon\n");
break;
}
printf("End of partof function\n");
}

char *choose (int *Selected)
{
  static char StrSelect[50];
  do{

    printf("Choisissez un champs(1 a 13):\n1)Name\n2)Category\n3)Rating\n4)Reviews\n5)Size\n6)Installs\n7)Type\n8)Price\n9)Content_Rating\n10)Genres\n11)Last_Updated\n12)Current_Ver\n13)Android_Ver\n");
    scanf("%d",Selected);

    switch (*Selected)
    {
      case 1:
      strcpy(StrSelect,"Name");
      *Selected = 1;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 2:
      strcpy(StrSelect,"Category");
      *Selected = 2;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 3:
      strcpy(StrSelect,"Rating");
      *Selected = 3;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 4:
      strcpy(StrSelect,"Reviews");
      *Selected = 4;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 5:
      strcpy(StrSelect,"Size");
      *Selected = 5;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 6:
      strcpy(StrSelect,"Installs");
      *Selected = 6;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 7:
      strcpy(StrSelect,"Type");
      *Selected = 7;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 8:
      strcpy(StrSelect,"Price");
      *Selected = 8;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 9:
      strcpy(StrSelect,"Content_Rating");
      *Selected = 9;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 10:
      strcpy(StrSelect,"Genres");
      *Selected = 10;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 11:
      strcpy(StrSelect,"Last_Updated");
      *Selected = 11;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 12:
      strcpy(StrSelect,"Current_Ver");
      *Selected = 12;
      //printf("Le filtre est : %s\n",StrSelect);
      return StrSelect;
      break;

      case 13:
      strcpy(StrSelect,"Android_Ver");
      *Selected = 13;
      //printf("Le filtre est : %s\n",StrSelect);
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
    //printf("Star of while loop\n"); // Only for DEBUG

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

    //printf("End of whileloop\n"); // Only for DEBUG
  }
  printf("End of creerUneStructure function\n\n"); //Only for DEBUG
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
    printf("\rPrice of App :           \t\t%.2f\n",Store[j].Price);
    printf("\rContent_Rating of App :  \t\t%s\n",Store[j].Content_Rating);
    printf("\rGenres of App :          \t\t%s\n",Store[j].Genres);
    printf("\rLast_Updated of App :    \t\t%s\n",Store[j].Last_Updated);
    printf("\rCurrent_Ver of App :     \t\t%.2f\n",Store[j].Current_Ver);
    printf("\rAndroid_Ver of App :     \t\t%.2f\n",Store[j].Android_Ver);

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
      // printf("Rating of App n°%d : %.2f\n",j,Store[j].Rating); //Only For DEBUG
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
      // printf("Nb of Reviews of App n°%d : %.2f\n",j,Store[j].Reviews); // Only For DEBUG
    }

    Average = Sum/i;
    printf("The average of Reviews is : %.2f\n",Average);
    //return Average;
    break;

    case 5:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Size);
      // printf("Size of App n°%d : %.0f\n",j,Store[j].Size); // Only For DEBUG
    }

    Average = Sum/i;
    printf("The average of Size is : %.2f octets\n",Average);
    //return Average;
    break;

    case 6:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Installs);
      // printf("Nb of Installs of App n°%d : %.2f\n",j,Store[j].Installs); // Only for DEBUG
    }

    Average = Sum/i;
    printf("The average of Installs is : %.2f\n",Average);
    //return Average;
    break;

    case 8:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Price);
      // printf("Price of App n°%d : %.2f\n",j,Store[j].Price); // Only for DEBUG
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
      //*StrSelect = choose(&choix);
      printf("\n*** Erreur 404 ***\n");
      break;

      case 3:
      *StrSelect = choose(&choix);
      average(New_Store,choix,NbStructs);
      break;

      case 4:
      printf("\n*** Erreur 404 ***\n");
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
  }while(Selected != 6);
}

void Correct_Member(APPtxt *Raw_Store,int i)
{
  printf("Start of Correct_Member function\n"); // Only for DEBUG

  for (int j=1;j<i;j++) // Treat all the structs
  {

    //printf("\n\n***** APP n°%d *****\n\n",j);

    if (strcmp(Raw_Store[j].Rating,"NaN") == 0)
    {
      strcpy(Raw_Store[j].Rating,"0"); // We remplace the current values with 0
      //printf("Rating of App n°%d is forced to : %s\n",j,Raw_Store[j].Rating); // Only for DEBUG
    }
    else if (strcmp(Raw_Store[j].Rating,"NaN") != 0)
    {
      // printf("Rating of App n°%d is : %s\n",j,Raw_Store[j].Rating); // Only for DEBUG
    }


    if (strcmp(Raw_Store[j].Size,"Varies_with_device") == 0)
    {
      strcpy(Raw_Store[j].Size,"0"); // We remplace the current values with 0
      // printf("Size of App n°%d is forced to : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
    }

    else if (strcmp(Raw_Store[j].Size,"Varies_with_device") != 0)
    {
      // printf("Size of App n°%d is : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
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

    strcpy(Raw_Store[j].Size,Size); // Copy the variable de transfere into the struct
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
      // printf("Price of App n°%d is forced to : %s\n",j,Raw_Store[j].Price); // Only for DEBUG
    }
    else if (strcmp(Raw_Store[j].Price,"0") == 0)
    {
      // printf("Price of App n°%d is : %s\n",j,Raw_Store[j].Price); // Only for DEBUG
    }


    if ((strcmp(Raw_Store[j].Current_Ver,"Varies_with_device") == 0 )||(strcmp(Raw_Store[j].Current_Ver,"NaN") == 0))
    {
      strcpy(Raw_Store[j].Current_Ver,"0"); // We remplace the current values with 0
      // printf("Current_Ver of App n°%d is forced to : %s\n",j,Raw_Store[j].Size); // Only for DEBUG
    }

    else if ((strcmp(Raw_Store[j].Current_Ver,"Varies_with_device") != 0 )||(strcmp(Raw_Store[j].Current_Ver,"NaN") != 0))
    {
      // printf("Current_Ver of App n°%d is : %s\n",j,Raw_Store[j].Current_Ver); // Only for DEBUG
    }


    if (strcmp(Raw_Store[j].Android_Ver,"Varies_with_device\n") == 0) // If the member of the struct is "Varies_with_device"
    {
      strcpy(Raw_Store[j].Android_Ver,"0"); // We remplace the current values with 0
      // printf("Android_Ver of App n°%d is forced to : %s\n",j,Raw_Store[j].Android_Ver); // Only for DEBUG
    }

    else if (strcmp(Raw_Store[j].Android_Ver,"Varies_with_device") != 0) // Else we don't change.
    {
      // printf("Android_Ver of App n°%d is : %s\n",j,Raw_Store[j].Android_Ver); // Only for DEBUG
    }

    char Android_Ver[20]; // variable de transfere
    strcpy(Android_Ver,Raw_Store[j].Android_Ver); // Copy the string of the struct into the variable de transfere

    for (int c =0;c<20;c++)
    {
      if(Android_Ver[c] == '_') // if a '_' is detect, we replace it with \0 in order to trim the array
       {
         Android_Ver[c] = '\0';
       }
    }
    strcpy(Raw_Store[j].Android_Ver,Android_Ver); // Copy the variable de transfere into the struct

    printf("%s\n",Raw_Store[j].Android_Ver);
  }
  printf("End of Correct_Member function\n"); // Only for DEBUG
}
