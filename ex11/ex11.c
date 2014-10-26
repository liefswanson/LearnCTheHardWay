#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
  int i = argc-1;

  while(i >= 0) {
	printf("arg %d %s\n", i, argv[i]);
	i--;
  }

  char *states[] = {
	"California",
	"Oregon",
	"Washington",
	"Texas"
  };


  int num_states = (int) (sizeof(states)/sizeof(char *));

  states[0] = argv[1];
  states[1] = argv[2];
  i = 1;
  while (i < argc && i <= num_states) {
	states[i-1] = argv[i];
	//this does not actually copy the strings
	//it copies the pointer address
	//it is not actually possible to copy into the strings defined in states,
	//as far as I can tell
	//this may be that the strings are read-only as they are defined at compile time?
	//strcpy(states[i-1],argv[i]);
	i++;
  }

  i=num_states-1;

  while (i >= 0) {
	printf("state %d: %s\n", i, states[i]);
	i--;
  }
  
  return 0;
}
