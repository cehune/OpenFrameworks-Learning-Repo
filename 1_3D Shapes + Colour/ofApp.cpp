#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(71, 71, 71);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofSetColor(195, 248, 250);
	ofDrawRectangle(-400, -256, 800, 128);
	ofSetColor(254, 215, 255);
	ofDrawRectangle(-400, -128, 800, 128);
	ofSetColor(255, 255, 255);
	ofDrawRectangle(-400, 0, 800, 128);
	ofSetColor(254, 215, 255);
	ofDrawRectangle(-400, 128, 800, 128);
	ofSetColor(195, 248, 250);
	ofDrawRectangle(-400, 256, 800, 128);


	


	/*ofDrawBox(64, 256, 0, 64, 64, 64);
	ofDrawCone(160, 256, 0, 32, 128);
	ofDrawCylinder(256, 256, 32, 128);
	ofDrawIcoSphere(352, 256, 0, 32);
	ofDrawPlane(448, 256, 64, 64);
	ofDrawSphere(544, 256, 32);*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
