#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void limpatela(){  
    system("cls");  
}  

int main (void){  
setlocale(LC_ALL,"");  

int c;  
float n1, n2, r;  

    while  (c != 0){ 
	    puts("Qual operação deseja usar:");  
      printf("1 - ADIÇÃO\n2 - SUBTRAÇÃO\n3 - MULTIPLICAÇÃO\n4 - DIVISÃO\n");  
      scanf ("%d", &c);  
			limpatela();  

	    switch (c){  


		    case 1:  
		    printf("\tADIÇÂO:\n\n");  
		    puts ("Digite os dois números:");  
		    scanf("%f", &n1);  
		    scanf("%f", &n2);  

		    r = n1 + n2;  

		    printf("O resultado é:\n%.2f", r);  
		    
		    c = 0; 
		    break;  

		    case 2:  

	      printf("\tSUBTRAÇÂO:\n\n");  
		    puts ("Digite os dois números:");  
		    scanf("%f", &n1);  
		    scanf("%f", &n2);  

	      r = n1 - n2;  

	      printf("O resultado é: \n%.2f", r);  

		     c = 0; 
			   break;  


		    case 3:  

		    printf("\tMULTIPLICAÇÂO:\n\n");  
		    puts ("Digite os dois números:");  
		    scanf("%f", &n1);  
		    scanf("%f", &n2);  

		    r = n1 * n2;  

		    printf("O resultado é: \n%.2f", r);  

		    c = 0; 
				break;  

		    case 4:  

		    printf("\tDIVISÃO:\n\n");  
		    puts ("Digite os dois números:");  
		    scanf("%f", &n1);  
		    scanf("%f", &n2);  

		    r = n1 / n2;  

		    printf("O resultado é: \n%.2f", r);  
    
		    c = 0; 
		    break;  

		    default:  

		    puts ("INVALIDO.");  

		    break; 
    }    
    }  
}