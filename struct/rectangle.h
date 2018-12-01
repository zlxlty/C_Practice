#ifndef _RECT_H_
#define _RECT_H_

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

typedef struct point{
    int x;
    int y;
} Point;

typedef struct rectangle{
    Point pmin;
    Point pmax;
} Rect;

double dist(Point, Point);

Point makepoint(int, int);

Rect canonrect(Rect);

#endif
