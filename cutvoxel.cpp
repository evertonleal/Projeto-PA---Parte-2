#include "cutvoxel.h"

cutvoxel::cutvoxel(int x_e,int y_e,int z_e){
    x = x_e;
    y = y_e;
    z = z_e;
}
cutvoxel::~cutVoxel(){

}

void cutvoxel::draw(Sculptor &t){
    t.cutVoxel(x, y, z);
}
