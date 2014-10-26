#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %o %d %x miles away\n", distance, distance, distance);
  printf("You have %a levels of power.\n", power);
  printf("You have %e awesome super powers.\n", super_power);
  printf("I have and initial %c.\n", initial);
  printf("I have a first name %s %p.\n", first_name, first_name);
  printf("I have a last name %s %p.\n", last_name, last_name);
  printf("My name is %s %c. %s.\n",
		 first_name, initial, last_name);
  printf("");
  return 0;
}
