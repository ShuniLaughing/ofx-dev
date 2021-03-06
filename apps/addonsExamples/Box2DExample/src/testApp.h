#ifndef _TEST_APP
#define _TEST_APP

#include "TestWorld.h"

class testApp : public ofBaseApp {
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();
		
		TestWorld world;	// this is the class where box2D lives
		
};

#endif
