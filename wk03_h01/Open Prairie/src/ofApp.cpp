#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    pos = ofVec2f(radius,400);
    acc = ofVec2f(0,0);
    vel = ofVec2f(2,-.5);
    radius = 300;
    pct = .5;
    h = 300;
    p.load("prairie.jpg");
    tw.load("tw.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //vel.y = vel.y * (1.-pct) + ofGetHeight() * pct;
    pos.x += vel.x;
    pos.y -= vel.y;
    
    
    if(pos.y > ofGetHeight() - radius){
    
        vel.y = vel.y * -1;
        
    }
    
    if(pos.y < h){
    
        vel.y = vel.y * -1;
//        h = 400;
    
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofDrawCircle(pos.x, pos.y, radius);
    p.draw(0,0,ofGetWidth(), ofGetHeight());
    tw.draw(pos.x,pos.y, radius, radius);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    vel.x = 10;
    vel.y = -3;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
