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

	ofSetColor(p.color);
	ofCircle(p.position.x, p.position.y, p.radius);
}
