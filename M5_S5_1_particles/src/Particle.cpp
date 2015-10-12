#include "Particle.h"

Particle::Particle(){
	setup(ofColor(0), ofPoint(0,0), 0);
}

Particle::~Particle(){
}

//--------------------------------------------------------------
void Particle::setup(ofColor particle_color, ofPoint particle_position, int particle_radius){
	
	color = particle_color;
	position = particle_position;
	radius = particle_radius;
}

//--------------------------------------------------------------
void Particle::update(){
	
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
