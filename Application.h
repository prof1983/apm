/* APackageManager application functions
 * Author Prof1983 prof1983@ya.ru
 * Created 20.06.2012
 * LastMod 20.06.2012
 * Version 0.0
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include <QtGui/QApplication>
#include "ABase2.h"

typedef QApplication* AApplication;

AApplication
afunc AApplication_New(int &argc, char **argv);

#endif // APPLICATION_H
