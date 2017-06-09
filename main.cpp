#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    VideoCapture cap(0);
    if(!cap.isOpened())
    {
        cout<< "Check the input file you idiot" << endl;
        return -1;
    }

    double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
    double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);

    cout << "Frame Size "<< dWidth << "by" << dHeight<< endl;
    namedWindow("OP3 ",CV_WINDOW_AUTOSIZE);

    while(1)
    {
        Mat frame;
        bool bSuccess = cap.read(frame);

        if(!bSuccess)
        {

            cout<< "Noob coder detected"<< endl;
            break;
        }
        imshow("OP3 ",frame);
        if(waitKey(30)==27)
        {
            cout<<"esc pressed by a bored person"<<endl;
            break;
        }
    }
return 0;

}


