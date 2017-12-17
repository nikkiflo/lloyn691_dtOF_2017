//
//  Ball.cpp
//  midtermPractice
//
//  Created by Nicole Lloyd on 10/26/17.
//
//

#include "Ball.hpp"

Ball::Ball(){

    pos.set(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
    
    lastUpdate = ofGetElapsedTimef();
    offset = ofRandom(0, ofGetWidth());
    size = 3.5;
    
}


void Ball::update(float vol){
    
    speed = vol;

    pos.x = ofMap( ofNoise( ofGetElapsedTimef()*speed, -1000 + offset), 0, 1, 0, ofGetWidth());
    pos.y = ofMap( ofNoise( ofGetElapsedTimef()*speed, 1000 + offset), 0, 1, 0, ofGetHeight());
    con.x = pos.x;
    con.y = pos.y;

}

void Ball:: applyForce(ofVec2f force){
    
    pos.x += force.x;
    pos.y += force.y;

}


void Ball::draw(){
    
    ofDrawCircle(pos.x, pos.y, size);

}
