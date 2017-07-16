//
//  VideoViewer.cpp
//  VideoViewer
//
//  Created by Gonzalo Vera on 16/07/2017.
//  Copyright © 2017 Gonzalo Vera. All rights reserved.
//

#include "opencv2/opencv.hpp"
#include "VideoViewer.hpp"

using namespace cv;
using namespace std;



void VideoViewer :: displayVideo(String videoPath) {
    
    VideoCapture capture(videoPath);
    Mat frame;
    
    
    // Retrieve and display some metadata
    
    double fps = capture.get(CV_CAP_PROP_FPS);
    int width = capture.get(CAP_PROP_FRAME_WIDTH);
    int height = capture.get(CAP_PROP_FRAME_HEIGHT);
    double duration = capture.get(CAP_PROP_FRAME_COUNT) / fps;
    
    cout << "Frames per second: " << fps << endl;
    cout << "Video resolution: " << width << "x" << height << endl;
    cout << "Video length (seconds): " << duration << endl;
    
    
    if (!capture.isOpened())
        throw "Error while reading video stream";

    for( ; ; ) {
        
        capture >> frame;
        
        if(frame.empty())
            break;
        
        imshow("Video display", frame);
        waitKey(1);
    }
    
}
