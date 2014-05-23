#include <string>
#include <cstdlib>

#include "factory_cam_test.h"

/*
bool startCamera() {
		if( capture==NULL ) {
			capture = new cv::VideoCapture(); 
		}
		
		try {
			capture->open( CV_CAP_ANDROID );
			capture->set( CV_CAP_PROP_FRAME_WIDTH, 800 );
			capture->set( CV_CAP_PROP_FRAME_HEIGHT, 600 );
		}
		catch( cv::Exception const &e ) { LOGE("Error %s", e.what()); };

		if( !capture->isOpened() ) {
			LOGE("Failed to open camera.");
			return false;
		}
		else return true;
}
*/


int main(int argc, char *argv[]) {

	cv::VideoCapture capture( CV_CAP_ANDROID );
	printf("\r\nHello World.");
	//if( startCamera() ) {
	//	printf("\r\nOpened Camera.");
	//}


//	capture.release();

	return 0;
}
