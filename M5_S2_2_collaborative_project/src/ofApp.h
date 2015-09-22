#pragma once

#include "ofMain.h"
#include "recuadro.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

	recuadro r;

	ofColor colorJordi;
	ofColor colorAlvaro;
	ofColor colorFernando;
	ofColor colorJuanCarlos;
};
