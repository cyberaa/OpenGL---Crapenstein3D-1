#ifndef COLLIDINGOBJECT_H
#define COLLIDINGOBJECT_H

class CollidingObject
{
public:
    float collide_minX;
    float collide_maxX;
    float collide_minY;
    float collide_maxY;
    float collide_minZ;
    float collide_maxZ;

    CollidingObject();
    virtual bool isColliding(CollidingObject* object);
    virtual void setBounds(float x, float y ,float z ,float thickness,float height,float width);
};



#endif // COLLIDINGOBJECT_H
