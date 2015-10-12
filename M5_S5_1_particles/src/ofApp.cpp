#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// create particles
	for (int i=0; i<numParticles; i++) {
		
		// add new element to vector
		particles.push_back(p);
		
		// set new element's properties
		particles[i].setup(	ofColor(155 + ofRandom(-100, 100)),
							ofPoint(ofGetWidth()/2 + ofRandom(-100, 100),
									ofGetHeight()/2 + ofRandom(-100, 100)),
							10);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i=0; i<numParticles; i++) {
		particles[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i=0; i<numParticles; i++) {
		particles[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::moveParticles(){

	// set Particle's velocity
	for (int i=0; i<numParticles; i++) {
		particles[i].setVelocity(ofPoint(ofRandom(-1., 1.), ofRandom(-1., 1.)));
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	if (key==' '){
		moveParticles();
	}
}