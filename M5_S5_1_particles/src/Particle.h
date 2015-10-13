#pragma once
#include "ofMain.h"


class Particle {

public:
	//Ctor
	Particle();
	~Particle();
	
	//of
	void setup(ofColor particle_color, ofPoint particle_position, int particle_radius);
	void update();
	void draw();

	//setters
	void setVelocity(ofPoint particle_volocity);
	
private:
	
	ofColor	color;
	ofPoint	position;
	ofPoint	velocity;
	int radius;
	float gravity;
	float friction;
	
};