#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxKinect.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxKinect kinect;
//    vector<cv::Point> contours;
    
    ofImage colorImg;
    ofImage grayImage; // grayscale depth image
    ofImage grayThreshNear; // the near thresholded image
    ofImage grayThreshFar; // the far thresholded image
    
    ofxCv::ContourFinder contourFinder;
    
    bool bThreshWithOpenCV;
    bool bDrawPointCloud;
    
    int nearThreshold;
    int farThreshold;
    
    int angle;
    
    // used for viewing the point cloud
    ofEasyCam easyCam;
    

		
};