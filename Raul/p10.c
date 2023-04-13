#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define F 25
#define C 20


void cargarMatTexDeArch(char mat[][C]){
	FILE*fp;
	char str[100];
	int i=0;
	fp=fopen("equipos.txt","r");
	if (fp=NULL){
		printf("Error al abrir el archivo");
		fclose(fp);
	}
	else{
		while (fgets(str,C,fp)!= NULL && i<F){
			str[strcspn(str, "\n")] = '\0';
			strcpy(mat[i], str);
			i++;
		
		}
	}fclose(fp);
}
void imprimirMatText(char mat[][C]){
	int i,j;
	
	for(i = 0; i < F; i++){
		for(j = 0; mat[i][j] != '\0'; j++){
			printf("%c ",mat[i][j]);
		}
		printf("\n");
	}
}
	
	int main(){
		char mat[F][C];
		cargarMatTexDeArch(mat);
		imprimirMatText(mat);
		return 0;
	}
