#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

class putvoxel : public FiguraGeometrica{

protected:
    int x, y, z;
    float r, g, b, a;

public:
    putvoxel(int , int y_e, int z_e, float r_e, float g_e, float b_e, float a_e);
    ~putvoxel();

    void draw(Sculptor &t);

};

#endif // PUTVOXEL_H
