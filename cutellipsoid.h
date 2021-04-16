#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

class cutellipsoid : public FiguraGeometrica{

protected:
    int xcenter, ycenter, zcenter, rx, ry, rz;

public:
    cutellipsoid(int x_center, int y_center, int z_center, int rx_e, int ry_e, int rz_e);
    void draw(Sculptor &t);
    ~cutellipsoid();

};

#endif
