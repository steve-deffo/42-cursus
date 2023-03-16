/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:33:15 by desteve           #+#    #+#             */
/*   Updated: 2023/03/11 17:10:27 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "fractol.h"

/*
	formular f(x) = z2 + c
*/
static	void	algorithm(t_data *img, int w, int h)
{
	double	x;
	double	y;

	x = 0.0;
	y = 0.0;
	img->xtemp = 0.0;
	img->iteration = 0;
	img->max_iteration = 500;
	img->offset = 0.05;
	while (x * x + y * y <= 2 * 2 && img->iteration < img->max_iteration)
	{
		img->xtemp = x * x - y * y + compute_x0(img, w);
		y = 2.0 * x * y + compute_y0(img, h);
		x = img->xtemp;
		img->iteration += 1;
	}
	if (img->iteration == img->max_iteration)
		my_mlx_pixel_put(img, w, h, img->base_color);
	else
		my_mlx_pixel_put(img, w, h, 0xeb34cc * (img->iteration >> 4));
	w++;
}

void	show_mandelbrot(t_data *img)
{
	int	h;
	int	w;

	h = 5;
	while (h < img->height)
	{
		w = 5;
		compute_y0(img, h);
		while (w < img->width)
		{
			algorithm(img, w, h);
			w++;
		}
		h++;
	}
}
