#include "mainscene.h"
#include "config.h"

#include <QApplication>
//#include <QResource>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //注册二进制资源文件
    //QResource::registerResource("GAME_RES_PATH");
    MainScene w;
    w.show();
    return a.exec();
}
