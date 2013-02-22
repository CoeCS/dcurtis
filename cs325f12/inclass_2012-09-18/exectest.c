#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
  int childpid;
  printf("About to execute `ls`...\n");
  if( (childpid = fork()) > 0 )
  {
    // parent
    printf("I'm the parent\n");
    printf("child pid: %d\n", childpid);
    waitpid(childpid, 0, 0);
    printf("Parent sees child done.\n");
  } else
  {
    // child
    printf("I'm the child\n");
    execlp("ls", "ls", NULL);
    printf("Child is done executing\n");
  }
  printf("Just executed `ls`.\n");
}
