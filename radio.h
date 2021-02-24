#ifndef RADIO_H
#define RADIO_H

#include <QObject>
#include <QDebug>

class radio : public QObject
{
    Q_OBJECT
public:
    explicit radio(QObject *parent = nullptr);

signals:
    void quit();

public slots:
    //ESto es lo que nos envia el otro lado
    //void send(int channel, QString name, QString message);
    void listen(int channel, QString name, QString message);
};

#endif // RADIO_H
