#include <fcntl.h>
#include "../get_next_line/get_next_line.h"
int main(int argc, char **argv)
{
   int fd = open(argv[1], O_RDONLY);
   char *line = NULL;
   t_list *head = NULL;

   while(get_next_line(fd, &line) > 0)
   {

   }
   get_next_line(fd, &line)
}