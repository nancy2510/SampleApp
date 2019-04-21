#ifndef APPVIEW_H
#define APPVIEW_H

#include "appview_global.h"
#include <QWidget>

class APPVIEWSHARED_EXPORT AppView : public QWidget
{
Q_OBJECT
public:
    AppView(QWidget *parent = NULL);
};

#endif // APPVIEW_H
