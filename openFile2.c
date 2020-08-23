#include <stdio.h>

int main(){

        FILE *file;

        file = fopen("yakup.txt","r");

        if(file == NULL){
                printf("file could not be opened");
        }else{
                printf("file opened...");
                fclose(file);
        }

        return 0;
}
