#include "putbox.h"

putbox::putbox(int x0_e,int x1_e,int y0_e,int y1_e,int z0_e,int z1_e,float r_e,float g_e,float b_e,float a_e){

    x0 = x0_e;
    x1 = x1_e;
    y0 = y0_e;
    y1 = y1_e;
    z0 = z0_e;
    z1 = z1_e;
    r = r_e; 
    g = g_e; 
    b = b_e; 
    a = a_e;

}

putbox::~putbox(){

}

void putbox::draw(Sculptor &t){

    t.setColor(r,g,b,a);
    for (int i = x0; i<x1; i++){
        for (int j = y0; j<y1; j++){
            for (int k = z0; k<z1; k++){
                t.putVoxel(i,j,k);
            }
        }
    }
}
