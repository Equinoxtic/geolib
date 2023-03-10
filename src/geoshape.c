#include<string.h>
#include "./geoshape.h"
#include "./geomath.h"
#include "./geocore.h"
#include "./geosimpcore.h"



// --------------------------------------------



void set_square(Square *_square, 
				float n_side)
{
	if (is_posf(n_side)) _square->side = n_side;
} // Square

void set_rectangle(Rectangle *_rect,
				   float n_len,
				   float n_wid)
{
	if (is_posf(n_len) && is_posf(n_wid))
	{
		_rect->length = n_len;
		_rect->width = n_wid;
	}
} // Rectangle

void set_circle(Circle *_circle,
				float n_radius)
{
	if (is_posf(n_radius)) _circle->radius = n_radius;
} // Circle

void set_triangle(Triangle *_triangle,
				  float n_base,
				  float n_height)
{
	if (is_posf(n_base) && is_posf(n_height))
	{
		_triangle->base = n_base;
		_triangle->height = n_height;
	}
} // Triangle

void set_trapezoid(Trapezoid *_trapezoid,
				   float n_base,
				   float n_height)
{
	if (is_posf(n_base) && is_posf(n_height))
	{
		_trapezoid->base = n_base;
		_trapezoid->height = n_height;
	}
} // Trapezoid

float square(Square *_square)
{
	float res = 0;
	
	if (is_posf(_square->side))
		res = area_square(_square->side);

	_square->area = res;

	return res;
}

float square_perim(Square *_square)
{
	float res = 0;
	
	if (is_posf(_square->side))
		res = perim_square(_square->side);

	_square->perim = res;
	
	return res;
}

float rectangle(Rectangle *_rect)
{
	float res = 0;

	if (is_posf(_rect->length) && is_posf(_rect->width))
		res = area_rect(_rect->length, _rect->width);
	
	_rect->area = res;

	return res;
}

float rectangle_perim(Rectangle *_rect)
{
	float res = 0;

	if (is_posf(_rect->length) && is_posf(_rect->width))
		res = perim_rect(_rect->length, _rect->width);

	_rect->perim = res;

	return res;
}

float circle(Circle *_circle)
{
	float res = 0;

	if (is_posf(_circle->radius))
		res = area_circle(_circle->radius);

	_circle->area = res;

	return res;
}

float circle_circ(Circle *_circle)
{
	float res = 0;

	if (is_posf(_circle->radius))
		res = circ_circle(_circle->radius);

	_circle->circ = res;

	return res;
}

float triangle(Triangle *_triangle)
{
	float res = 0;

	if (is_posf(_triangle->base) && is_posf(_triangle->height))
		res = area_triangle(_triangle->base, _triangle->height);

	_triangle->area = res;

	return res;
}

float trapezoid(Trapezoid *_trapezoid)
{
	float res = 0;

	if (is_posf(_trapezoid->base) && is_posf(_trapezoid->height))
		res = area_trapezoid(_trapezoid->base, _trapezoid->height);

	_trapezoid->area = res;

	return res;
}



// --------------------------------------------



void set_dep_triangle(DEP_Triangle *dtriangle,
					  float altitude,
					  float hypotenuse,
					  float base)
{
	if (is_posf(altitude) && is_posf(hypotenuse) && is_posf(base))
	{
		dtriangle->alti = altitude;
		dtriangle->hypo = hypotenuse;
		dtriangle->base = base;
	}
}

void set_dep_rectangle(DEP_Rectangle *drect,
					   float length,
					   float width)
{
	if (is_posf(length) && is_posf(width))
	{
		drect->length = length;
		drect->width = width;
	}
}

void set_parallelg(Parallelogram *parallg,
					float side_a,
					float side_b,
					float para_height)
{
	if (is_posf(side_a) && is_posf(side_b) && is_posf(para_height))
	{
		parallg->_side_a = side_a;
		parallg->_side_b = side_b;
		parallg->_paralg_height = para_height;
	}
}

void set_cube(Cube *cube,
			  float side,
			  float volume)
{
	if (is_posf(side) && is_posf(volume))
	{
		cube->side = side;
		cube->volume = volume;
	}
}

void set_trapezium(Trapezium *trpz,
				   float sidea,
				   float sideb,
				   float distance)
{
	if (is_posf(sidea) && is_posf(sideb) && is_posf(distance))
	{
		trpz->side_a = sidea;
		trpz->side_b = sideb;
		trpz->dist = distance;
	}
}

float dep_triangle_perim(DEP_Triangle *dtriangle)
{
	float res = 0;

	if (is_posf(dtriangle->alti) && is_posf(dtriangle->hypo) && is_posf(dtriangle->base))
		res = perim_dep_triangle(dtriangle->alti, dtriangle->hypo, dtriangle->base);

	dtriangle->perim = res;

	return res;
}

float dep_triangle_area(DEP_Triangle *dtriangle)
{
	float res = 0;

	if (is_posf(dtriangle->alti) && is_posf(dtriangle->base))
		res = area_dep_triangle(dtriangle->alti, dtriangle->base);

	dtriangle->area = res;

	return res;
}

float dep_triangle_height(DEP_Triangle *dtriangle)
{
	float res = 0;
	float new_area = 0;

	if (is_posf(dtriangle->alti) && is_posf(dtriangle->base)) {
		if (dtriangle->area == 0)
			new_area = area_dep_triangle(dtriangle->alti, dtriangle->height);
		else
			new_area = dtriangle->area;
	}

	if (is_posf(new_area) && is_posf(dtriangle->base))
		res = height_dep_triangle(new_area, dtriangle->base);

	dtriangle->height = res;

	return res;
}


float dep_rectangle_perim(DEP_Rectangle *drect)
{
	float res = 0;

	if (is_posf(drect->length) && is_posf(drect->width))
		res = perim_dep_rect(drect->length, drect->width);

	drect->perim = res;

	return res;
}

float dep_rectangle_area(DEP_Rectangle *drect)
{
	float res = 0;

	if (is_posf(drect->length) && is_posf(drect->width))
		res = area_dep_rect(drect->length, drect->width);

	drect->area = res;

	return res;
}

float dep_rectangle_diag(DEP_Rectangle *drect)
{
	float res = 0;

	if (is_posf(drect->length) && is_posf(drect->width))
		res = diag_dep_rect(drect->length, drect->width);

	drect->diag = res;

	return res;
}

float parallelg_perim(Parallelogram *parallg)
{
	float res = 0;
	
	if (is_posf(parallg->_side_a) && is_posf(parallg->_side_b))
		res = perim_paralgram(parallg->_side_a, parallg->_side_b);

	parallg->perim = res;

	return res;
}

float parallelg_area(Parallelogram *parallg)
{
	float res = 0;

	if (is_posf(parallg->base) && is_posf(parallg->height))
		res = area_paralgram(parallg->base, parallg->height);

	parallg->area = res;

	return res;
}

float parallelg_height(Parallelogram *parallg)
{
	float res = 0;
	float new_area = 0;
	if (is_posf(parallg->base) && is_posf(parallg->height)) {
		if (parallg->area == 0)
			new_area = area_paralgram(parallg->base, parallg->height);
		else
			new_area = parallg->area;
	}
	
	if (is_posf(new_area) && is_posf(parallg->base))
		res = height_paralgram(new_area, parallg->base);

	parallg->height = res;

	return res;
}

float parallelg_base(Parallelogram *parallg)
{
	float res = 0;
	float new_area = 0;
	if (is_posf(parallg->base) && is_posf(parallg->height)) {
		if (parallg->area == 0)
			new_area = area_paralgram(parallg->base, parallg->height);
		else
			new_area = parallg->area;
	}

	if (is_posf(new_area) && is_posf(parallg->height))
		res = base_paralgram(new_area, parallg->height);

	parallg->base = res;

	return res;
}

float cube_area(Cube *cube)
{
	float res = 0;

	if (is_posf(cube->side))
		res = area_cube(cube->side);

	cube->area = res;
	
	return res;
}

float cube_volume(Cube *cube)
{
	float res = 0;
	
	if (is_posf(cube->side))
		res = volume_cube(cube->side);
	
	cube->volume = res;
	
	return res;
}

float cube_edge(Cube *cube)
{
	float res = 0;
	
	if (is_posf(cube->volume))
		res = edge_cube(cube->volume);
	
	cube->side = res;
	
	return res;
}

float cube_sdiag(Cube *cube)
{
	float res = 0;
	
	if (is_posf(cube->side))
		res = sdiag_cube(cube->side);
	
	cube->side = res;
	
	return res;
}

float trapezium_area(Trapezium *trpz)
{
	float res = 0;

	if (is_posf(trpz->side_a) && 
		is_posf(trpz->side_b) && 
		is_posf(trpz->dist))
	{
		res = area_trpz(trpz->side_a, trpz->side_b, trpz->dist);
	}

	trpz->area = res;

	return res;
}

float trapezium_height(Trapezium *trpz)
{
	float res = 0;
	float new_area = 0;
	if (is_posf(trpz->side_a) && is_posf(trpz->side_b) && is_posf(trpz->dist)) {
		if (trpz->area == 0)
			new_area = area_trpz(trpz->side_a, trpz->side_b, trpz->dist);
		else
			new_area = trpz->area;
	}

	if (is_posf(new_area) && is_posf(trpz->side_a) && is_posf(trpz->side_b))
		res = height_trpz(new_area, trpz->side_a, trpz->side_b);

	trpz->height = res;

	return res;
}

float trapezium_base(Trapezium *trpz)
{
	float res = 0;
	float new_area = 0;
	if (is_posf(trpz->side_a) && is_posf(trpz->side_b) && is_posf(trpz->dist)) {
		if (trpz->area == 0)
			new_area = area_trpz(trpz->side_a, trpz->side_b, trpz->dist);
		else
			new_area = area_trpz(trpz->side_a, trpz->side_b, trpz->dist);
	}

	if (is_posf(new_area) && is_posf(trpz->dist) && is_posf(trpz->side_a))
		res = base_trpz(new_area, trpz->dist, trpz->side_a);

	trpz->base = res;

	return res;
}
