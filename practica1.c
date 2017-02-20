#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void mi_printf( char *str1, char *str2){

	int i= 0;
	int j= 0;
	while (str1[i] != '\0'){
		
		if(str1[i]== '%' && str1[i+1]=='s'){
			printf(" %s ",str2);
			i++;
		}else{
			if(str1[i]=='s'){
				i++;			
			}else{
				printf("%c",str1[i] );
				i++;
			}
		}
	}

	free(str1);
	free(str2);ls
	
}

int main(){
	char *str1= (char*)malloc(20);
	char *str2= (char*)malloc(20);

	printf("Escribe la cadena que se desplegara en pantalla\n ");
	scanf("%s", str1);
	printf("Escribe la segunda cadena a reemplazar\n");
	scanf("%s", str2);		
	mi_printf(str1, str2);
	printf("\n");
	return 0;
}
