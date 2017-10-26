#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    radius = 0;
    
    ofSetCircleResolution(120);
    ofSetBackgroundColor(c);
    
    //radius2 = radius2 + 0.8;
    
     //posx = ofRandom(0, ofGetWidth());
     //posy = ofRandom(0, ofGetHeight());
    
    c.r = 255;
    c.b = 64;
    c.g = 84;
    ofSetColor(c);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    radius = radius + 0.4;
    radius2 = radius2 + 0.6;
    radius3 = radius3 + 0.8;
    
    
    if(radius > ofGetWidth()/4){
    
        radius = 0;
    }
    
    
    if(radius2 > ofGetWidth()/4){
        
        radius2 = 0;
    }
    
    if(radius3 > ofGetWidth()/4){
        
        radius3 = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofNoFill();
    ofSetLineWidth(10);
    ofEnableSmoothing();
    
    ofSetColor (255-radius,255-radius,255-radius);
    ofDrawCircle(posx, posy, radius);
    
    ofSetColor (255-radius2,255-radius2,255-radius2);
    ofDrawCircle(posx, posy, radius2);
    
    ofSetColor (255-radius3,255-radius3,255-radius3);
    ofDrawCircle(posx, posy, radius3);
    
    

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
    
    
    posy = y;
    posx = x;

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


