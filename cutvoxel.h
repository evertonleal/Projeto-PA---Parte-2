#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

class cutvoxel : public FiguraGeometrica{

protected:
    int x, y, z;

public:
    cutvoxel(int x_e,int y_e,int z_e);
    ~cutvoxel();
    void draw(Sculptor &t);

};

#endif // CUTVOXEL_H
