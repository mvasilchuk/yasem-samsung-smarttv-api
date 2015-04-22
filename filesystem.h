#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include "BaseWidget.h"

#include <QObject>
#include <QFile>

namespace yasem
{
class StbPluginObject;

class FileSystem: public BaseWidget
{
    Q_OBJECT
public:
    explicit FileSystem(Profile *profile, QWidget* parent = 0);

signals:

public slots:

    virtual QString path();
    virtual QObject* openFile(const QString &name, const QString &access);
    virtual void closeFile(QObject* file) const;
    virtual QString readLine(QObject* file) const;
    virtual QString readAll(QObject* file) const;
    virtual bool fileExists(const QString &name);

protected:
    QString portalPath;

    // BaseWidget interface
public slots:
    QString GetPluginInfo(int infoId);

    // BaseWidget interface
protected:
    QString group();
};

}

#endif // FILESYSTEM_H
