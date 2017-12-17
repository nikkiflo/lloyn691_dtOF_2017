#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    words.push_back("enslaved");
    words.push_back("servitude");
    words.push_back("wrong");
    words.push_back("criminal");
    words.push_back("damned");
    words.push_back("tortured");
    words.push_back("worthless");
    words.push_back("forgotten");
    words.push_back("sinful");
    
    //person.load("person.png");
    
    font.load("LeagueSpartan-Bold.otf",24);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int posx, posy;
    posx = 100;
    posy = 100;
    
    //ofDrawBitmapString("wrong", 100, 100);
    
    font.drawString("wrong", 100, 100);
    
        
       // person.draw(0,0);
        
        
        
    
    
    
    

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
