#include "putellipsoid.h"

putellipsoid::putellipsoid(int x_center, int y_center, int z_center, int rx_e, int ry_e, int rz_e, float r_e, float g_e, float b_e, float a_e){

    xcenter = x_center;
    ycenter = y_center;
    zcenter = z_center;
    rx = rx_e;
    ry = ry_e;
    rz = rz_e;
    r = r_e;
    g = g_e;
    b = b_e;
    a = a_e;

}

putellipsoid::~putellipsoid(){

}

void putellipsoid::draw(Sculptor &t){

    t.setColor(r, g, b, a);
    for(int i = xcenter-rx; i <= xcenter+rx; i++){
        for(int j = ycenter-ry; j <= ycenter+ry; j++){
            for(int k = zcenter-rz; k <= zcenter+rz; k++){
                if((((i - xcenter)*(i - xcenter))/(float)(rx*rx) + ((j - ycenter)*(j - ycenter))/(float)(ry*ry) + ((k - zcenter)*(k - zcenter))/(float)(rz*rz)) <= 1 ){
                    t.putVoxel(i, j, k);
                }
            }
        }
    }
}
