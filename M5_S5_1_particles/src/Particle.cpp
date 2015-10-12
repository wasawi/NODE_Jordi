#include "Particle.h"

//--------------------------------------------------------------
void Particle::setup(ofColor particle_color, ofPoint particle_position, int particle_radius){
	
	color = particle_color;
	position = particle_position;
	radius = particle_radius;
}