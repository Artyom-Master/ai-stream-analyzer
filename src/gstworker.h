#ifndef GSTWORKER_H
#define GSTWORKER_H

#include <QObject>

class GstWorker : public QObject
{
    Q_OBJECT
public:
    explicit GstWorker(QObject *parent = nullptr);

signals:
};

#endif // GSTWORKER_H
