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
    int height;
    int width;
    int *__CURRENT_HEIGHT;
    pthread_mutex_t *_MUTEX;
} ritem;

void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);

#endif
