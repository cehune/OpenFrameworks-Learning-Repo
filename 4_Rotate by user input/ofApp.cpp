#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	//cam.setDistance(200);
}

//--------------------------------------------------------------
void ofApp::update(){
	if (dir) ++rotate;
	else --rotate;

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofNoFill();
	
	ofRotateYDeg(rotate);
	ofRotateXDeg(rotate);
	ofDrawBox(128);

	/*
	cam.begin();
	ofNoFill();
	ofDrawSphere(128);
	ofDrawCircle(0, 0, 140);

	cam.end();*/
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
	if (button == 0) dir = !dir;
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
