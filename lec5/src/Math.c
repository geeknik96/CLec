#include <Math.h>
#include <stdio.h>

float myabs(float x)
{
    return x < 0 ? -x : x;
}

float area(const struct Rect *rect)
{
    const struct Vector vec =
            make_vector(&rect->p1, &rect->p2);
    return myabs(vec.dx * vec.dy);
}

struct Vector make_vector(const struct Point *p1, const struct Point *p2)
{
    const float dx = p1->x - p2->x;
    const float dy = p1->y - p2->y;
    struct Vector vector = {dx, dy};
    return vector;
}

void add(struct Vector *result_vector, const struct Vector *vector)
{
    result_vector->dx += vector->dx;
    result_vector->dy += vector->dy;
}

void sub(struct Vector *result_vector, const struct Vector *vector)
{
    result_vector->dx -= vector->dx;
    result_vector->dy -= vector->dy;
}

void print_vector(const struct Vector *vector)
{
    printf("Vector(%f; %f)", vector->dx, vector->dy);
}

void print_point(const struct Point *point)
{
    printf("Point(%f; %f)", point->x, point->y);
}

void print_rect(const struct Rect *rect)
{
    printf("Rect(");
    print_point(&rect->p1);
    printf("; ");
    print_point(&rect->p2);
    printf(")");
}
