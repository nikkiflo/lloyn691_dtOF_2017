//
//  Ball.cpp
//  midtermPractice
//
//  Created by Nicole Lloyd on 10/26/17.
//
//

#include "Ball.hpp"

Ball::Ball(){


    xpos = ofRandom(0, ofGetWidth());
    ypos = ofRandom(0, ofGetHeight());
    lastUpdate = ofGetElapsedTimef();

}
void Ball::update(){
    
//    xpos    = ofMap( ofNoise( (ofGetElapsedTimef()-lastUpdate)/2.0, -1000), 0, 1, 0, ofGetWidth());
//    ypos    = ofMap( ofNoise(( ofGetElapsedTimef()-lastUpdate)/2.0, 1000), 0, 1, 0, ofGetHeight());
    
    //xpos = ofMap( ofNoise( ofGetElapsedTimef()), 0, 1, 0, ofGetWidth());
    
//    xpos    = ofMap( ofNoise( ofGetElapsedTimef()/2.0, -1000), 0, 1, 0, ofGetWidth());
//    ypos    = ofMap( ofNoise( ofGetElapsedTimef()/2.0, 1000), 0, 1, 0, ofGetHeight());
//    
    
    
    xpos = ofMap(ofSignedNoise(ofRandom(-100,100), xpos * 0.1, ofGetElapsedTimef()*0.2),-1,1,xpos - 5,xpos +5);
    ypos = ofMap(ofSignedNoise(ofRandom(-100,100), ypos * 0.1, ofGetElapsedTimef()*0.2),-1,1,ypos -5, ypos +5);
    //ypos = ofMap( ofNoise( ofGetElapsedTimef()), 0, 1, 0, ofGetHeight());
}

void Ball:: applyForce(ofVec2f force){
    xpos+=force.x;
    ypos+=force.y;

}


void Ball::draw(){
    ofDrawCircle(xpos, ypos, 6);

}
