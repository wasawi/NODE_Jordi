#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);
    colorSergio = ofColor(255,0,100);
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
	
    // Draw Sergio's color
    ofSetColor(colorSergio);
    ofRect(200, 200, 100, 100);
    ofDrawBitmapStringHighlight("Sergio's color", 200,300);
}
