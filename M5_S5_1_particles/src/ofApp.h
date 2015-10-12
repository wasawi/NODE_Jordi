#pragma once

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	
	void moveParticles();

private:
	Particle p;
	vector <Particle> particles;
	int numParticles = 100;
};
