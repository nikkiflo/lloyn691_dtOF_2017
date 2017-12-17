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
    void update(float vol);
    void draw();
    void applyForce(ofVec2f force);
    



    float radius;
    ofVec3f pos;
    
    float lastUpdate;
    float offset;
    
    ofVec3f con;
    float size;
    float speed;
    


};
























































































































