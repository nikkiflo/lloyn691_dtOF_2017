#include "Ball.h"

// constructor
Ball::Ball() {

	// inside the constructor you initialize the object's variables

	// random radius between 10 and 50
	radius = ofRandom(10,50);			

    
    
	// random color
    
	red	 = 200;
	green	= 56;
    blue	= 86;
	color = ofColor(red, green, blue);

	// random position in window
	pos = ofVec2f(ofRandom(radius, ofGetWidth()  - radius));
	

	// random x and y speeds/directions between -10 and 10
	dirX = ofRandom(-10,10);
	dirY = ofRandom(-10,10);
}

// update position, etc.
void Ball::update() {

	pos.x+=dirX;	// move along x by amount of dirX
	pos.y+=dirY;	// move along y by amount of dirY
    
    red	= red - pos.y;
    green = green - pos.y;
    blue = blue - pos.y;
    color = ofColor(red, green, blue);

	// check for bounces at edges of window:

	// check left
	if (pos.x <= radius) {
		pos.x = radius;			// set the position back to the edge of window
		dirX = -dirX;		// and reverse direction
	}
	// check right
	else if (pos.x >= ofGetWidth() - radius) {
		pos.x = ofGetWidth() - radius;			// similar to above
		dirX = -dirX;
	}

	// check top and bottom
	if (pos.y <= radius) {
		pos.y = radius;
		dirY = -dirY;
	}
	else if (pos.y >= ofGetHeight() - radius) {
		pos.y = ofGetHeight() - radius;
		dirY = -dirY;
	}
}


// draw the ball
void Ball::draw() {

	ofSetColor(color);				// set the GLOBAL color
	ofDrawCircle(pos.x,pos.y, radius);		// and draw
}
