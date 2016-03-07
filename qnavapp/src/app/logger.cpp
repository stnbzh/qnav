#include "logger.h"

#include <QDateTime>
#include <QThread>
#include <QDebug>

void Logger::log(const QString& msg)
{
    qDebug() << QDateTime::currentDateTime().toMSecsSinceEpoch()
             << "| TID" << QThread::currentThreadId()
             << "|" << Q_FUNC_INFO
             << "|" << msg;
}
