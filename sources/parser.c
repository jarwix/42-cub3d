/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:50:28 by lpadisha          #+#    #+#             */
/*   Updated: 2020/09/04 15:50:32 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../get_next_line/get_next_line.h"

 void       parsing_res(char *line)
{
    int     i;

    i = 1;
    while (line[++i])
    {

    }
}

int         ft_srav(int c)
{
     if (c == '\t' || c == '\f' || c == '\v' || c == ' ' || c = '\r')
         return (1);
     else
         return (0);
}

char        *parsing_line(int m, char *line)
{
    if (m >= 1) && (m <= 3)
        i = 2;
    else
        i = 1;
    while (ft_srav(line[i]))
        i++;
    i--;
    while (line[++i])
    {
       if (line[i] == 
    }
}

char parse_text(char *line)
{
    if (line[0] == 'R') && (line[1] == ' ')
        error_name = parsing_res(line);
    if (line[0] == 'N') && (line[1] == 'O') && (line[2] == ' ')
        error_name = parsing_line(1, line);
    if (line[0] == 'S') && (line[1] == 'O') && (line[2] == ' ')
        error_name = parsing_line(2, line);
    if (line[0] == 'W') && (line[1] == 'E') && (line[2] == ' ')
        error_name = parsing_line(3, line);
    if (line[0] == 'E') && (line[1] == 'A') && (line[2] == ' ')
        error_name = parsing_line(4, line);
    if (line[0] == 'S') && (line[1] == ' ')
        error_name = parsing_line(5, line);
    if (line[0] == 'F') && (line[1] == ' ')
        error_name = parsing_color(1, line);
    if (line[0] == 'C') && (line[1] == ' ')
        error_name = parsing_color(1, line);

}

int main(int argc, char **argv)
{
   int j;
   int fd = open(argv[1], O_RDONLY);
   char *line = NULL;
   t_list *head = NULL;

   while(j = get_next_line(fd, &line) > 0)
   {
        if (parse_text(line) != "SUCCESS")
       {
            return (FAILURE);
       }
       free(line);
   }
   get_next_line(fd, &line);
   if (parse_text(line) != SUCCES)
       return (FAILURE);
   free(line);
}
