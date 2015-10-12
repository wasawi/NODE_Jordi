#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	for (int i=0; i<numParticles; i++) {
		particles.push_back(p);
		particles[i].setup(	ofColor(155 + ofRandom(-100, 100)),
							ofPoint(ofGetWidth()/2 + ofRandom(-100, 100),
									ofGetHeight()/2 + ofRandom(-100, 100)),
							10);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i=0; i<numParticles; i++) {
		particles[i].draw();
	}
}
