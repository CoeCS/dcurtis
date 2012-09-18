#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int childpid;
  int i;
  char *name;
  if( (childpid = fork()) > 0 )
  {
    // parent

    name = "Parent";
  } else
  {
    // child

    name = "Child";
  }

  for(i=0; i < 100000; i++)
  {
    printf("%s %d\n", name, i);
  }
}
