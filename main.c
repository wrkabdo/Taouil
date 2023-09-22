#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 struct task{
	
	    int id;
	    char titre [100];
	    char description [100];
	    int deadline ;
	    char statut [100];
	
    };
       
    struct task t ;
       	char choixAj,a,b;
	    int i;
	    int id=1;
void Ajouter(){

	
	        printf("[a]Ajouter Une tache \n");
		    printf("[b]Ajouter plusieur tache \n");
		     scanf("%c",&choixAj);
		     //apre le client choisx ena fait un choix si le choix == a donc ajouter une fois sinon si le choix == b l'ajout dois affiche plusieur fois
		 if(choixAj == 'a')
		    {
		    	 printf("entre les info suivant:\n");
                 printf("Enter le Id:\n");
                  scanf("%i",&t.id+1);
	            printf("Enter le Titre :\n");
	              scanf("%s",&t.titre);
	            printf("Enter le Description :\n");
	              scanf("%s",&t.description);
	            printf("Enter le Deadline (jour/mois/ans)");
	              scanf("%i",&t.deadline);
	            printf("Enter le Statut [* realise *,* en cours de realise *,* finalise *]:\n");
	              scanf("%s",&t.statut);
	                         }
			else if (choixAj == 'b')
		    {   
			 for(i=0;i<3;i++){
		    	printf("Enter le Id:\n");
                  scanf("%i",&t.id+1);
	            printf("Enter le Titre :\n");
	              scanf("%s",&t.titre);
	            printf("Enter le Description :\n");
	              scanf("%s",&t.description);
	            printf("Enter le Deadline (jour/mois/ans)");
	              scanf("%i",&t.deadline);
	            printf("Enter le Statut [* a realise *,* en cours de realise *,* finalise *]:\n");
	              scanf("%s",&t.statut);
	                         }
			}else
		    {
		    	printf("choisir un choix:");
			}
		    
	};
	
	
void Afficher (){
	
	    printf("le info que vous enter est :\n");
	    printf("le id:\n titre:\n description:\n deadline:\n statut:\n %i %s %s %i %s",t.id,t.titre,t.description,t.deadline,t.statut);
};

int main(int argc, char *argv[]) {
	
	int choix;
	char choixAj,a,b;

	printf("=========================================== \n \t \t");
	
	printf("Menu Gestion de Tâches ToDo \n");
	
	printf("=========================================== \n");
	do{
		
		printf("[1]Ajouter Une tâche \n");
		printf("[2]Afficher \n");
		printf("[3]Modifier \n");
		printf("[4]Supprimer \n");
		printf("[5]Rechercher  \n");
		printf("[6]Statistiques \n");
	    scanf("%i",&choix);

		printf("=========================================== \n");

	switch (choix) {
		case 1:
			printf("[a]Ajouter Une tache \n");
		    printf("[b]Ajouter plusieur tache \n");
		     scanf("%c",&choixAj);
			
		    Ajouter();
	    break;
	    
	    case 2:
	    	Afficher();
	    break;
	    default:
	    	printf("choisir un choix:\n");
	    	break;
	}
	
	}while(0);
	return 0;
}
