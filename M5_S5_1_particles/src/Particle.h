#pragma once
#include "ofMain.h"


class Particle {

public:
	void setup(ofColor particle_color, ofPoint particle_position, int particle_radius);
	

	ofColor	color;
	ofPoint	position;
	int radius;
	
};