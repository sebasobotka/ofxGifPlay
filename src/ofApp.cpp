#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1280, 1080);
	ofSetFrameRate(60);
	gifloader.load("test.gif");
	ofEnableAlphaBlending();
	startTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::update() {
	if (ofGetElapsedTimeMillis() - startTime >= gifDelay) {
		index++;
		if (index > gifloader.pages.size() - 1) {
			index = 0;
		}
		startTime = ofGetElapsedTimeMillis();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofSetColor(255, 255, 255, 255);
	ofImage img = gifloader.pages[index];

	ofPixels pix = img.getPixels();
	img.setFromPixels(pix);
	img.draw(100, 100);
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