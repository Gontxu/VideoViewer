//
//  VideoViewer.hpp
//  VideoViewer
//
//  Created by Gonzalo Vera on 16/07/2017.
//  Copyright © 2017 Gonzalo Vera. All rights reserved.
//

#ifndef VideoViewer_hpp
#define VideoViewer_hpp

#include <stdio.h>


class VideoViewer
{
    
private:
    cv::String videoPath;                       // Private class variable
    
public:
    void displayVideo(cv::String videoPath);    // Public method constructor

};


#endif /* VideoViewer_hpp */
