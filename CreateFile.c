#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){

	int file = creat("yakup.txt",O_CREAT);

	if(file == -1){
		printf("error...");
	}else{
		printf("file created");
	}

	return 0;
}
