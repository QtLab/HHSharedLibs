#ifndef SYSTEMUTILITIES_H
#define SYSTEMUTILITIES_H

#include <QObject>

#include "systemutilitieslib.h"



namespace HEHUI
{


class SYSUTIL_LIB_API SystemUtilities : public QObject
{
    Q_OBJECT
public:
    explicit SystemUtilities(QObject *parent = 0);
    ~SystemUtilities();


    static int getCPULoad();
    static QString getCPUName();
    static QString getCPUSerialNumber();

    static QString getHardDriveSerialNumber(unsigned int driveIndex = 0);

    static bool getMemoryStatus(quint64 *totalBytes, float *loadPercentage);
    static bool getDiskPartionStatus(const QString &partionRootPath, float *totalBytes, float *freeBytes);
    static QString getDisksInfo();

    static QString getOSVersionInfo();
    static bool getLogonInfoOfCurrentUser(QString *userName, QString *domain = 0, QString *logonServer = 0, QString *errorMessage = 0);
    static void getAllUsersLoggedOn(QStringList *users, const QString &serverName = "", unsigned long *apiStatus = 0);



public slots:


};

} //namespace HEHUI

#endif // SYSTEMUTILITIES_H
