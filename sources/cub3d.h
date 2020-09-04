/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 15:46:27 by lpadisha          #+#    #+#             */
/*   Updated: 2020/08/30 15:51:33 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTS_CUB3D_H
# define PROJECTS_CUB3D_H
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <math.h>
# include <stdlib.h>

typedef struct      s_pars
{
    int             res_w;
    int             res_h;
    char            *no_path;
    char            *so_path;
    char            *we_path;
    char            *ea_path;
    char            *s_path;
    int             f_one;
    int             f_two;
    int             f_three;
    int             c_one;
    int             c_two;
    int             c_three;
    t_map           *map;
    int             errorint;
}                   t_pars;

typedef struct      s_doublearg
{
    double          x_arg;
    double          y_arg;
}                   t_doublearg;

t_pars              g_model;

#endif
