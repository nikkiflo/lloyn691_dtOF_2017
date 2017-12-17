#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

//--------------------------------------------------------------
void ofApp::setup() {
	
	// load the "haar cascade" object description file for
	// default frontal faces:
	finder.setup("haar_cascades/haarcascade_frontalface_default.xml");
	
	finder.setPreset(ObjectFinder::Preset::Fast);
	// also ACCURATE or SENSITIVE

	
	cam.setup(640, 480);
    
    font.load("LeagueSpartan-Bold.otf",24);
    font2.load("LeagueSpartan-Bold.otf",20);
    font3.load("LeagueSpartan-Bold.otf",30);
    
    
    count = 0;
    
    serial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();
    
    int baud = 9600;
    serial.setup(1, baud);
    
    verdict = false;
    
    // wording positioning
    wpos.set(100,100);
    wpos2.set(wpos.x + 150, wpos.y + 100);
    wpos3.set(wpos.x + 60, wpos.y + 200);
    wpos4.set(wpos.x + 250, wpos.y + 300);
	
}

//--------------------------------------------------------------
void ofApp::update() {
	cam.update();
	if(cam.isFrameNew()) {
		
		// update face finder / tracker
		finder.update(cam);
    
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
    
    if(count < 1){
        startScreen();
    }
    
	
    if(count > 0){
	ofSetColor(255);
	
	cam.draw(0, 0);
        ofPopMatrix();
        ofSetColor(255, 0, 0);
        ofSetLineWidth(15);
        ofDrawLine(lposx1, lposy1, lposx2, lposy2);
        lposy1 += 10;
        lposy2 += 10;
        ofPushMatrix();

	
	for(int i = 0; i < finder.size(); i++) {
		
		ofRectangle face = finder.getObjectSmoothed(i);
		// or get unsmoothed tracker: getObject(i)
		
		
		float hue = (float)i/finder.size() * 255.f;
		ofSetColor( ofColor::fromHsb(hue,255,255));

        
        posx = face.getWidth()/2-50;
        posy = face.getHeight()/2-80;
        posx2 = face.getWidth()/2-80;
        
    
		
		
		// draw verdict
        
        if(serial.available() > 0){
            myData = serial.readByte();
            cout << myData <<endl;
        
            if(myData > 60){
                
                verdict = true;}
        }
        if (verdict && click && count >= 2){
                ofPushMatrix();
                        ofTranslate(face.getPosition());
                        font.drawString("GUILTY", posx, posy);
                        ofPopMatrix();
            
            if (count >= 3){
                font.drawString("DAMNED", wpos.x,wpos.y);
                font.drawString("WRONG", wpos2.x,wpos2.y);
                font.drawString("WORTHLESS", wpos3.x,wpos3.y);
                font.drawString("CRIMINAL", wpos4.x,wpos4.y);
            }
                
            
        }else if(verdict == false && click && count >=2){
            ofPushMatrix();
            ofTranslate(face.getPosition());
            font2.drawString("INNOCENT", posx2, posy);
            ofPopMatrix();
        
            
            if (count >= 3){
                font3.drawString("RIGHT", wpos.x, wpos.y);
                font3.drawString("ABSOLVED", wpos2.x, wpos2.y);
                font3.drawString("FREE", wpos3.x, wpos3.y);
                font3.drawString("WORTHY", wpos4.x, wpos4.y);
            }
            
        }
                
                
        
        }
		

	}
}



//--------------------------------------------------------------


void ofApp::startScreen(){
    
    ofPushMatrix();
    ofSetColor(10, 10, 10);
    ofSetLineWidth(2);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255);
    font.drawString("Are you innocent or guilty?", ofGetWidth()/2-200, ofGetHeight()/3);
    
    
    ofNoFill();
    ofDrawRectangle(ofGetWidth()/2-rectWidth/2, 2*(ofGetHeight()/3), rectWidth, rectHeight);
    
    ofPopMatrix();
    
    font.drawString("Verdict",ofGetWidth()/2-rectWidth/2 + 30, 2*(ofGetHeight()/3)+ 50-15);
    
    
}



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

     count ++;
    if (count == 2){
        click = true;
    }
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
