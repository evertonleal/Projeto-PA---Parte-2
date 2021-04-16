#include "putsphere.h"

putsphere: putsphere(int x_center, int y_center, int z_center, int radius_, float r_e, float g_e, float b_e, float a_e){

    xcenter = x_center;
    ycenter = y_ycenter;
    zcenter = z_center;
    radius = radius_;
    r = r_e;
    g = g_e;
    b = b_e;
    a = a_e;

}

putsphere::~pusphere(){

}

void putsphere::draw(Sculptor &t){

    t.setColor(r, g, b, a);
    for(int i = xcenter-radius; i<=xcenter+radius; i++){
        for(int j = ycenter-radius; j<=ycenter+radius; j++){
            for(int k = zcenter-radius; k<=zcenter+radius; k++){
                if(((i - xcenter)*(i - xcenter) + (j - ycenter)*(j - ycenter) + (k - zcenter)*(k - zcenter)) <= radius*radius){
                    t.putVoxel(i, j, k);
                }
            }
        }
    }
}
