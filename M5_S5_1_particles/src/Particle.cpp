#include "Particle.h"

Particle::Particle(){
	setup(ofColor(0), ofPoint(0,0), 0);
	setVelocity(ofPoint(0,0));
}

Particle::~Particle(){
}

//--------------------------------------------------------------
void Particle::setup(ofColor particle_color, ofPoint particle_position, int particle_radius){
	
	color		= particle_color;
	position	= particle_position;
	radius		= particle_radius;
	gravity		= 0.2;
	friction	= 0.99;
}

//--------------------------------------------------------------
void Particle::update(){

	//invert velocity if we are off the screen for X axis
	if (position.x < 0 || position.x > ofGetWidth()) {
		velocity.x *= -1.0;
	}

	//invert velocity if we are off the screen for Y axis
	if (position.y < 0 || position.y > ofGetHeight()) {
		velocity.y *= -1.0;
	}else{
		//add gravity
		velocity.y	+= gravity;
	}

	//add friction
	velocity	*= friction;

	//add velocity to current position
	position += velocity;
	
}


//--------------------------------------------------------------
void Particle::draw(){

	ofSetColor(color);
	ofCircle(position.x, position.y, radius);

}

//--------------------------------------------------------------
void Particle::setVelocity(ofPoint particle_velocity){
	velocity = particle_velocity;
}
