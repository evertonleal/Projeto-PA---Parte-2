#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

class PutBox : public FiguraGeometrica{

protected:
    int x0, x1, y0, y1, z0, z1;
    float r, g, b, a;

public:
    putbox(int x0_e,int x1_e,int y0_e,int y1_e,int z0_e,int z1_e,float r_e,float g_e,float b_e,float a_e);
    ~putbox();
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
