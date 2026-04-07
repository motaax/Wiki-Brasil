#include <stdio.h>

int main() {
    int vetor[] = {326, 300, 100, 320, 310, 305, 301, 101, 311,
                   111, 25,  20,  10,  21,  11,  1,   7,   16};
    int numero, unidade, dezena, centena;
   
    char separador1[5], separador2[5], unidadeStr[20], dezenaStr[20],
        centenaStr[20];
    for (int i = 0, numero = vetor[i]; i < 18; i++, numero = vetor[i])
    {
       
        printf("\nNumero: %i", numero);
        unidade = numero % 10;
        dezena = (numero % 100) / 10;
        centena = numero / 100;
        strcpy(separador1, "");
        strcpy(separador2, "");
        
        if (centena > 0 && dezena > 0 && unidade > 0)
        {
            strcpy(separador1, " , "); 
            strcpy(separador2, " e "); 
        }
      
        else if (centena > 0 && dezena > 0)
        {
            strcpy(separador1, " e "); 
            strcpy(separador2, "");
        }
        
        else if ((centena > 0 && unidade > 0) || (dezena > 0 && unidade > 0))
        {
            strcpy(separador1,
                   ""); 
            strcpy(separador2,
                   " e "); 
        }
        
        if (centena > 0)
        {
            if (centena == 1)
               
                strcpy(centenaStr, "1 centena");
            else
                
                sprintf(centenaStr, "%i centenas", centena);
            
        }
        else
            
            strcpy(centenaStr, "");
        
        if (dezena > 0)
        {
            if (dezena == 1)
                strcpy(dezenaStr, "1 dezena");
            else
                sprintf(dezenaStr, "%i dezenas", dezena);
        }
        else
            strcpy(dezenaStr, "");
        
        if (unidade > 0)
        {
            if (unidade == 1)
                strcpy(unidadeStr, "1 unidade");
            else
                sprintf(unidadeStr, "%i unidades", unidade);
        }
        else
            strcpy(unidadeStr, "");

        
        printf("\n%s%s%s%s%s", centenaStr, separador1, dezenaStr, separador2,
               unidadeStr);
    }

    return 0;
}