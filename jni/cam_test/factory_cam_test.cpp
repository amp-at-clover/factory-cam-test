#include <cstdio>
#include <string>
#include <cstdlib>

#include "factory_cam_test.h"

int main(int argc, char *argv[]) {
	fprintf(stderr,"\r\nOpening Camera.");
	cv::VideoCapture capture;
	capture.open( CV_CAP_ANDROID_FRONT );
	capture.set( CV_CAP_PROP_FRAME_WIDTH, 640 );
	capture.set( CV_CAP_PROP_FRAME_HEIGHT, 480 );

	if( !capture.isOpened() ) {
	  fprintf(stderr,"\r\nFailed to open camera.");
		LOGE("Failed to open camera.");
		return -1;
	}
	fflush(stderr);
	cv::Mat inFrame;
	fprintf( stderr,"\r\nTrying to grab a frame.");
	capture>>inFrame;
	fprintf( stderr, "\r\nRetrieving a frame.");
	fflush(stderr);
	if( !inFrame.empty() ) {
	  fprintf( stderr, "\r\nWriting out frame.");
		imwrite("/data/Image.jpg", inFrame );
		fprintf(stderr,"\r\nWrote out image to Image.jpg");
		LOGE("Wrote out image to Image.jpg");
		return 0;
	}
	else {
		LOGE("Camera returned an empty frame.");
		fprintf( stderr,"Camera returned an empty frame.");
		fflush( stderr );
		return -2;
	}

	capture.release();

	return 0;
}
