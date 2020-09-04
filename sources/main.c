/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:31:57 by lpadisha          #+#    #+#             */
/*   Updated: 2020/09/04 15:50:42 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void init_all()
{
    g_model.res_w = -1;
    g_model.res_h = -1;
    g_model.no_path = NULL;
    g_model.so_path = NULL;
    g_model.we_path = NULL;
    g_model.ea_path = NULL;
    g_model.s_path = NULL;
    g_model.f_one = -1;
    g_model.f_two = -1;
    g_model.f_three = -1;
    g_model.c_one = -1;
    g_model.c_two = -1;
    g_model.c_three = -1;
}
int main(int argc, char **argv)
{
    init_all();
    check_arg(argc, argv);
    check_cub();
    check_map(#name_map);
    ini


}
