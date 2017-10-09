#include "utils.h"
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 1000
void mysh_parse_command(const char* command,
        int *argc, char*** argv)
{

	
	char* temp;
	
	int count =0;
	
	temp=(char*)malloc(2048);
	strcpy(temp,command);
	char* token=strtok(temp," \n\t");

	(*argv)=(char**)malloc(sizeof(char*)*MAX_SIZE);
	for(int i=0;i<MAX_SIZE;i++){
	
		(*argv)[i]=(char*)malloc(sizeof(char)*MAX_SIZE);
	}
	
	if(token==NULL){
		*argc=1;
		strcpy((*argv)[0],"");
		return;
	}
	else{

	while(token!=NULL){
		strcpy((*argv)[count],token);
		token=strtok(NULL," \n\t");
		count++;
	}
	}
	*argc=count;
	free(temp);


  // TODO: Fill this!
}
