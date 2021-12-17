# get_next_line

Codam [42 Network] project: the aim of this project is to code a function that reads from a file descriptor and returns a line ending with a newline. The implemented bonus requires you to manage reading from multiple file descriptors without losing the reading thread on each of the descriptors.
<br/><br/>

## Instructions
- write a main such as the below in order to read from a file
```C
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  char  *line;
  int   fd;
  int   ret;
  
  line = NULL;
  fd = open("file.txt", O_RDWR);
  ret = 1;
  while (ret > 0)
  {
    ret = get_next_line(fd, &line);
    printf("line = %s\n", line);
    free(line);
  }
  close(fd);
  return(0);
}
```
- compile with `gcc main.c get_next_line.c get_next_line_utils.c`
- run `a.out`
<br/><br/>

## Skills
- Unix
- Algorithms & AI
<br/><br/>

## Objectives
- Unix logic

<br/><br/>
