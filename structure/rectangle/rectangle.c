#include "rectangle.h"

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

double dist(Point p1, Point p2)
{
    return sqrt((double)p1.x * p2.x + (double)p1.y * p2.y);
}

Point makepoint(int x, int y)
{
    Point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

Rect canonrect(Rect r)
{
    Rect temp;
    temp.pmin.x = min(r.pmin.x, r.pmax.x);
    temp.pmin.y = min(r.pmin.y, r.pmax.y);
    temp.pmax.x = max(r.pmin.x, r.pmax.x);
    temp.pmax.y = max(r.pmin.y, r.pmax.y);

    return temp;
}

#ifdef DEBUG
    int main(int argc, char const *argv[]){
        printf("Hello\n");
        return 0;
    }
#endif
