#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hasil;
	char input[30],temp;
	address P;
	Stack S;
	Queue Z;
	node Q;
	Z.First=NULL;
	Z.Last=NULL;
	S.Head=NULL;
	printf("enter expression:");
	scanf("%s",&input);fflush(stdin);
	convertPostfix(&Z,&S,input);
//	temp=PopStack(&X);
//	ViewAsc(Z);
//	ViewAscStack(X);
//	printf("input: %s", input);
//	InfixToPostfix("1*(2+3)/4^5-6", postfix);
//	printf("postfix: %s", postfix);
	P=Create_Tree(Z);
	hasil=kalkulasi(P);
	printf("hasilnya adalah %g\n",hasil);
	printf("PostOrder: ");
	PostOrder(P);
	return 0;
}
