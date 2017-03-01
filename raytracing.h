#ifndef __RAYTRACING_H
#define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

typedef struct __RAYTRACING_ITEM {
    double *u, *v, *w;
    uint8_t *pixels;
    double *background_color;
    rectangular_node rectangulars;
    sphere_node spheres;
    light_node lights;
    const viewpoint *view;
    int factor;
    int from_height, to_height;
    int height;
    int width;
} ritem;

void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);

#endif
