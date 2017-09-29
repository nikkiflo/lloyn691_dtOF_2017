#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    p.load("p.jpg");
    change.r = 255;
    change.b = 68;
    change.g = 70;
    //color = ofColor(change.r, change.g, change.b);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    change.r = 255-ofGetMouseX();
    change.b = 68-ofGetMouseY();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    p.draw(0,0,ofGetWidth(), ofGetHeight());
    ofSetColor(ofColor(change.r, change.g, change.b));
    //ofDrawCircle(360, 415, 60);
    //ofDrawCircle(530, 415, 60);
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
