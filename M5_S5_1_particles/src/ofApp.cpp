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

	// define Sergio color
	colorSergio = ofColor(255,0,100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	// Draw Jordi's color
//	ofSetColor(colorJordi);
//	ofRect(100, 100, 100, 100);
//	ofDrawBitmapStringHighlight("Jordi's color", 100,200);

	r.dibujaRecuadro(colorJordi, ofPoint(100,100), 100, 300, "Jordi's color");
	
	// Draw Alvaro's color
//	ofSetColor(colorAlvaro);
//	ofRect(200, 200, 100, 100);
//	ofDrawBitmapStringHighlight("Alvaro's color", 200,300);

	r.dibujaRecuadro(colorAlvaro, ofPoint(200,200), 100, 100, "Alvaro's color");
	
	// Draw Fernando's color
//	ofSetColor(colorFernando);
//	ofRect(400, 400, 100, 100);
//	ofDrawBitmapStringHighlight("Fernando's color", 400,500);

	r.dibujaRecuadro(colorFernando, ofPoint(400,400), 100, 100, "Fernando's color");
	
	// Draw JuanCarlos’s color
//	ofSetColor(colorJuanCarlos);
//	ofRect(100, 400, 100, 100);
//	ofDrawBitmapStringHighlight("JuanCarlos color", 100,500);
	
	r.dibujaRecuadro(colorJuanCarlos, ofPoint(100,400), 100, 100, "JuanCarlos color");


	r.dibujaRecuadro(colorJuanCarlos, ofPoint(200,300), 100, 100, "Sergio's color");	
}
