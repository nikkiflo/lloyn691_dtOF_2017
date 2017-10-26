#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    moon1.dist = 400;
    moon2.dist = moon1.dist + 200;
    moon3.dist = moon2.dist + 200;
    
    moon1.speed = ofRandom(2.,5.);
    moon2.speed = 2.5;
    moon3.speed = 1.5;
}

//--------------------------------------------------------------
void ofApp::update(){

    moon1.update();
    moon2.update();
    moon3.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    planet.draw();
    moon1.draw();
    moon2.draw();
    moon3.draw();
    
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
