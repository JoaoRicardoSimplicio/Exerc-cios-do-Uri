#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int main (){

    int cont, carry=0, valorA, valorB, prox=0, soma, tamanhoA, tamanhoB, ind=0;
    	
    while (1){
    
	char numA[10], numB[10];
       
	scanf("%s %s", numA, numB);
 
       	if (numA[0]=='0' && numB[0]=='0'){

        	    break;
        
	}
  
      	tamanhoA = strlen(numA)-1;

        tamanhoB = strlen(numB)-1;
 
       	while (ind==0){
    
        valorA = 0;
     
       	valorB = 0;

            if (tamanhoA>=0){

                valorA = numA[tamanhoA];

                valorA-=48;
    
            }
      
            if (tamanhoB>=0){
 
                valorB = numB[tamanhoB];
  
                valorB-=48;
   
            }
        
            soma = valorA+valorB+prox;

            if (soma>9){

                prox = soma/10;

                carry+=1;
      
            }
  
            else if (soma<=9){
  
                prox = 0;
       
	    }
      
      	    tamanhoA-=1;

            tamanhoB-=1;
  
            if (tamanhoA<0 && tamanhoB<0){
    
             	ind = 1;
    
            }
  
   }
      
   if (carry>0){

 
           if (carry>1){
               
		 printf("%d carry operations.\n", carry);
 
           }
   
           else if (carry==1){
        
                 printf("%d carry operation.\n", carry);

           }
  
   }
        
   else {
            
           printf("No carry operation.\n");
   
   }
        
	carry = 0;
        
        prox = 0;

        ind = 0;
 
   }

return 0;

}


## João Ricardo Simplício Soares ##