#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

class putsphere : public FiguraGeometrica{

protected:
    int xcenter, ycenter, zcenter, radius;
    float r, g, b, a;

public:
    putsphere(int x_center, int y_center, int z_center, int radius_, float r_e, float g_e, float b_e, float a_e);
    ~putsphere();
    void draw(Sculptor &t);

};

#endif // PUTSPHERE_H
