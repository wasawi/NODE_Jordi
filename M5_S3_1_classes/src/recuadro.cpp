#include "recuadro.h"

//--------------------------------------------------------------
void recuadro::dibujaRecuadro(ofColor myColor, ofPoint pos, int w, int h, string texto){
	
	ofSetColor(myColor);
	ofRect(pos, w, h);
	ofDrawBitmapStringHighlight(texto, pos.x, pos.y + h);

}


