//
//  main.cpp
//  VideoViewer
//
//  Created by Gonzalo Vera on 20/5/17.
//  Copyright © 2017 Gonzalo Vera. All rights reserved.
//

#include "opencv2/opencv.hpp"
#include "VideoViewer.hpp"

using namespace cv;
using namespace std;

int main() {
    
    String fileName = "/Volumes/Data_Hard_Disk/Coding/My_OpenCV_examples/VideoViewer/testVideo.mp4";
    
    VideoViewer viewer;
    
    viewer.displayVideo(fileName);
}







