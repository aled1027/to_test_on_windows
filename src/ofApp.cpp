#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255,255,255);
    ofSetFrameRate(60);
         // 
	ofSetVerticalSync(true);
	frameByframe = false;

	// Uncomment this to show movies with alpha channels
	m0.setPixelFormat(OF_PIXELS_RGBA);
	m1.setPixelFormat(OF_PIXELS_RGBA);
	m2.setPixelFormat(OF_PIXELS_RGBA);
	m3.setPixelFormat(OF_PIXELS_RGBA);



    //#define FIVE_FORTY

    m0.loadMovie("movies/Gut.mov");
	m1.loadMovie("movies/720p/Gut.mov");

    //#ifdef FIVE_FORTY
	//    m0.loadMovie("movies/Gut.mov");
	//    m1.loadMovie("movies/Gut.mov");
	//    //m2.loadMovie("movies/Gut.mov");
	//    //m3.loadMovie("movies/Gut.mov");
    //#else
	//    m0.loadMovie("movies/720p/Gut.mov");
	//    m1.loadMovie("movies/720p/Gut.mov");

	//    //m1.loadMovie("movies/720p/Nose.mov");
	//    //m2.loadMovie("movies/720p/Skin.mov");
	//    //m3.loadMovie("movies/720p/Mouth.mov");
    //#endif

    m0.setLoopState(OF_LOOP_NORMAL);
	m0.play();
    m1.setLoopState(OF_LOOP_NORMAL);
	m1.play();
    //m2.setLoopState(OF_LOOP_NORMAL);
	//m2.play();
    //m3.setLoopState(OF_LOOP_NORMAL);
	//m3.play();

    m0.setVolume(0.0);
    m1.setVolume(0.0);
    m2.setVolume(0.0);
    m3.setVolume(0.0);
}

//--------------------------------------------------------------
void ofApp::update(){
    m0.update();
    m1.update();
    //m2.update();
    //m3.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(0x000000);
    stringstream reportStream;
    reportStream << "fps: " << ofGetFrameRate() << endl;
    ofDrawBitmapString(reportStream.str(), 10, 10);

	ofSetHexColor(0xFFFFFF);

    //m0.draw(10,10,480,270);
    m0.draw(10,10,1920,1080);
    m1.draw(600,10,1920,1080);
    //m2.draw(10,300,480,270);
    //m3.draw(500,300,480,270);

    //ofSetHexColor(0x000000);
    //unsigned char * pixels = fingerMovie.getPixels();
    //
    //int nChannels = fingerMovie.getPixelsRef().getNumChannels();
    //
    //// let's move through the "RGB(A)" char array
    //// using the red pixel to control the size of a circle.
    //for (int i = 4; i < 320; i+=8){
    //    for (int j = 4; j < 240; j+=8){
    //        unsigned char r = pixels[(j * 320 + i)*nChannels];
    //        float val = 1 - ((float)r / 255.0f);
    //        ofCircle(400 + i,20+j,10*val);
    //    }
    //}


    //ofSetHexColor(0x000000);
	//ofDrawBitmapString("press f to change",20,320);
    //if(frameByframe) ofSetHexColor(0xCCCCCC);
    //ofDrawBitmapString("mouse speed position",20,340);
    //if(!frameByframe) ofSetHexColor(0xCCCCCC); else ofSetHexColor(0x000000);
    //ofDrawBitmapString("keys <- -> frame by frame " ,190,340);
    //ofSetHexColor(0x000000);

    //ofDrawBitmapString("frame: " + ofToString(fingerMovie.getCurrentFrame()) + "/"+ofToString(fingerMovie.getTotalNumFrames()),20,380);
    //ofDrawBitmapString("duration: " + ofToString(fingerMovie.getPosition()*fingerMovie.getDuration(),2) + "/"+ofToString(fingerMovie.getDuration(),2),20,400);
    //ofDrawBitmapString("speed: " + ofToString(fingerMovie.getSpeed(),2),20,420);

    //if(fingerMovie.getIsMovieDone()){
    //    ofSetHexColor(0xFF0000);
    //    ofDrawBitmapString("end of movie",20,440);
    //}
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    //switch(key){
    //    case 'f':
    //        frameByframe=!frameByframe;
    //        fingerMovie.setPaused(frameByframe);
    //    break;
    //    case OF_KEY_LEFT:
    //        fingerMovie.previousFrame();
    //    break;
    //    case OF_KEY_RIGHT:
    //        fingerMovie.nextFrame();
    //    break;
    //    case '0':
    //        fingerMovie.firstFrame();
    //    break;
    //}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	//if(!frameByframe){
    //    int width = ofGetWidth();
    //    float pct = (float)x / (float)width;
    //    float speed = (2 * pct - 1) * 5.0f;
    //    fingerMovie.setSpeed(speed);
	//}
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	//if(!frameByframe){
    //    int width = ofGetWidth();
    //    float pct = (float)x / (float)width;
    //    fingerMovie.setPosition(pct);
	//}
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	//if(!frameByframe){
    //    fingerMovie.setPaused(true);
	//}
}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	//if(!frameByframe){
    //    fingerMovie.setPaused(false);
	//}
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
