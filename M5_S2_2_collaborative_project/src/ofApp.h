#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void dibujaRecuadro(ofColor myColor, ofPoint pos, int w, int h, string texto);
	
	
	ofColor colorJordi;
	ofColor colorAlvaro;
	ofColor colorFernando;
	ofColor colorJuanCarlos;
};
