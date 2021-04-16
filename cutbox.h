#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

class cutbox : public FiguraGeometrica{

protected:
    int x0, x1, y0, y1, z0, z1;

public:
    cutbox(int x0_e, int x1_e, int y0_e, int y1_e, int z0_e, int z1_e);
    ~cutbox();
    void draw(Sculptor &t);

};

#endif // CUTBOX_H
