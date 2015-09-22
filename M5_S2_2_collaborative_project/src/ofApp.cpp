#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);

    // define Alvaro's color
	colorAlvaro = ofColor(0,255,100);

    // define Fernando's color
    colorFernando = ofColor(0,0,0);

    // define JuanCarlos’s color
    colorJuanCarlos = ofColor(35,96,145);
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
	
	// Draw Alvaro's color
	ofSetColor(colorAlvaro);
	ofRect(200, 200, 100, 100);
	ofDrawBitmapStringHighlight("Alvaro's color", 200,300);

	// Draw Fernando's color
    	ofSetColor(colorFernando);
    	ofRect(400, 400, 100, 100);
    	ofDrawBitmapStringHighlight("Fernando's color", 400,500);

	// Draw JuanCarlos’s color
	ofSetColor(colorJuanCarlos);
	ofRect(100, 400, 100, 100);
	ofDrawBitmapStringHighlight(“JuanCarlos’s color", 100,500);
}
