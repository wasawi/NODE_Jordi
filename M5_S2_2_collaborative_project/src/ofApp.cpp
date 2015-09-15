#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);
    
    // define Fernando's color
    colorFernando = ofColor(0,0,0);
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
    
    ofSetColor(colorFernando);
    ofRect(400, 400, 100, 100);
    ofDrawBitmapStringHighlight("Fernando's color", 400,500);
}
