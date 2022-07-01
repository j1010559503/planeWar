#ifndef SINGLELOADPIXMAP_H
#define SINGLELOADPIXMAP_H

#include <QPixmap>
#include <QString>

class SingleLoadPixmap
{
private:
    static SingleLoadPixmap* instance;
    SingleLoadPixmap();
//    SingleLoadPixmap(const SingleLoadPixmap& tmp){};
//    SingleLoadPixmap operator=(const SingleLoadPixmap& tmp){};
public:
    static SingleLoadPixmap* getInstance();
    //加载图片对象
    void loadPixMap(QPixmap&,QString);
};

#endif // SINGLELOADPIXMAP_H
