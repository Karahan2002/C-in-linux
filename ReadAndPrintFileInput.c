#include<stdio.h>

int main(){


        FILE *file;
        char ch;

        file = fopen("yakup.txt","r");

        if(file == NULL){
                printf("unable to open file");
        }else{
                printf("true... \n");
        }

        do{
                ch = getc(file);
                printf("%c",ch);
        }while(ch != EOF);

        fclose(file);
        printf("\n");
        return 0;
}
~      
