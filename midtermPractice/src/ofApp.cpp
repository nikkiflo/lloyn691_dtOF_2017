#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    num = 100;
    for(int i = 0; i < num; i++){
        Ball temp;
        balls.push_back(temp);
        
    }
    color = ofColor(255,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0 ; i < balls.size(); i++) {
        //balls[i].applyForce(ofVec2f(ofNoise(balls[i].xpos, balls[i].ypos)));
        balls[i].update();
        cout << "position" <<i<<": "<<balls[i].xpos << ", "<< balls[i].ypos<< endl;

    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(color);
    for (int i = 0 ; i < balls.size(); i++) {
        balls[i].draw();
    }
    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    for (int i = 0; i < balls.size(); i++) {
        float x = ofMap(mouseX, 0, ofGetWidth(), 0 , 255);
        float y = ofMap(mouseX, 0, ofGetHeight(), 0, 255);
        color = ofColor(255-x,y,x);
//        balls[i].applyForce(ofVec2f(x, y));
        
    }
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
