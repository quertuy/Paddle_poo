#ifndef SHAPE_H

#define SHAPE_H

#include <stdint.h>


typedef struct ;

struct Shape {

    float vel_x;
    float vel_y;
    float width;
    float height;
    float x;
    float y;
}Shape;


void Shape_ctor(Shape* const me, float vel_x; float vel_y; float width; float height; float x; float y;
}Shape;);
{

}
void Shape_moveBy(Shape* const me, int16_t dx, int16_t dy);
uint16_t Shape_distanceFrom(Shape const* const me,
    Shape const* other);


#endif
