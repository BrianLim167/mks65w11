#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char **ans;
  ans = (char**) calloc(5, sizeof(char*));
  int i = 0;

  while (line && i<5){
    ans[i] = strsep(&line, " ");
    i++;
  }

  return ans;
}

int main(){
  char line[100] = "ls -a -l";
  char ** args = parse_args( line );
  execvp(args[0], args);
  free(args);

  return(0);
}
