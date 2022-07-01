#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "map.h"
#include "heroplane.h"
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"
#include <QWidget>
#include <QTimer>

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    //初始化场景
    void initScene();
    //启动游戏
    void playGame();
    //更新游戏中所有元素坐标
    void updatePosition();
    //绘制到屏幕中 函数名称不可改
    void paintEvent(QPaintEvent *);
    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent *);
    //敌机出场
    void enemyToScene();
    //敌机数组
    EnemyPlane m_Enemys[ENEMY_NUM];
    //敌机出场间隔
    int m_recorder;
    //碰撞检测
    void collisionDetection();
    //地图对象
    Map m_map;
    //飞机对象
    HeroPlane m_hero;
    //定时器
    QTimer m_Timer;
    //爆炸数组
    Bomb m_bombs[BOMB_NUM];
};
#endif // MAINSCENE_H
