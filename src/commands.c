#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "commands.h"
#define MAX_BUFF 1024
int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  else
	  chdir(argv[1]);
	  return 0;
  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  else{
	  
	  char buf[MAX_BUFF];
	  getcwd(buf,MAX_BUFF);
	  if(buf!=NULL){
		  printf("%s\n",buf);
		  return 0;
	  }
	 else return -1;	 
	 }
  // TODO: Fill it!

}

int validate_cd_argv(int argc, char** argv) {

	if(strcmp(argv[0],"cd")!=0||argc!=2) return 0;
	return 1;
}

int validate_pwd_argv(int argc, char** argv) {
	
	if(strcmp(argv[0],"pwd")!=0||argc!=1) return 0;
// TODO: Fill it!
  return 1;
}
