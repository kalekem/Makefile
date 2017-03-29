//implents the list of family members

#include <stdio.h>
void parents(char *parents[]){

	//names of parents - dad and mum
	printf("Mum and Dad: \n");
	for(int i =0; i<=2; i++){
		printf("%s\n", parents[i]);
	}
}


void siblings(char *siblings[]) {

	//list of sibling names
	printf("\n");
	printf("List of siblings: \n");
	for(int i=0; i<=5; i++){
		printf("%s\n", siblings[i]);
	}
}
void stepSiblings(char *steps[]){

	//list of step siblings
	printf("\n");
	printf("Step siblings: \n");
	for(int i = 0; i<=2; i++){
		printf("%s\n",steps[i] );
	}
}