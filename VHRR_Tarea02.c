#include <stdio.h>
int main()
{
int contadorMayusculas, i;
contadorMayusculas = i = 0;
char caracter;
char cadenaUsuario[15];
char cadenaInversa[15];
char cadenaOriginal[32] = "victorhugoramirezriosvictorhugo";
//paso1. pedir al usuario un
printf("Arreglo cadenaOriginal: [ %s ]\n", cadenaOriginal);
printf("Introduce un caracter: \n");
scanf(" %c", &caracter);
//printf("%s\n", cadenaOriginal);
printf("Introducir cadena de 15 caracteres: \n");
scanf("%15s", cadenaUsuario);
//Contador de caracteres
while (cadenaUsuario[i] != '\0')
  ++i;
//Convertir maysuculas a minusculas & contador de mayusculas

printf("La cadena tiene un total de [ %d ] caracteres\n", i);

printf("Cadena con caracteres de forma inversa: ");
for(int num=i-1; num>=0; num--){
  cadenaInversa[num] = cadenaUsuario[num];
  printf("%c", cadenaInversa[num]);
}

if("")

for(int num=0; num<i; num++){
    if(cadenaUsuario[num]>='A' && cadenaUsuario[num]<='Z'){
      cadenaUsuario[num] = cadenaUsuario[num] + 32;
      contadorMayusculas++;
    }
}
printf("\nSe han convertido [ %d ] caracteres a minusculas: %s \n", contadorMayusculas, cadenaUsuario);
return 0;
}
