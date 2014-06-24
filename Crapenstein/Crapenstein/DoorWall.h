//
//  DoorWall.h
//  Crapenstein
//
//  Created by Bruno Caceiro on 24/06/14.
//  Copyright (c) 2014 Bruno Caceiro. All rights reserved.
//

#ifndef __Crapenstein__DoorWall__
#define __Crapenstein__DoorWall__

#include <iostream>
#include "OpenGLIncludes.h"

class DoorWall
{
public:
    /**
     * @brief Wall::Wall
     * @param x
     * @param y
     * @param z
     * @param width
     * @param height
     * @param orientation if 0 = horizontal, if 1, vertical, if 2, vertical side
     */
    DoorWall(float x,float y,float z,float width,float height,int orientation);
    //destroy
    
    ~DoorWall();
    void draw();
    void openDoor();
    void updateWalls();
    void updateDoors();
    void update();
   
    
private:
    float x;
    float y;
    float z;
    float width;
    float height;
    int orientation;
    bool canOpenDoor;
    bool isOpen;
    GLint doorState;
    
    GLfloat aux;
};

#endif // DOORWALL_H


