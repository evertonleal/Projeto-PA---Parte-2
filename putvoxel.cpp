#include "putvoxel.h"

putvoxel::putvoxel(int , int y_e, int z_e, float r_e, float g_e, float b_e, float a_e){

    x = x_e;
    y = y_e; 
    z = z_e;
    r = r_e; 
    g = g_e; 
    b = b_e; 
    a = a_e;

}

putvoxel::~putvoxel(){

}

void putvoxel::draw(Sculptor &t){

 t.setColor(r,g,b,a);
 t.putVoxel(x,y,z);

}

