#include "filesystem.h"
#include "stbplugin.h"
#include "browserplugin.h"

#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QDebug>

using namespace yasem;

FileSystem::FileSystem(Profile *profile, QWidget *parent):
    BaseWidget(profile, parent)
{

}

QString FileSystem::path()
{

    STUB();
    return profile->getProfilePlugin()->browser()->browserRootDir();
}

QObject* FileSystem::openFile(const QString &name, const QString &access)
{
    qDebug() << "name:" << name;
    QFile* file = new QFile(name);
    bool isOpened = file->open(QFile::ReadOnly);
    if(!isOpened)
        WARN(QString("File '%1' is not opened!").arg(name));
    return file;
}

void FileSystem::closeFile(QObject *file) const
{
    QFile* f = dynamic_cast<QFile*>(file);
    if(f->isOpen())
        f->close();
}

QString FileSystem::readLine(QObject *file) const
{
    QFile* f = dynamic_cast<QFile*>(file);
    if(f->isOpen())
        return QString(f->readLine());
    return "";
}

QString FileSystem::readAll(QObject *file) const
{
    QFile* f = dynamic_cast<QFile*>(file);
    if(f->isOpen())
        return QString(f->readAll());
    return "";
}

bool FileSystem::fileExists(const QString &name)
{
    QFile file(name);
    qDebug() << "fileExists:" << name;
    return file.exists();
}

QString FileSystem::GetPluginInfo(int infoId)
{
    return profile->datasource()->get(group(), "version", "0.1");
}

QString FileSystem::group()
{
    return "FileSystem";
}
