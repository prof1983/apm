/* APackageManager main window
 * Author Prof1983 prof1983@ya.ru
 * Created 20.06.2012
 * LastMod 20.06.2012
 * Version 0.0
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define A_NoFunc

#include <QtGui/QMainWindow>
#include "ABase2.h"

typedef QMainWindow* AMainWindow;
typedef QMenu* AMenu;

// --- QPackageManagerMainWindow ---

class QPackageManagerMainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	QPackageManagerMainWindow(QWidget *parent = 0);
	~QPackageManagerMainWindow();
};

typedef QPackageManagerMainWindow* APackageManagerMainWindow;

// --- Functions ---

APackageManagerMainWindow
afunc APackageManagerMainWindow_New();

#endif // MAINWINDOW_H
