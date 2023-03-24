#include "Logger.h"

QFile Logger::m_file;

void Logger::log(const QString& message)
{
    // Open the log file in append mode
    if (!m_file.isOpen())
    {
        QString fileName = QString(QLatin1String("log_%1.txt")).arg(QDate::currentDate().toString(QLatin1String("ddMMyy")));
        m_file.setFileName(fileName);
        m_file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    }

    // Write the log message to the file
    QTextStream stream(&m_file);
    stream << QDateTime::currentDateTime().toString(QLatin1String("yyyy-MM-dd hh:mm:ss.zzz")) << " - " << message << "\n";
}