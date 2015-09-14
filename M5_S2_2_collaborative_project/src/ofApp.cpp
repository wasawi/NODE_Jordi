#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	// Draw Jordi's color
	ofSetColor(colorJordi);
	ofRect(100, 100, 100, 100);
	ofDrawBitmapStringHighlight("Jordi's color", 100,200);
}
