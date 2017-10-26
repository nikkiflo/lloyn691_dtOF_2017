//
//  Moon.hpp
//  Lloyd_Week 06 Planets
//
//  Created by Nicole Lloyd on 10/12/17.
//
//


#pragma once
#include "ofMain.h"

class Moon{

public:
    Moon();
    ~Moon(){}
    
    Moon(float angle, float distance);
    void update();
    void draw();
    
    float posx;
    float posy;
    
    float xOrig;
    float yOrig;
    float radius;
    float angle;
    float dist;
    float speed;



};
