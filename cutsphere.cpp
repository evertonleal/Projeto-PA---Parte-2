#include "cutsphere.h"

cutsphere::cutsphere(int x_center, int y_center, int z_center, int radius_){

    xcenter = x_center;
    ycenter = y_center;
    zcenter = z_center;
    radius = radius_;

}

cutsphere::~cutsphere(){

}

void cutsphere::draw(Sculptor &t){

    for(int i = xcenter-radius; i<=xcenter+radius; i++){
        for(int j = ycenter-radius; j<=ycenter+radius; j++){
            for(int k = zcenter-radius; k<=zcenter+radius; k++){
                if(((i - xcenter)*(i - xcenter) + (j - ycenter)*(j - ycenter) + (k - zcenter)*(k - zcenter)) <= radius*radius ){
                    t.cutVoxel(i, j, k);
                }
            }
        }
    }
}
