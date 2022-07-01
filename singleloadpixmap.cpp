#include "singleloadpixmap.h"
#include "config.h"
#include <QFile>

SingleLoadPixmap::SingleLoadPixmap()
{

}

SingleLoadPixmap *SingleLoadPixmap::getInstance()
{
    if(instance == nullptr){
        instance = new SingleLoadPixmap();
    }
    return instance;
}

void SingleLoadPixmap::loadPixMap(QPixmap &pix,QString str)
{
    if(!pix.load(str)){
        QFile file(str);
        if(!file.open(QIODevice::ReadOnly)){
            return;
        }
        pix.loadFromData(file.readAll());
        }
}


SingleLoadPixmap* SingleLoadPixmap::instance = nullptr;
