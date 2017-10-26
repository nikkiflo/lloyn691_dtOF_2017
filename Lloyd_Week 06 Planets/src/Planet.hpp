//
//  Planet.hpp
//  Lloyd_Week 06 Planets
//
//  Created by Nicole Lloyd on 10/12/17.
//
//

#pragma once
#include "ofMain.h"


class Planet{

public:
    Planet();
    ~Planet(){}
    
    void update();
    void draw();
    
    int posx;
    int posy;
    int radius;
    


};
