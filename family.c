//main function for the family members

#include <stdio.h>
#include "members.h"

int main(){

	//call the family functions
	//parents
	char *prnts[] = {"Ko Mwetich", "Siatany Kalekem"};
	parents(prnts);

	//siblings
	char *sblngs[] = {"Kwake", "Cleo", "Plimo", "Titika", "Ktum"};
	siblings(sblngs);

	//step siblings
	char *stps[] = {"Marlow", "Kama Mwetich"};
	stepSiblings(stps);

	return 0;
}

/*
family.o: family.c family.h members.c
	gcc -c family.c

members.o: family.h 
	gcc -c members.c

family: family.o members.o
	gcc family.o members.o -o family
	*/