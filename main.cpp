/* APackageManager
 * Author Prof1983 prof1983@ya.ru
 * Created 20.06.2012
 * LastMod 20.06.2012
 * Version 0.0
 */

#include <QtGui/QApplication>
#include "Application.h"
#include "MainWindow.h"

int main(int argc, char *argv[])
{
	AApplication app;
	APackageManagerMainWindow w;

	// --- code ---

	app = AApplication_New(argc, argv);
	w = APackageManagerMainWindow_New();
	w->show();
	return app->exec();
}
