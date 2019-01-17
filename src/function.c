#include "../inc/function.h"

void fp_OuvertureFichier(FILE** fp) // Open the .txt file
{
  fprintf(stdout,"fp_OuvertureFichier: Begin\n");

  *fp=fopen("data/googleplaystore.txt","r+"); // open in read+ (Open for reading and writing)
  if(*fp==NULL)
  {
    fprintf(stdout,"Erreur ouverture fichier r+\n"); // if the opening in r+ failed

    *fp=fopen("data/googleplaystore.txt","w+"); // open the file in w+ in order to create it if it does not exist WARNING in this mode the cursor is placed at the end of the file.
    if(*fp==NULL)
    {
      fprintf(stdout,"Erreur ouverture fichier w+. Sortie du programme\n"); // if the opening fail again we stop the programme
      exit(-1);
    }
  }
  fprintf(stdout,"fp_OuvertureFichier: End\n\n");
}

void partof(APPtype *New_Store,int choix,int NbStructs) // Calcul the % of something
{
  //printf("Start of partof function\n");

  float Everyone=0.0,
  Teen=0.0,
  Everyone_10=0.0,
  Mature_17=0.0,
  Adults_only_18=0.0;

  float Rating_Of_Everyone=0.0,
  Rating_Of_Teen=0.0,
  Rating_Of_Everyone_10=0.0,
  Rating_Of_Mature_17=0.0,
  Rating_Of_Adults_only_18=0.0;

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
  float floatRating = 0.0;
  //char StrParameter[50];
  //char Name[20];
  float floatParameter = 0.0;

  //char Category1 [50];

  switch (choix)
  {
    // case 1: //Name
    // printf("Comming Soon\n");
    //
    // printf("Entrer un parametre :\n");
    // scanf("%s",StrParameter);
    //
    // for(int j=1;j<NbStructs;j++)
    // {
    //   for(int k=1;k<20;k++)
    //   {
    //     if(strcmp(StrParameter,New_Store[j])==0)
    //     {
    //       i++;
    //     }
    //   }
    // }
    // floatRating = ((i/NbStructs-1.0)*100);
    // printf("%.2f %c of app have %s in their Name\n",floatRating,37,Name);
    // break;

    case 2: // Category

    //printf("NbStructs : %d\n",NbStructs);
    for (int j=1;j<NbStructs;j++)
    {
      if(strcmp(New_Store[j].Category,"ART_AND_DESIGN") == 0)
      {
        ART_AND_DESIGN=ART_AND_DESIGN + 1.0;
        //printf("ART_AND_DESIGN : %.0f\n",ART_AND_DESIGN); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"AUTO_AND_VEHICLES") == 0)
      {
        AUTO_AND_VEHICLES=AUTO_AND_VEHICLES+1;
        // printf("AUTO_AND_VEHICLES : %.0f\n",AUTO_AND_VEHICLES); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"BEAUTY") == 0)
      {
        BEAUTY=BEAUTY+1;
        // printf("BEAUTY : %.0f\n",BEAUTY); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"BOOKS_AND_REFERENCE") == 0)
      {
        BOOKS_AND_REFERENCE=BOOKS_AND_REFERENCE+1;
        // printf("BOOKS_AND_REFERENCE : %.0f\n",BOOKS_AND_REFERENCE); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"BUSINESS") == 0)
      {
        BUSINESS=BUSINESS+1;
        // printf("BUSINESS : %.0f\n",BUSINESS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"COMICS") == 0)
      {
        COMICS=COMICS+1;
        // printf("COMICS : %.0f\n",COMICS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"COMMUNICATION") == 0)
      {
        COMMUNICATION=COMMUNICATION+1;
        // printf("COMMUNICATION : %.0f\n",COMMUNICATION); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"DATING") == 0)
      {
        DATING=DATING+1;
        // printf("DATING : %.0f\n",DATING); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"EDUCATION") == 0)
      {
        EDUCATION=EDUCATION+1;
        // printf("EDUCATION : %.0f\n",EDUCATION); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"ENTERTAINMENT") == 0)
      {
        ENTERTAINMENT=ENTERTAINMENT+1;
        // printf("ENTERTAINMENT : %.0f\n",ENTERTAINMENT); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"EVENTS") == 0)
      {
        EVENTS=EVENTS+1;
        // printf("EVENTS : %.0f\n",EVENTS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"FINANCE") == 0)
      {
        FINANCE=FINANCE+1;
        // printf("FINANCE : %.0f\n",FINANCE); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"FOOD_AND_DRINK") == 0)
      {
        FOOD_AND_DRINK=FOOD_AND_DRINK+1;
        // printf("FOOD_AND_DRINK : %.0f\n",FOOD_AND_DRINK); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"HEALTH_AND_FITNESS") == 0)
      {
        HEALTH_AND_FITNESS=HEALTH_AND_FITNESS+1;
        // printf("HEALTH_AND_FITNESS : %.0f\n",HEALTH_AND_FITNESS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"HOUSE_AND_HOME") == 0)
      {
        HOUSE_AND_HOME=HOUSE_AND_HOME+1;
        // printf("HEALTH_AND_FITNESS : %.0f\n",HOUSE_AND_HOME); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"LIBRARIES_AND_DEMO") == 0)
      {
        LIBRARIES_AND_DEMO=LIBRARIES_AND_DEMO+1;
        // printf("LIBRARIES_AND_DEMO : %.0f\n",LIBRARIES_AND_DEMO); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"LIFESTYLE") == 0)
      {
        LIFESTYLE=LIFESTYLE+1;
        // printf("LIFESTYLE : %.0f\n",LIFESTYLE); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"GAME") == 0)
      {
        GAME=GAME+1;
        // printf("GAME : %.0f\n",GAME); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"FAMILY") == 0)
      {
        FAMILY=FAMILY+1;
        // printf("FAMILY : %.0f\n",FAMILY); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"MEDICAL") == 0)
      {
        MEDICAL=MEDICAL+1;
        // printf("MEDICAL : %.0f\n",MEDICAL); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"SOCIAL") == 0)
      {
        SOCIAL=SOCIAL+1;
        // printf("SOCIAL : %.0f\n",SOCIAL); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"SHOPPING") == 0)
      {
        SHOPPING=SHOPPING+1;
        // printf("SHOPPING : %.0f\n",SHOPPING); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"PHOTOGRAPHY") == 0)
      {
        PHOTOGRAPHY=PHOTOGRAPHY+1;
        // printf("PHOTOGRAPHY : %.0f\n",PHOTOGRAPHY); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"SPORTS") == 0)
      {
        SPORTS=SPORTS+1;
        // printf("SPORTS : %.0f\n",SPORTS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"TRAVEL_AND_LOCAL") == 0)
      {
        TRAVEL_AND_LOCAL=TRAVEL_AND_LOCAL+1;
        // printf("TRAVEL_AND_LOCAL : %.0f\n",TRAVEL_AND_LOCAL); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"TOOLS") == 0)
      {
        TOOLS=TOOLS+1;
        //printf("TOOLS : %.0f\n",TOOLS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"PERSONALIZATION") == 0)
      {
        PERSONALIZATION=PERSONALIZATION+1;
        // printf("PERSONALIZATION : %.0f\n",PERSONALIZATION); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"PRODUCTIVITY") == 0)
      {
        PRODUCTIVITY=PRODUCTIVITY+1;
        // printf("PRODUCTIVITY : %.0f\n",PRODUCTIVITY); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"PARENTING") == 0)
      {
        PARENTING=PARENTING+1;
        // printf("PRODUCTIVITY : %.0f\n",PARENTING); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"WEATHER") == 0)
      {
        WEATHER=WEATHER+1;
        // printf("WEATHER : %.0f\n",WEATHER); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"VIDEO_PLAYERS") == 0)
      {
        VIDEO_PLAYERS=VIDEO_PLAYERS+1;
        // printf("WEATHER : %.0f\n",VIDEO_PLAYERS); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"NEWS_AND_MAGAZINES") == 0)
      {
        NEWS_AND_MAGAZINES=NEWS_AND_MAGAZINES+1;
        // printf("NEWS_AND_MAGAZINES : %.0f\n",NEWS_AND_MAGAZINES); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Category,"MAPS_AND_NAVIGATION") == 0)
      {
        MAPS_AND_NAVIGATION=MAPS_AND_NAVIGATION+1;
        // printf("MAPS_AND_NAVIGATION : %.0f\n",MAPS_AND_NAVIGATION); //Only for DEBUG
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

    printf("%.2f %c des Apps sont dans la catégorie : ART_AND_DESIGN 🎨\n",Rating_Of_ART_AND_DESIGN,37); // Print the results
    printf("%.2f %c des Apps sont dans la catégorie : AUTO_AND_VEHICLES app 🚗\n",Rating_Of_AUTO_AND_VEHICLES,37);
    printf("%.2f %c des Apps sont dans la catégorie : BEAUTY app 💄\n",Rating_Of_BEAUTY,37);
    printf("%.2f %c des Apps sont dans la catégorie : BOOKS_AND_REFERENCE app 📕\n",Rating_Of_BOOKS_AND_REFERENCE,37);
    printf("%.2f %c des Apps sont dans la catégorie : BUSINESS app 💸\n",Rating_Of_BUSINESS,37);
    printf("%.2f %c des Apps sont dans la catégorie : COMICS app 💬\n",Rating_Of_COMICS,37);
    printf("%.2f %c des Apps sont dans la catégorie : COMMUNICATION app 🗣\n",Rating_Of_COMMUNICATION,37);
    printf("%.2f %c des Apps sont dans la catégorie : DATING app 💑\n",Rating_Of_DATING,37);
    printf("%.2f %c des Apps sont dans la catégorie : Apps sont dans la catégorie : EDUCATION app 👨\n",Rating_Of_EDUCATION,37);
    printf("%.2f %c des Apps sont dans la catégorie : ENTERTAINMENT app ⚽️\n",Rating_Of_ENTERTAINMENT,37);
    printf("%.2f %c des Apps sont dans la catégorie : EVENTS app 📆\n",Rating_Of_EVENTS,37);
    printf("%.2f %c des Apps sont dans la catégorie : FINANCE app 📈\n",Rating_Of_FINANCE,37);
    printf("%.2f %c des Apps sont dans la catégorie : FOOD_AND_DRINK app 🍔\n",Rating_Of_FOOD_AND_DRINK,37);
    printf("%.2f %c des Apps sont dans la catégorie : HEALTH_AND_FITNESS app 🍎\n",Rating_Of_HEALTH_AND_FITNESS,37);
    printf("%.2f %c des Apps sont dans la catégorie : HOUSE_AND_HOME app 🏠\n",Rating_Of_HOUSE_AND_HOME,37);
    printf("%.2f %c des Apps sont dans la catégorie : LIBRARIES_AND_DEMO app 📗\n",Rating_Of_LIBRARIES_AND_DEMO,37);
    printf("%.2f %c des Apps sont dans la catégorie : LIFESTYLE app\n",Rating_Of_LIFESTYLE,37);
    printf("%.2f %c des Apps sont dans la catégorie : GAME app 📺\n",Rating_Of_GAME,37);
    printf("%.2f %c des Apps sont dans la catégorie : FAMILY app\n",Rating_Of_FAMILY,37);
    printf("%.2f %c des Apps sont dans la catégorie : MEDICAL app 🏥\n",Rating_Of_MEDICAL,37);
    printf("%.2f %c des Apps sont dans la catégorie : SOCIAL app 👬\n",Rating_Of_SOCIAL,37);
    printf("%.2f %c des Apps sont dans la catégorie : SHOPPING app 🛒\n",Rating_Of_SHOPPING,37);
    printf("%.2f %c des Apps sont dans la catégorie : PHOTOGRAPHY app 📷\n",Rating_Of_PHOTOGRAPHY,37);
    printf("%.2f %c des Apps sont dans la catégorie : SPORTS app 🏀\n",Rating_Of_SPORTS,37);
    printf("%.2f %c des Apps sont dans la catégorie : TRAVEL_AND_LOCAL app ✈️\n",Rating_Of_TRAVEL_AND_LOCAL,37);
    printf("%.2f %c des Apps sont dans la catégorie : TOOLS app 🔨\n",Rating_Of_TOOLS,37);
    printf("%.2f %c des Apps sont dans la catégorie : PERSONALIZATION app ✏️\n",Rating_Of_PERSONALIZATION,37);
    printf("%.2f %c des Apps sont dans la catégorie : PRODUCTIVITY app 📋\n",Rating_Of_PRODUCTIVITY,37);
    printf("%.2f %c des Apps sont dans la catégorie : PARENTING app\n",Rating_Of_PARENTING,37);
    printf("%.2f %c des Apps sont dans la catégorie : WEATHER app ⛅️\n",Rating_Of_WEATHER,37);
    printf("%.2f %c des Apps sont dans la catégorie : VIDEO_PLAYERS app 🎞\n",Rating_Of_VIDEO_PLAYERS,37);
    printf("%.2f %c des Apps sont dans la catégorie : NEWS_AND_MAGAZINES app 📰\n",Rating_Of_NEWS_AND_MAGAZINES,37);
    printf("%.2f %c des Apps sont dans la catégorie : MAPS_AND_NAVIGATION app 🧭\n",Rating_Of_MAPS_AND_NAVIGATION,37); // Print the results

    printf("\n***********************\n\n");

    //printf("End of case 7\n"); // Only for DEBUG
    break;

    case 3: // Rating

    printf("\nEntrer un une valeur de seuil (Note Max/5) : ");
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
    printf("\n%.2f %c des Apps ont une note inférieur a %.1f/5.0\n",floatRating,37,floatParameter);
    //printf("End of case 3\n");
    break;

    case 4: // Reviews

    printf("\nEntrer un une valeur de seuil (Nb de commentaires Max) : ");
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
    printf("\n%.2f %c des Apps ont été commentée moins de %.0f fois\n",floatRating,37,floatParameter);

    break;

    case 5: // Size

    printf("\nEntrer un une valeur de seuil (Taille Max): ");
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
    printf("\n%.2f %c des Apps ont une taille inférieur a %.0f\n",floatRating,37,floatParameter);

    break;

    case 6: // Installs
    printf("\nEntrer un une valeur de seuil (Nb d'installation Max): ");
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
    printf("\n%.2f %c des Apps ont été téléchargée moins de %.2f fois\n",floatRating,37,floatParameter);
    //printf("End of case 6\n");
    break;

    case 7: // Type
    //printf("Start of case 7\n");
    //printf("NbStructs : %d\n",NbStructs);
    for (int j=1;j<NbStructs;j++)
    {
      if(strcmp(New_Store[j].Type,"Free") == 0)
      {
        i++;
        //printf("i : %d\n",i); Only for DEBUG
      }
    }
    floatRating = ((i/(NbStructs-1.0))*100);
    printf("\n%.2f %c des Apps sont gratuites\n",floatRating,37);
    printf("%.2f %c des Apps sont payantes\n",(100.0-floatRating),37);
    //printf("End of case 7\n");
    break;

    case 8 : // Price

    printf("\nEntrer un parametre (Prix Max): ");
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
    printf("\n%.2f %c des Apps sont a moins de %.2f $\n",floatRating,37,floatParameter);

    break;

    case 9 : //Content_Rating

    //printf("NbStructs : %d\n",NbStructs);
    for (int j=1;j<NbStructs;j++)
    {
      if(strcmp(New_Store[j].Content_Rating,"Everyone") == 0)
      {
        Everyone=Everyone + 1.0;
        // printf("Everyone : %.0f\n",Everyone); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Teen") == 0)
      {
        Teen=Teen+1;
        // printf("Teen : %.0f\n",Teen); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Everyone_10+") == 0)
      {
        Everyone_10=Everyone_10+1;
        // printf("Everyone_10 : %.0f\n",Everyone_10); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Mature_17+") == 0)
      {
        Mature_17=Mature_17+1;
        // printf("Mature_17 : %.0f\n",Mature_17); //Only for DEBUG
      }

      if(strcmp(New_Store[j].Content_Rating,"Adults_only_18+") == 0)
      {
        Adults_only_18=Adults_only_18+1;
        //printf("Adults_only_18 : %.0f\n",Adults_only_18); //Only for DEBUG
      }
    }
    Rating_Of_Everyone = ((Everyone/(NbStructs-1))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)
    Rating_Of_Teen = ((Teen/(NbStructs-1))*100);
    Rating_Of_Everyone_10 = ((Everyone_10/(NbStructs-1))*100);
    Rating_Of_Mature_17 = ((Mature_17/(NbStructs-1))*100);
    Rating_Of_Adults_only_18 = ((Adults_only_18/(NbStructs-1))*100); // Calcul of the percentage (NbStructs-1 because the first struct is the definition of the members)

    printf("\n\n*** RESULTS ***\n\n");

    printf("%.2f %c des Apps sont pour [Everyone]\n",Rating_Of_Everyone,37);
    printf("%.2f %c des Apps sont pour [Teen]\n",Rating_Of_Teen,37);
    printf("%.2f %c des Apps sont pour [Everyone_10]\n",Rating_Of_Everyone_10,37);
    printf("%.2f %c des Apps sont pour [Mature_17]\n",Rating_Of_Mature_17,37);
    printf("%.2f %c des Apps sont pour [Adults_only_18]\n",Rating_Of_Adults_only_18,37);

    printf("\n***********************\n\n");

    //printf("End of case 7\n");
    break;

    case 10: //Genres
    printf("\n\nLes résultats sont identique au choix [2) Catégorie] 😛\n");
    printf("La prochaine fois sélectionner le choix n°2\n");
    break;

    default :
    printf("\n*** Votre choix ne permet pas d'etablir un pourcentage ***\n");
    break;
  }
  // printf("End of partof function\n");
}

char *choose (int *Selected) // Ask a to choose an number between 1-13
{
  static char StrSelect[50];
  do{

    printf("\nChoisissez un champs(1 a 13):\n1) Nom\n2) Catégorie\n3) Note\n4) Commentaires\n5) Taille\n6) Nombre d'installations\n7) Type\n8) Prix\n9) Type d'utilisateur\n10) Genres\n11) Date de derniere MAJ\n12) Numéro de version actuelle\n13) Numéro de Version Android\n");
    printf("\nVotre choix : ");
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
      return 0;
      break;
    }

  }while (*Selected == -1);
}

void Txt_to_Struc(FILE* fic, int *i, APPtxt *Store) // Copy all the .txt file into a RawStruct (Only char)
{
  char LineBuffer[TAILLE];
  const char s[2] = ",";
  char *token;
  *i = 0;

  printf("\nStart of Txt_to_Struc function\n"); // Only for DEBUG

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
    //printf("i : %d\n",*i);
    //printf("End of whileloop\n"); // Only for DEBUG
  }
  fseek(fic, 0, SEEK_SET);
  //printf("End of Txt_to_Struc function\n\n"); //Only for DEBUG
}

void RawStructToTypeStruct(APPtxt *Raw_Store, APPtype *New_Store,int NbStructs) // Copy the RawStruct(Only char) To a TypeStruct(char or float)
{
  //printf("\nStart of RawStructToTypeStruct function\n");

  for (int j=0;j<NbStructs;j++)
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

    strcpy(New_Store[j].Current_Ver,Raw_Store[j].Current_Ver);

    New_Store[j].Android_Ver = atof(Raw_Store[j].Android_Ver);
  }

  //printf("End of RawStructToTypeStruct function\n");
}

int nbdeligne(FILE* fic) // Count the number of ligne of the .txt file
{
  int i=0;
  char LineBuffer[TAILLE];

  while (fgets(LineBuffer,TAILLE,fic)!=NULL) // Read the all the file until NULL
  {
    i++; // at the end of each line, we increase the counter in order to known the number of App
  }
  return i;
};

void printStore(APPtype *Store,int i) // Print all the PlayStore
{
  //printf("\nStart of printStore function\n");

  for(int j=0;j<i;j++)
  {
    printf("\n\n*** App n° %d ***\n\n",j);

    printf("\rNom :                           \t\t%s\n",Store[j].Name);
    printf("\rCatégorie :                     \t\t%s\n",Store[j].Category);
    printf("\rNote :                          \t\t%.1f/5.0\n",Store[j].Rating);
    printf("\rNombre de commantaire :         \t\t%.0f\n",Store[j].Reviews);
    printf("\rTaille :                        \t\t%.0f octets\n",Store[j].Size);
    printf("\rNombre d'Installations :        \t\t%.0f\n",Store[j].Installs);
    printf("\rType :                          \t\t%s\n",Store[j].Type);
    printf("\rPrix :                          \t\t%.2f $\n",Store[j].Price);
    printf("\rPulic :                         \t\t%s\n",Store[j].Content_Rating);
    printf("\rGenres :                        \t\t%s\n",Store[j].Genres);
    printf("\rDerniere MAJ:                   \t\t%s\n",Store[j].Last_Updated);
    printf("\rVersion Actuelle :              \t\t%s\n",Store[j].Current_Ver);
    printf("\rVersion Android :               \t\t%.2f\n",Store[j].Android_Ver);
  }
  //printf("End of printStore function\n");
}

APPtxt* ResizeStrucTxt(FILE*fic) // dimension le tableau de structure selon le fichier
{
  //printf("\nStart of ResizeStrucTxt function\n");
  APPtxt *Raw_Store = NULL;

  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  Raw_Store=malloc(NbDeLigne*sizeof(APPtxt));

  //printf("End of ResizeStrucTxt function\n");

  fseek(fic, 0, SEEK_SET);
  return Raw_Store;
}

APPtype* ResizeStructType(FILE*fic) // dimension le tableau de structure selon le fichier
{
  //printf("\nStart of ResizeStructType function\n");
  APPtype *New_Store = NULL;

  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  New_Store=malloc(NbDeLigne*sizeof(APPtype));
  //printf("End of ResizeStructType function\n");

  fseek(fic, 0, SEEK_SET);
  return New_Store;
}

float average(APPtype *Store,int Selected, int i) //Calcul the average of something
{
  //printf("Start of Average function\n"); // Only For DEBUG

  float Average = 0.0; //
  float Sum = 0.0;

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

    Average = Sum/(i-1.0);
    printf("\nEn moyenne un App est notée : %.2f/5.0\n",Average);
    return Average;
    break;

    case 4:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Reviews);
      // printf("Nb of Reviews of App n°%d : %.2f\n",j,Store[j].Reviews); // Only For DEBUG
    }

    Average = Sum/(i-1.0);
    printf("\nEn moyenne un App est commentée: %.2f fois\n",Average);
    return Average;
    break;

    case 5:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Size);
      // printf("Size of App n°%d : %.0f\n",j,Store[j].Size); // Only For DEBUG
    }

    Average = Sum/(i-1.0);
    printf("\nEn moyenne un App fait : %.0f octets\n",Average);
    return Average;
    break;

    case 6:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Installs);
      // printf("Nb of Installs of App n°%d : %.2f\n",j,Store[j].Installs); // Only for DEBUG
    }

    Average = Sum/(i-1.0);
    printf("\nEn moyenne, une App est installée : %.0f fois\n",Average);
    return Average;
    break;

    case 8:
    for (int j=1;j<i;j++) // j start at 1 because the first struct is the definition of the member (App,Category,Rating,Reviews,Size,Installs,Type,Price,Content_Rating,Genres,Last_Updated,Current_Ver,Android_Ver)
    {
      Sum = Sum + (Store[j].Price);
      // printf("Price of App n°%d : %.2f\n",j,Store[j].Price); // Only for DEBUG
    }

    Average = Sum/(i-1.0);
    printf("\nEn moyenne une App coûte : %.2f $\n",Average);
    return Average;
    break;

    default : // If an other values is choosen :
    printf("\n **** Votre choix ne permet pas d'etablir une moyenne *** 😥\n"); // print a error if the member of the struct is not a integer value
    return 0;
    break;
  }

  //printf("End of Average function\n"); // Only For DEBUG
}

void menu(FILE* fic, FILE* fic2) // print the menu
{

  int Selected = 0,
  NbStructs = 0,
  choix = 0;

  APPtype *New_Store = NULL;
  APPtxt *Raw_Store = NULL;

  TAB_graph *Graph = NULL;
  TAB_graphString *GraphSting=NULL;

  char *StrSelect[50];


  Raw_Store = ResizeStrucTxt(fic);
  New_Store = ResizeStructType(fic);


  Txt_to_Struc(fic,&NbStructs,Raw_Store);
  Correct_Member(Raw_Store,NbStructs);
  RawStructToTypeStruct(Raw_Store,New_Store,NbStructs);


  Graph = ResizeStrucGraph(New_Store,fic);
  GraphSting = ResizeStrucGraphString(New_Store,fic);
  do{

    printf("\n🤶🎅 Menu Principal 🎅🤶\n\n");

    printf("1) Afficher le PlayStore\n");
    printf("2) Tri croissant en fonction d'un parametre\n");
    printf("3) Calculer une moyenne\n");
    printf("4) Calculer un pourcentage\n");
    printf("5) Caluler l'espérance qu'un App soit téléchargée en étant gratuite\n");
    printf("6) Régression linéaire (Prix / Installation)\n");
    printf("7) Quiter le programme\n\n");

    printf("Votre choix : ");
    scanf("%d",&Selected);

    switch (Selected)
    {
      case 1:
      printStore(New_Store,NbStructs);
      break;

      case 2:
      Sort_float(New_Store,NbStructs);
      //printf("\n*** Erreur 404 ***\n");
      break;

      case 3:
      *StrSelect = choose(&choix);
      average(New_Store,choix,NbStructs);
      break;

      case 4:
      *StrSelect = choose(&choix);
      partof(New_Store,choix,NbStructs);
      break;

      case 5:
      Esperance(New_Store,NbStructs);
      break;

      case 6:
      //Get_Values(New_Store,NbStructs);
      RawStructToGraph(New_Store,Graph,NbStructs);
      SortGraph(Graph,NbStructs);
      //TAB_graphToTAB_graphString(Graph,GraphSting,NbStructs);
      exportGraph(Graph,NbStructs,fic2);
      break;

      case 7:
      printf("\n🎉🍾 Joyeuse fete ! 🍾🎉\n\n");
      break;

      default :
      printf("Erreur de saisie\n");
      break;
    }
  }while(Selected != 7);
}

void Correct_Member(APPtxt *Raw_Store,int i) // correct the member of the struct in order to make easier the futur treatment
{
  //printf("Start of Correct_Member function\n"); // Only for DEBUG

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

    char Size[50]; // variable de transfere

    strcpy(Size,Raw_Store[j].Size); // Copy the string of the struct into the variable de transfere

    for (int c=0;c<50;c++) // treat all the array
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

    char Installs[50]; // variable de transfere
    strcpy(Installs,Raw_Store[j].Installs); // Copy the string of the struct into the variable de transfere

    for (int c =0;c<50;c++)
    {
      if(Installs[c] == '+') // if a '+' is detect, we replace it with \0 in order to trim the array
      {
        Installs[c] = '\0';
      }
    }
    strcpy(Raw_Store[j].Installs,Installs); // Copy the variable de transfere into the struct
    //printf("INSTALL : %s\n",Raw_Store[j].Installs);
    //printf("NbStructs : %d\n",j);

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

    char Android_Ver[50]; // variable de transfere
    strcpy(Android_Ver,Raw_Store[j].Android_Ver); // Copy the string of the struct into the variable de transfere

    for (int c =0;c<50;c++)
    {
      if(Android_Ver[c] == '_') // if a '_' is detect, we replace it with \0 in order to trim the array
      {
        Android_Ver[c] = '\0';
      }
    }
    strcpy(Raw_Store[j].Android_Ver,Android_Ver); // Copy the variable de transfere into the struct

    //printf("%s\n",Raw_Store[j].Android_Ver);
  }
  //printf("End of Correct_Member function\n"); // Only for DEBUG
}

void Sort_float(APPtype *Store,int NbStructs)
{
  APPtype tmp;
  int choix=0;

  char *StrSelect[50];

  *StrSelect = choose(&choix);

  switch (choix)
  {
    case 3:
    printf("\n *** Veuillez Patienter ***\n");
    printf("Vous avez le temps de faire un cafe :)\n");

    for(int i=0;i<NbStructs;i++)
    {
      for(int j=0;j<(NbStructs-i);j++)
      {
        if (Store[j].Rating > Store[j+1].Rating)
        {
          tmp=Store[j];
          Store[j]=Store[j+1];
          Store[j+1] = tmp;
        }
      }
    }
    printStore(Store,NbStructs);
    break;

    case 4:
    printf("\n *** Veuillez Patienter ***\n");
    printf("Vous avez le temps de faire un cafe :)\n");

    for(int i=0;i<NbStructs;i++)
    {
      for(int j=0;j<(NbStructs-i);j++)
      {
        if (Store[j].Reviews > Store[j+1].Reviews)
        {
          tmp=Store[j];
          Store[j]=Store[j+1];
          Store[j+1] = tmp;
        }
      }
    }
    printStore(Store,NbStructs);
    break;

    case 5:
    printf("\n *** Veuillez Patienter ***\n");
    printf("Vous avez le temps de faire un cafe :)\n");

    for(int i=0;i<NbStructs;i++)
    {
      for(int j=0;j<(NbStructs-i);j++)
      {
        if (Store[j].Size > Store[j+1].Size)
        {
          tmp=Store[j];
          Store[j]=Store[j+1];
          Store[j+1] = tmp;
        }
      }
    }
    printStore(Store,NbStructs);
    break;

    case 6:
    printf("\n *** Veuillez Patienter ***\n");
    printf("Vous avez le temps de faire un cafe :)\n");

    for(int i=0;i<NbStructs;i++)
    {
      for(int j=0;j<(NbStructs-i);j++)
      {
        if (Store[j].Installs > Store[j+1].Installs)
        {
          tmp=Store[j];
          Store[j]=Store[j+1];
          Store[j+1] = tmp;
        }
      }
    }
    printStore(Store,NbStructs);
    break;

    case 8:
    printf("\n *** Veuillez Patienter ***\n");
    printf("Vous avez le temps de faire un cafe :)\n");

    for(int i=0;i<NbStructs;i++)
    {
      for(int j=0;j<(NbStructs-i);j++)
      {
        if (Store[j].Price > Store[j+1].Price)
        {
          tmp=Store[j];
          Store[j]=Store[j+1];
          Store[j+1] = tmp;
        }
      }
    }
    printStore(Store,NbStructs);
    break;

    default :
    printf("\n**** Votre choix ne permet pas de trier les Apps ***\n");
    break;
  }
}

void Esperance(APPtype *Store,int NbStructs)
{
  int n=0;
  float Average=0.0,
  esperance=0.0;


  Average = average(Store,6,NbStructs); // Need the average for esperance

  for (int j=1; j<NbStructs; j++)
  {
    if ((strcmp(Store[j].Type,"Free"))==0)
    {
      esperance=esperance+(Store[j].Installs-Average);
      n++;
    };
  };
  esperance= esperance/n;
  printf("Un App gratuite peut espérer être téléchargée: %.2f fois\n",esperance);
};

void RawStructToGraph(APPtype *Store, TAB_graph *Graph, int NbStructs)
{
  // TAB_graph *Graph = NULL;
  // Graph = ResizeStrucGraph(Store,fic);

  for(int i=1;i<NbStructs;i++)
  {
    printf("i : %d\n",i);
    Graph[i-1].y = Store[i].Price;
    Graph[i-1].x = Store[i].Installs;

    printf("Y : %.2f\n",Graph[i].y); //ONLY FOR DEBUG
    printf("X : %.2f\n\n",Graph[i].x); //ONLY OR DEBUG
  }
}

TAB_graph* ResizeStrucGraph(APPtype *Store, FILE* fic)
{
  TAB_graph *Graph = NULL;
  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  Graph=malloc(NbDeLigne*sizeof(TAB_graph));

  return Graph;
}

TAB_graphString* ResizeStrucGraphString(APPtype *Store, FILE* fic)
{
  TAB_graphString *GraphSting = NULL;
  int NbDeLigne;
  NbDeLigne = nbdeligne(fic);
  GraphSting=malloc(NbDeLigne*sizeof(TAB_graphString));

  return GraphSting;
}

void SortGraph(TAB_graph *Graph, int NbStructs)
{
  TAB_graph tmp;

  for(int i=0;i<NbStructs;i++)
  {
    for(int j=0;j<(NbStructs-i);j++)
    {
      if (Graph[j].y > Graph[j+1].y)
      {
        tmp=Graph[j];
        Graph[j]=Graph[j+1];
        Graph[j+1] = tmp;
      }
    }
    printf("Sort n° %d\n\n",i);
    printf("X : %.0f\n",Graph[i].x);
    printf("Y : %.2f\n\n",Graph[i].y);
  }

  // for (int i=0;i<NbStructs;i++)
  // {printf("i :%d\n",i);
  //   if (Graph[i].y == pricerange1)
  //   {
  //     pricerange1++;
  //   }
  // }
  //
  // printf("pricerange1 : %d\n",pricerange1);
  // //printf("pricerange2 : %d\n",pricerange2);

}
void exportGraph(TAB_graph *Graph, int NbStructs, FILE *fic2)
{
  fseek(fic2, 0, SEEK_SET);

  fputs("Price",fic2);
  fputc(',',fic2);

  fputs("Install",fic2);
  fputc('\n',fic2);

  for (int i=0;i<NbStructs-1;i++)
  {
    fprintf(fic2,"%.2f",Graph[i].y);
    fputc(',',fic2);
    fprintf(fic2,"%.0f",Graph[i].x);
    fputc('\n',fic2);
  }
  fclose(fic2);
  printf("FICHIER FERMER\n");
}

void fp_OuvertureFichierCSV(FILE** fp2) // Open the .txt file
{
  fprintf(stdout,"fp_OuvertureFichier2: Begin\n");

  *fp2=fopen("data/graph.csv","w+"); // open in read+ (Open for reading and writing)
  if(*fp2==NULL)
  {
    fprintf(stdout,"Erreur ouverture fichier2 r+\n"); // if the opening in r+ failed

    *fp2=fopen("data/graph.csv","w+"); // open the file in w+ in order to create it if it does not exist WARNING in this mode the cursor is placed at the end of the file.
    if(*fp2==NULL)
    {
      fprintf(stdout,"Erreur ouverture fichier2 w+. Sortie du programme\n"); // if the opening fail again we stop the programme
      exit(-1);
    }
  }
  fprintf(stdout,"fp_OuvertureFichier2: End\n\n");
}

void TAB_graphToTAB_graphString(TAB_graph *Graph, TAB_graphString *GraphSting, int NbStructs)
{
  for(int i =0;i<NbStructs;i++)
  {
    //ftoa(Graph[i].y,GraphSting[i].y,2);
    //ftoa(Graph[i].x,GraphSting[i].x,0);
  }
}
