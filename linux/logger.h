#pragma once

#include <QDebug>
#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(earthpods)

#define LOG_INFO(msg) qCInfo(earthpods) << "\033[32m" << msg << "\033[0m"
#define LOG_WARN(msg) qCWarning(earthpods) << "\033[33m" << msg << "\033[0m"
#define LOG_ERROR(msg) qCCritical(earthpods) << "\033[31m" << msg << "\033[0m"
#define LOG_DEBUG(msg) qCDebug(earthpods) << "\033[34m" << msg << "\033[0m"
