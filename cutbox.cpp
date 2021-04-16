#include "cutbox.h"

cutbox::cutbox(int x0_e, int x1_e, int y0_e, int y1_e, int z0_e, int z1_e){

    x0 = x0_e; 
    y0 = y0_e; 
    z0 = z0_e;
    x1 = x1_e; 
    y1 = y1_e; 
    z1 = z1_e;

}

cutbox::~cutbox(){

}

void cutbox::draw(Sculptor &t){

  int i, j, k;
  for(i=x0; i<=x1; i++){
    for(j=y0; j<=y1; j++){
      for(k=z0; k<=z1; k++){
        t.cutVoxel(i,j,k);

      }
    }
  }
}
