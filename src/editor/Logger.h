#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

class Logger
{
public:
    static void log(const QString& message);

private:
    static QFile m_file;
};

#endif // LOGGER_H
