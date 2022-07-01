#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H

#include <QPixmap>
#include <QRect>

class EnemyPlane
{
public:
    EnemyPlane();
    //更新坐标
    void updatePosition();
    //敌机资源对象
    QPixmap m_Enemy;
    //位置
    int m_X;
    int m_Y;
    //敌机的矩形边距
    QRect m_Rect;
    //状态
    bool m_Free;
    //速度
    int m_Speed;
};

#endif // ENEMYPLANE_H
