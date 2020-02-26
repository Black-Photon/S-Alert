#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QObject>

class AccountManager : public QObject
{
    Q_OBJECT
public:
    explicit AccountManager(QObject *parent = nullptr);

signals:

public slots:
    void addUserAcc(QString username, QString password, qint8 level);
};

#endif // ACCOUNTMANAGER_H
