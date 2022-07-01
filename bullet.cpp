#include "bullet.h"
#include "singleloadpixmap.h"
#include "config.h"

Bullet::Bullet()
{
    SingleLoadPixmap* temp = SingleLoadPixmap::getInstance();
    temp->loadPixMap(m_Bullet,BULLET_PATH); //加载子弹资源
    //子弹坐标
    m_X = (GAME_WIDTH - m_Bullet.width()) * 0.5;
    m_Y = (GAME_HEIGHT - m_Bullet.height());
    //子弹状态 默认空闲
    m_Free = true;
    //子弹速度
    m_Speed = BULLET_SPEED;
    //子弹边框
    m_Rect.setWidth(m_Bullet.width());
    m_Rect.setHeight(m_Bullet.height());
    m_Rect.moveTo(m_X,m_Y);
    temp = nullptr;
}

void Bullet::updatePosition()
{
    //空闲状态下的子弹，不需要计算坐标
    if(m_Free){
        return;
    }
    //子弹向上移动
    m_Y -= m_Speed;
    m_Rect.moveTo(m_X,m_Y);
    //子弹位置超出窗口，重新变为空闲状态
    if(m_Y <= 0){
        m_Free = true;
    }
}
