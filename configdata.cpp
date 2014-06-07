#include "configdata.h"
#include "macros.h"

#include <QFile>
#include <QXmlStreamReader>
#include <QtNumeric>

ConfigData::ConfigData(QObject *parent) :
    QObject(parent)
{
}

void ConfigData::loadConfig(const QString &path)
{
    Q_UNUSED(path);
}

void ConfigData::parseConfigFile(QString fileName)
{
    STUB_WITH_PARAMS(fileName);
    QFile* file = new QFile(QString(fileName.replace("file://", "")).append("config.xml"));

    /* If we can't open it, let's show an error message. */
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
        ERROR(QString("Couldn't open %1").arg(file->fileName()));
        return;
    }
    QXmlStreamReader xml(file);
    while(!xml.atEnd() && !xml.hasError()) {
        QXmlStreamReader::TokenType token = xml.readNext();
        if(token == QXmlStreamReader::StartDocument) {
            continue;
        }
        if(token == QXmlStreamReader::StartElement) {

            QString name = xml.name().toString();
            xml.readNext();
            QString value = xml.text().toString();
            INFO(QString("xml: %1 -> %2").arg(name).arg(value));

            //if(rowName == "type")
            //    type = value;
            if(name == "cpname")
                cpname = value;
            //else if(name == "cplogo")
            //    cplogo = value;
            else if(name == "cpauthjs")
                cpauthjs = value;
            else if(name == "ver")
                ver = value;
            else if(name == "mgrver")
                mgrver = value;
            else if(name == "fullwidget")
                fullwidget = value == "y";
            else if(name == "category")
                category = value;
            else if(name == "movie")
                movie = value == "y";
            else if(name == "srcctl")
                srcctl = value == "y";
            //else if(name == "ticker")
            //    ticker = value == "y";
            else if(name == "childlock")
                childlock = value == "y";
            else if(name == "audiomute")
                audiomute = value == "y";
            else if(name == "videomute")
                videomute = value == "y";
            else if(name == "dcont")
                dcont = value == "y";
            else if(name == "widgetname")
                widgetname = value;
            else if(name == "description")
                description = value;
            else if(name == "width")
                width = value.toInt();
            else if(name == "height")
                height = value.toInt();
            else if(name == "ThumbIcon")
                ThumbIcon = value;
            else if(name == "BigThumbIcon")
                BigThumbIcon = value;
            else if(name == "ListIcon")
                ListIcon = value;
            else if(name == "BigListIcon")
                BigListIcon = value;
            else if(name == "author")
                author = value;
            else if(name == "name")
                name = value;
            //else if(name == "email")
            //    email = value;
            //else if(name == "link")
            //    link = value;
            //else if(name == "organization")
            //    organization = value;
        }
    }

    if(xml.hasError()) {
        ERROR(xml.errorString());
    }

    xml.clear();

}
