#pragma once
#include "ofMain.h"


class Particle {

public:
	Particle();
	~Particle();
	
	void setup(ofColor particle_color, ofPoint particle_position, int particle_radius);
	void draw();

private:
	
	ofColor	color;
	ofPoint	position;
	int radius;
	
};