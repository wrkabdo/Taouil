#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	 struct deadline{
	    int jour;
	    int mois;
	    int anne;
     } ;
     
	typedef struct {	
		int id;
		char titre[100];
		char description[100];
		struct  deadline deadln;
		char statut[100];
	} Task;
	
	 
       int counter=0;
       Task tk[100];
	//function pour ajouter un tache.
    void Ajouter(){
       	printf("votre id est: %i\n",tk[counter].id+1);
       	printf("enter titre:\n");
       	scanf("%s",tk[counter].titre);
       	printf("enter description :\n");
       	scanf("%s",tk[counter].description);
       	printf("enter deadline :\n");
       	printf("le jour:");
       	scanf("%i",&tk[counter].deadln.jour);
       	printf("le mois:");
       	scanf("%i",&tk[counter].deadln.mois);
		printf("le annee:");
       	scanf("%i",&tk[counter].deadln.anne);
       	printf("enter statut by choisine one of the following status: \n[a realise] \n[en cours de realise] \n[finalise] :\n");
        scanf("%s",tk[counter].statut);
         counter++;
	   };
	   //function pour ajouter plusieur tache.
	void Ajouterplus(){
		int i,n;
		
		     printf("Entre le nombre des taske que vous voullez ajouter \n");
		     scanf("%i",&n);
		     
	   	for(i=0;i<n;i++){
	   		printf("votre id est: %i\n",tk[counter].id+1);
       	    printf("enter titre:\n");
       	    scanf("%s",tk[counter].titre);
       	    printf("enter description :\n");
       	    scanf("%s",tk[counter].description);
       	    printf("enter deadline :\n");
       	    printf("le jour:");
       	    scanf("%i",&tk[counter].deadln.jour);
       	    printf("le mois:");
       	    scanf("%i",&tk[counter].deadln.mois);
		    printf("le annee:");
       	    scanf("%i",&tk[counter].deadln.anne);
       	    printf("enter statut by choisine one of the following status: \n[a realise] \n[en cours de realise] \n[finalise] :\n");
            scanf("%s",tk[counter].statut);
				   		counter++;
		   }
	   }
	   void afficher(){
	   	        int i;
	   	for(i=0; i < counter ;i++){
	   	            	printf("votre id est: %i\n",tk[i].id=+1);
	   		       	    printf("titre: %s\n",tk[i].titre);
	   		       	    printf("description : %s\n",tk[i].description);
       	                printf("deadline : %i/%i/%i \n",&tk[i].deadln.jour,&tk[i].deadln.mois,&tk[i].deadln.anne);
	   		       	    printf("description : %s\n",tk[i].statut);
	   		       	    printf("statut: %s",tk[i].statut);
	   		       	    printf("===============================================================");
		   }
	   }
	   void Modifier(){
	                   char choixmod;
	                   printf("[a] Modifier la description d'une tâche");
	                   printf("[b] Modifier  le statut d’une tâche");
	                   printf("[c] Modifier le deadline d’une tâche");
	                    scanf("%c",&choixmod);
                       switch(choixmod)
	                    {
	                	case 'a':
			
		                    	break;
	                	case 'b':
	                		
	                    		break;
	                	case 'c':
	                		
		                    	break;
	}
	
	
};          
	   void supprimerid() {
	   	int j;
  // Demander à l'utilisateur de saisir l'ID de la tâche à supprimer
                        int id;
                        printf("Entrez l'ID de la tâche à supprimer : ");
                        scanf("%d", &id);

  // Parcourir l'array `tk` pour trouver la tâche correspondante
                        int i;
                        for (i = 0; i < counter; i++) {
                         if (tk[i].id == id) {
      // Supprimer la tâche de l'array
                        for ( j = i; j < counter - 1; j++) {
                        tk[j] = tk[j + 1];
                                           }
                         counter--;
                          break;
                          }
  }
   }
	int main() {
	
	            int choix;
	            char choixAj,a,b;

	printf("=========================================== \n \t \t");
	
	printf("Menu Gestion de Taches ToDo \n");
	
	printf("=========================================== \n");
	do{
		printf("[1]Ajouter Une tache \n");
		printf("[2]Ajouter plusieur tache \n");
		printf("[3]Afficher  \n");
		printf("[4]Modifier \n");
		printf("[5]Supprimer \n");
		printf("[6]Rechercher  \n");
		printf("[7]Statistiques \n");
	    scanf("%i",&choix);

		printf("=========================================== \n");

	switch (choix) {
		case 1:
			
		    Ajouter();
	    break;
	    case 2:
	    	Ajouterplus();
	    
	    break;
	    
	    case 3:
	    	
	    	afficher();
	    break;
	    case 4:
	    	
	    	Modifier();
	    break;case 5:
	    	
	    	supprimerid();
	    break;
	    default:
	    	printf("choisir un choix:\n");
	    	break;
}
	}while(choix!=3);
	return 0;
}
