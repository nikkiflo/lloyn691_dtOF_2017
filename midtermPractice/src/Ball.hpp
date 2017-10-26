//
//  Ball.hpp
//  midtermPractice
//
//  Created by Nicole Lloyd on 10/26/17.
//
//


#include "ofMain.h"
#pragma once
#include "Ball.hpp"

class Ball{
public:
    
    Ball();
    ~Ball(){}
    void update();
    void draw();
    void applyForce(ofVec2f force);



    float radius;
    float xpos;
    float ypos;
    
    float lastUpdate;
    


};
























































































































