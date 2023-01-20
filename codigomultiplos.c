#include <stdio.h>
int main(){
    FILE *archivo=NULL;
    FILE *archivo1=NULL;
     int z;
    

    archivo=fopen("vector.txt","r");
    archivo1=fopen("compilacionmultiplos.txt", "w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int cont=1;
    while(!feof(archivo)){
        fscanf(archivo, "%d", &z); 
        if(z% 10==0 ){ 
        fprintf(archivo1, "multiplo de 10 del vector \n");
        }else{
            fprintf(archivo1, "%d \n", z);
        }
        cont++;
   
    }
      fclose(archivo);
      fclose(archivo1);
     return 0;
    

      
    }