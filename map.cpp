#include "map.h"
#include "config.h"
#include "singleloadpixmap.h"

Map::Map()
{   SingleLoadPixmap* temp = SingleLoadPixmap::getInstance();
    //加载地图对象
    temp->loadPixMap(m_map1,MAP_PATH);
    temp->loadPixMap(m_map2,MAP_PATH);
    //初始化Y轴坐标
    m_map1_posY = -GAME_HEIGHT;
    m_map2_posY = 0;
    //地图滚动速度
    m_scroll_speed = MAP_SCROLL_SPEED;
    temp = nullptr;
}

void Map::mapPosition()
{
    //处理第一张图片滚动位置
    m_map1_posY += m_scroll_speed;
    if(m_map1_posY >= 0){
        m_map1_posY = -GAME_HEIGHT;
    }
    //处理第二张图片滚动位置
    m_map2_posY += m_scroll_speed;
    if(m_map2_posY >= GAME_HEIGHT){
        m_map2_posY = 0;
    }
}


