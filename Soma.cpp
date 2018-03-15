#include<stdio.h>
#include<stdlib.h>
#define m 15

main(){
	int vet[m],i,soma=0;
	for (i=0;i<m;i++)
	  {
	  	printf("Num: ");scanf("%d",&vet[i]);
	  	soma+=vet[i];
	  }
	  system("cls");
	  	printf("\n%d\n",soma); 
	system("pause");	   
}

