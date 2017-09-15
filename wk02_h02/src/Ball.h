// Ball.h

/* #pragma once should always be at the top of your header files
 * it prevents other headers like "ofMain.h" from being included more than once in your app
 * (note that ofMain.h is also included in ofApp.h)
 */

#pragma once		
#include "ofMain.h"		// ofMain.h lets our Ball "see" openFrameworks

class Ball {

public:		// other classes can access the following functions & variables:

	Ball();				// "constructor" function - required for every class
						// this is automatically called whenever we create a new ball

	void update();
	void draw();

	float radius;		// size
	ofVec2f pos;			// position
	float dirX, dirY;	// "direction" (a.k.a. velocity or speed)
    
    float red;
    float blue;
    float green;

	ofColor color;

};
