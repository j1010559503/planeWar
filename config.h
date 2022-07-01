#ifndef CONFIG_H
#define CONFIG_H

/********游戏配置文件********/
#define GAME_WIDTH 512  //宽度
#define GAME_HEIGHT 767  //高度
#define GAME_TITLE "飞机大战 v1.0"  //标题
//#define GAME_RES_PATH "./plane.rcc" //rcc文件路径
#define GAME_RATE 10    //定时器刷新时间间隔  单位毫秒

/********地图配置文件********/
#define MAP_PATH ":/res/background1.jpg"   //地图路径
#define MAP_SCROLL_SPEED 2  //地图滚动速度

/********飞机配置文件********/
#define HERO_PATH ":/res/me3.png"

/********子弹配置文件********/
#define BULLET_PATH ":/res/bullet.png"
#define BULLET_SPEED 5      //子弹移动速度
#define BULLET_NUM 30   //弹匣中子弹总数
#define BULLET_INTERVAL 20  //发射子弹时间间隔

/********敌机配置文件********/
#define ENEMY_PATH ":/res/enemy.png"
#define ENEMY_SPEED 5 //敌机移动速度
#define ENEMY_NUM 20 //敌机总数量
#define ENEMY_INTERVAL 30 //敌机出场时间间隔

/********爆炸配置文件********/
#define BOMB_PATH ":/res/enemy1_down%1.png"
#define BOMB_NUM 20     //爆炸数量
#define BOMB_MAX 4      //爆炸图片最大索引
#define BOMB_INTERVAL 20    //爆炸切图时间间隔

/********音效配置文件********/
#define SOUND_BACKGROUND ":/res/background.wav"
#define SOUND_BOMB ":/res/down.wav"

#endif // CONFIG_H
