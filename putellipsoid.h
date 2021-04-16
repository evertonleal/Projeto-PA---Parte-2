#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

class putellipsoid : public FiguraGeometrica{

protected:
    int xcenter, ycenter, zcenter, rx, ry, rz;
    float r, g, b, a;

public:
    putellipsoid(int x_center, int y_center, int z_center, int rx_e, int ry_e, int rz_e, float r_e, float g_e, float b_e, float a_e);
    ~putellipsoid();
    void draw(Sculptor &t);

};

#endif // PUTELLIPSOID_H
