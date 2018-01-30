#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
VideoCapture stream1(0); //0 is the id of video device.
stream1.set(CV_CAP_PROP_FRAME_WIDTH , 352);
stream1.set(CV_CAP_PROP_FRAME_HEIGHT , 288);

//unconditional loop
while (true) {
Mat cameraFrame;
stream1.read(cameraFrame);
imshow("cam", cameraFrame);
if (waitKey(30) >= 0)
break;
}
return 0;
}
~                                                                               
~        
