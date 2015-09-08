#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofLog(OF_LOG_NOTICE)<< "program started!";
	
	variableToCrash = 1;
	
	ofLog(OF_LOG_NOTICE)<< "variableToCrash = " variableToCrash;
}

//--------------------------------------------------------------
void ofApp::update(){

	variableToCrash = variableToCrash / 0;

	ofLog(OF_LOG_NOTICE)<< "program crashed";
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}