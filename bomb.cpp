#include "bomb.h"
#include "config.h"
#include "singleloadpixmap.h"
#include <QString>

Bomb::Bomb()
{
    SingleLoadPixmap* temp = SingleLoadPixmap::getInstance();
    //将所有爆炸pixmap放入到数组中
    for(int i = 1;i <= BOMB_MAX; i++){
        //占位符%1通过arg（i）替换为i
        QString str = QString(BOMB_PATH).arg(i);
        m_pixArr.push_back(QPixmap(str));
        temp->loadPixMap(m_pixArr[i - 1],str);
        temp = nullptr;
    }
    //坐标
    m_X = 0;
    m_Y = 0;
    //空闲状态
    m_Free = true;
    //当前播放图片下标
    m_Index = 0;
    //播放爆炸间隔记录
    m_recorder = 0;
}

void Bomb::updateInfo()
{
    //空闲状态下无爆炸效果，直接return
    if(m_Free){
        return;
    }
    m_recorder++;
    //如果记录的爆炸实际未达到爆炸间隔，不需要切图，直接return
    if(m_recorder < BOMB_INTERVAL){
        return;
    }
    //重置记录
    m_recorder = 0;
    //切换爆炸播放图片
    m_Index++;
    //最后一张爆炸图播完，当前爆炸对象置为空闲状态
    if(m_Index > BOMB_MAX - 1){
        m_Index = 0;
        m_Free = true;
    }
}
