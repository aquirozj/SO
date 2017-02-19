#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void mi_printf( char *str1, char *str2){
		
}

int main(){
	char *cad1= (char*)malloc(50*sizeof(char));
	char *cad2= (char*)malloc(20*sizeof(char));

	printf("Escribe la cadena que se desplegara en pantalla\n ");
	scanf("%s", &cad1);

	int i;
	for (i=0;i<50; i++){
		printf("%s ", *cad1+1);
	}
	printf("Escribe la segunda cadena a reemplazar por el simbolo\n");
	scanf("%s", &cad2);		
		


//	free(cad1);
//	free(cad2);
	return 0;
}
