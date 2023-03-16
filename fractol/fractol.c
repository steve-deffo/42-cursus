/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:56:49 by desteve           #+#    #+#             */
/*   Updated: 2023/03/11 17:10:22 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "fractol.h"

void	init_values(t_data *img)
{
	img->width = 600;
	img->height = 600;
	img->base_color = 0x387575a3;
	img->flag = 0;
	img->zoom = 1;
	img->x_move = 0;
	img->y_move = 0;
	img->stop = 0;
	img->mlx = mlx_init();
	img->mlx_win = mlx_new_window(img->mlx, img->width, img->height, "fractol");
	img->img = mlx_new_image(img->mlx, img->width, img->height);
	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel,
			&img->line_length, &img->endian);
}

void	init_fractol(t_data *img, int argc, char **argv)
{
	init_values(img);
	if (argc == 3)
	{
		if (error_check(argv[1]) == 0)
			ft_error();
		img->cx = ft_atof(argv[1]);
		if (img->cx < -2.0 || img->cx > 2.0)
			ft_error();
		if (error_check(argv[2]) == 0)
			ft_error();
		img->cy = ft_atof(argv[2]);
		if (img->cy < -2.0 || img->cy > 2.0)
			ft_error();
		img->flag = 0;
	}
	else if (argc == 2 && ft_strcmp(argv[1], "1") == 0)
		img->flag = 1;
	else if (argc == 2 && ft_strcmp(argv[1], "2") == 0)
		img->flag = 2;
	else
		ft_error();
}

void	visualize(t_data *img)
{
	if (img->flag == 0)
		show_julia(img);
	else if (img->flag == 1)
		show_mandelbrot(img);
	else if (img->flag == 2)
		show_tricorn(img);
}

int	main(int argc, char **argv)
{
	t_data	img;

	if (argc > 1 && argc <= 3)
	{
		init_fractol(&img, argc, argv);
		visualize(&img);
		mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, 0, 0);
		mlx_hook(img.mlx_win, 2, 5, keypad, &img);
		mlx_mouse_hook(img.mlx_win, mouse, &img);
		mlx_hook(img.mlx_win, 6, 1L < 6, mouse_julia, &img);
		mlx_hook(img.mlx_win, 17, 1L << 17, ft_close, 0);
		mlx_loop(img.mlx);
	}
	else
		ft_error();
	return (0);
}
