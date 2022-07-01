#ifndef HEROPLANE_H
#define HEROPLANE_H
#include "config.h"
#include "bullet.h"
#include <QPixmap>
#include <QRect>

class HeroPlane
{
public:
    HeroPlane();
    //发射子弹
    void shoot();
    //设置飞机位置
    void setPosition(int x,int y);
    //飞机资源对象
    QPixmap m_Plane;
    //飞机坐标
    int m_X;
    int m_Y;
    //飞机矩形边框
    QRect m_Rect;
    //弹匣
    Bullet m_Bullets[BULLET_NUM];
    //发射间隔记录
    int m_recorder;
};

#endif // HEROPLANE_H
