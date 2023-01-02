#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//webcam.setup(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
	//webcam.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	//webcam.draw(0, 0);
	ofDrawCircle(mousex, mousey, size);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	/*if (key == ' ') {
		x = ofRandom(0, ofGetWidth());
		y = ofRandom(0, ofGetHeight());
	}*/
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	mousex = x;
	mousey = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	if (button == 0) {
		size += 5;
	}
	else {
		size -= 5;
	}
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
