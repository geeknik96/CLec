#ifndef C_EXAMPLES_POINT_H
#define C_EXAMPLES_POINT_H

struct Point {
    float x;
    float y;
};

struct Vector {
    float dx;
    float dy;
};

struct Rect {
    struct Point p1;
    struct Point p2;
};

float area(const struct Rect *rect);

struct Vector make_vector(const struct Point *p1, const struct Point *p2);

void add(struct Vector *result_vector, const struct Vector *vector);
void sub(struct Vector *result_vector, const struct Vector *vector);

float myabs(float x);

void print_vector(const struct Vector *vector);
void print_point(const struct Point *point);
void print_rect(const struct Rect *rect);

#endif //C_EXAMPLES_POINT_H
