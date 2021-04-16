#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

class cutsphere : public FiguraGeometrica{

protected:
    int xcenter, ycenter, zcenter, radius;

public:
    cutsphere(int x_center, int y_center, int z_center, int radius_);
    ~cutsphere();
    void draw(Sculptor &t);

};

#endif // CUTSPHERE_H
