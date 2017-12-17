// special thanks to Tyler Henry for the example file that made this project possible.




#pragma once

#include "ofMain.h"

#include "ofxOpenCv.h"	// include ofxOpenCv when using ofxCv
#include "ofxCv.h"

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
    
    void startScreen();
    void guilty();
	
	ofVideoGrabber cam;
	ofxCv::ObjectFinder finder;	// our face detector
	


    ofTrueTypeFont font;
    ofTrueTypeFont font2;
    ofTrueTypeFont font3;

    
    float lposx1 = 10;
    float lposy1 = 10;
    
    float lposx2 = ofGetWidth()-10;
    float lposy2 = 10;
    
    float posx;
    float posy;
    float posx2;
    float posy2;
    
    int count;
    int count2;
    
    int rectWidth = 200;
    int rectHeight = 50;
    
    ofSerial serial;
    
    int myData;
    
    bool verdict;
    bool click = false;
    
    float timing;
    float timing2;
    
    ofVec2f wpos;
    ofVec2f wpos2;
    ofVec2f wpos3;
    ofVec2f wpos4;
};
