#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  // why am i skipping argv[0]
  // because it is the name of the program for it to be able to reference itself
  for(i=1; i<argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {
	"California",
	"Oregon",
	"Washington",
	"Texas"
  };

  //int num_states = 4;
  //fuck that shit zed, magic numbers are not cool
  
  int num_states = (int) (sizeof(states)/sizeof(char *));

  for (i = 0; i < num_states+1; i++) {
	printf("states %d: %s\n", i ,states[i]);
  }

  printf("look I made a change!");  
  return 0;
}
