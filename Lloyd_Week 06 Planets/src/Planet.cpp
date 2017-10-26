//
//  Planet.cpp
//  Lloyd_Week 06 Planets
//
//  Created by Nicole Lloyd on 10/12/17.
//
//

#include "Planet.hpp"
#include "ofMain.h"

Planet :: Planet(){
    
    posx = ofGetWidth();
    posy = ofGetHeight();
    radius = 70;




}

void Planet::update(){}


void Planet::draw(){

    ofCircle(posx, posy, radius);

}
