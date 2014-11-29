#ifndef LOCALCONTROLLER_H
#define LOCALCONTROLLER_H

#include "basecontroller.h"

using namespace QSS;

namespace QSS {

class LocalController : public BaseController
{
    Q_OBJECT
public:
    explicit LocalController(QObject *parent = 0);

public slots:
    void start(const Profile &p);

protected slots:
    void onNewConnection();
};

}

#endif // LOCALCONTROLLER_H
