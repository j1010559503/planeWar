#include "enemyplane.h"
#include "singleloadpixmap.h"
#include "config.h"

EnemyPlane::EnemyPlane()
{
    //敌机资源加载
    SingleLoadPixmap* temp = SingleLoadPixmap::getInstance();
    temp->loadPixMap(m_Enemy,ENEMY_PATH);
    //敌机位置
    m_X = 0;
    m_Y = 0;
    //敌机状态
    m_Free = true;
    //敌机速度
    m_Speed = ENEMY_SPEED;
    //敌机矩形框（碰撞检测）
    m_Rect.setWidth(m_Enemy.width());
    m_Rect.setHeight(m_Enemy.height());
    m_Rect.moveTo(m_X,m_Y);
    temp = nullptr;
}

void EnemyPlane::updatePosition()
{
    //空闲状态敌机 不计算坐标
    if(m_Free){
        return;
    }
    m_Y += m_Speed;
    m_Rect.moveTo(m_X,m_Y);
    //如果超出屏幕 重置空闲状态
    if(m_Y >= GAME_HEIGHT + m_Enemy.height()){
        m_Free = true;
    }
}
