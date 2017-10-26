//
//  Moon.cpp
//  Lloyd_Week 06 Planets
//
//  Created by Nicole Lloyd on 10/12/17.
//
//


#include "ofMain.h"
#include "Moon.hpp"
#include "Planet.hpp"

Moon :: Moon(){
    xOrig = Planet().posx;
    yOrig = Planet().posy;
    

    
    radius = 40;
    

}

Moon :: Moon(float angle, float distance){
    //angle = ofRandom(1.5,6.5);

}

void Moon:: update(){

    posx = xOrig + dist * cos(angle);
    posy = yOrig + dist * sin(angle);
    
    angle = ofGetElapsedTimef()*speed;

}

void Moon:: draw(){

    ofCircle(posx, posy, radius);

}
