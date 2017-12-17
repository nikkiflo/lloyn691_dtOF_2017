#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    num = 100;
    
    for(int i = 0; i < num; i++){
        Ball temp;
        balls.push_back(temp);
        
    }
    
    soundStream.printDeviceList();
    int bufferSize = 256;
    
soundStream.setup(this, 0, 2, 44100, bufferSize, 4);

    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0 ; i < balls.size(); i++) {
        //balls[i].applyForce(ofVec2f(ofNoise(balls[i].xpos, balls[i].ypos)));
        balls[i].update(vol);
        cout << "position" <<i<<": "<<balls[i].pos.x << ", "<< balls[i].pos.y<< endl;
        

    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(color);
    for (int i = 0 ; i < balls.size(); i++) {
        balls[i].draw();
        makeConnection();
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
   // for (int i = 0; i < balls.size(); i++) {
    //    float x = ofMap(mouseX, 0, ofGetWidth(), 0 , 255);
  //      float y = ofMap(mouseX, 0, ofGetHeight(), 0, 255);
 //       color = ofColor(255-x,y,x);
//        balls[i].applyForce(ofVec2f(x, y));
        
    //}
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

//--------------------------

void ofApp::makeConnection(){
    //runs through particles and checks their distance. Paricles within a certain proximinity will connect with a line
    for (int i = 0; i < balls.size(); i++) {
        for (int j = 0; j < balls.size(); j++) {
            if (ofDist(balls[i].pos.x, balls[i].pos.y, balls[j].pos.x, balls[j].pos.y) < 100){
                ofDrawLine(balls[j].pos.x, balls[j].pos.y, balls[i].pos.x, balls[i].pos.y);
        
        }
    
    }
    }

}

//---------------------------------------
void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    vol = 0.0;
    
    // samples are "interleaved"
    int numCounted = 0;
    
    //lets go through each sample and calculate the root mean square which is a rough way to calculate volume
    for (int i = 0; i < bufferSize; i++){
        float left =	input[i*2]*0.5;
        float right = input[i*2 + 1]*0.5;
        vol += left* left;
        vol += right * right;
        numCounted+=2;
    }
    
    //this is how we get the mean of rms :)
    vol = (float)numCounted;
    
    // this is how we get the root of rms :)
    vol = sqrt( vol );
    
    vol = ofMap(vol, 0, .17, 0, 1,true);
}



