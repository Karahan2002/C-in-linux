#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(){

        int file = open("yakup.txt",O_RDONLY);

        if(file == -1){
                printf("error");
        }else{
                printf("file opened...");
        }
        return 0;
}
