//
//  Robot.h
//  Crapenstein
//
//  Created by Bruno Caceiro on 20/06/14.
//  Copyright (c) 2014 Bruno Caceiro. All rights reserved.
//

#ifndef ROBOT_H
#define ROBOT_H
#include <stdio.h>
#include <assert.h>
#include "OpenGLIncludes.h"

class Robot
{
public:
    
    //Constructor
    Robot(GLfloat robotPosX, GLfloat robotPosY,GLfloat robotPosZ, GLfloat torsoRadius);
    
    //Destroy
    ~Robot();
    
    //Methods
    void drawRobot();
    void drawRobotEyes(GLfloat radius , GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat eyeDistance);
    void drawRobotHead(GLfloat radius , GLfloat posX, GLfloat posY, GLfloat posZ);
    void drawRobotTorso(GLfloat radius,GLfloat height, GLfloat posX, GLfloat posY, GLfloat posZ);
    void drawRobotArms(GLfloat radius, GLfloat length, GLfloat armsDistance, GLfloat posX, GLfloat posY, GLfloat posZ);
    void laserPower(GLfloat posX, GLfloat posY, GLfloat posZ);
    
private:
    GLfloat posX;
    GLfloat posY;
    GLfloat posZ;
    GLfloat torsoRadius;
};

inline Robot::~Robot()
{
}
#endif // ROBOT_H



