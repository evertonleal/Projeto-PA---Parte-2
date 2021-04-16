#include "cutellipsoid.h"

cutellipsoid::cutellipsoid(int x_center, int y_center, int z_center, int rx_e, int ry_e, int rz_e){

    xcenter = x_center;
    ycenter = y_center;
    zcenter = z_center;
    rx = rx_e;
    ry = ry_e;
    rz = rz_e;

}

cutellipsoid::~CutEllipsoid(){

}

void cutellipsoid::draw(Sculptor &t){

    for(int i = xcenter-rx; i<=xcenter+rx; i++){
        for(int j = ycenter-ry; j<=ycenter+ry; j++){
            for(int k = zcenter-rz; k<=zcenter+rz; k++){
                if( (((i - xcenter)*(i - xcenter))/(float)(rx*rx) + ((j - ycenter)*(j - ycenter))/(float)(ry*ry) + ((k - zcenter)*(k - zcenter))/(float)(rz*rz)) <= 1 ){
                    t.cutVoxel(i, j, k);
                }
            }
        }
    }
}
