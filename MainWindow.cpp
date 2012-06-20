/* APackageManager main window
 * Author Prof1983 prof1983@ya.ru
 * Created 20.06.2012
 * LastMod 20.06.2012
 * Version 0.0
 */

#include "MainWindow.h"

#include <QtCore>
#include <QtGui>

APackageManagerMainWindow
afunc APackageManagerMainWindow_New()
{
	return new QPackageManagerMainWindow();
}

// --- QPackageManagerMainWindow ---

QPackageManagerMainWindow::QPackageManagerMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
}

QPackageManagerMainWindow::~QPackageManagerMainWindow()
{
	AMainWindow mainWin;
	//AMenu fileMenu;

	mainWin = new QMainWindow(this);
	mainWin->setWindowTitle(QObject::tr("APackageManager"));

	//browser = new Browser(mainWin);
	//mainWin->setCentralWidget(browser);

	/*
	fileMenu = mainWin->menuBar()->addMenu(QObject::tr("&File"));
	fileMenu->addAction(QObject::tr("Add &Connection..."), browser, SLOT(addConnection()));
	fileMenu->addSeparator();
	fileMenu->addAction(QObject::tr("&Quit"), &app, SLOT(quit()));
	*/

	/*
	QMenu *helpMenu = mainWin.menuBar()->addMenu(QObject::tr("&Help"));
	helpMenu->addAction(QObject::tr("About"), &browser, SLOT(about()));
	helpMenu->addAction(QObject::tr("About Qt"), qApp, SLOT(aboutQt()));

	QObject::connect(&browser, SIGNAL(statusMessage(QString)),
					 mainWin.statusBar(), SLOT(showMessage(QString)));
	*/

	//addConnectionsFromCommandline(app.arguments(), &browser);

	mainWin->setWindowModality(Qt::WindowModal);
	mainWin->setVisible(true);

}
