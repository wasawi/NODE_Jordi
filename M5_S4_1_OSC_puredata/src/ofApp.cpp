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
	
	int PORT = 12345;
	cout << "listening for osc messages on port " << PORT << "\n";
	receiver.setup(PORT);
	
	mouseX = 0;
	mouseY = 0;
	mouseButtonState = "";
}

//--------------------------------------------------------------
void ofApp::update(){

	// check for waiting messages
	while(receiver.hasWaitingMessages()){
		// get the next message
		ofxOscMessage m;
		receiver.getNextMessage(&m);
		
		// check for mouse moved message
		if(m.getAddress() == "/mouse/position"){
			// both the arguments are int32's
			mouseX = m.getArgAsInt32(0);
			mouseY = m.getArgAsInt32(1);
		}
		// check for mouse button message
		else if(m.getAddress() == "/mouse/button"){
			// the single argument is a string
			mouseButtonState = m.getArgAsString(0);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	// Draw Jordi's color
//	ofSetColor(colorJordi);
//	ofRect(100, 100, 100, 100);
//	ofDrawBitmapStringHighlight("Jordi's color", 100,200);

	r.dibujaRecuadro(colorJordi, ofPoint(100+mouseX,100+mouseY), 100, 300, "Jordi's color " + mouseButtonState);
	
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
	
}














