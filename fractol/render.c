/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:33:08 by desteve           #+#    #+#             */
/*   Updated: 2023/03/11 17:10:31 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "fractol.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *) dst = color;
}

double	compute_x0(t_data *img, int w)
{
	double	result;

	result = (w - img->width / 2)
		/ (0.25 * img->zoom * img->width) + img->x_move;
	return (result);
}

double	compute_y0(t_data *img, int h)
{
	double	result;

	result = (h - img->height / 2)
		/ (0.25 * img->zoom * img->height) + img->y_move;
	return (result);
}

void	ft_error(void)
{
	write(1, "Invalid Arguments\n", 18);
	write(1, "For Mandelbrot set: Enter => ./fractol 1\n", 41);
	write(1, "For Julia set: Enter => ./fractol -0.8 0.156\n", 45);
	write(1, "For Tricorn set: Enter => ./fractol 2\n", 38);
	exit(1);
}

int	ft_close(void)
{
	exit (1);
	return (0);
}
