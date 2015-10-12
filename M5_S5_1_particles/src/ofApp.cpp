#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	p.setup(ofColor(255), ofPoint(ofGetWidth()/2,ofGetHeight()/2), 10);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i=0; i<100; i++) {
		ofSetColor(p.color-i);
		ofCircle(p.position.x+i, p.position.y+i, p.radius);
	}
}
