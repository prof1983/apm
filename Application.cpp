/* APackageManager application functions
 * Author Prof1983 prof1983@ya.ru
 * Created 20.06.2012
 * LastMod 20.06.2012
 * Version 0.0
 */

#include "Application.h"

AApplication
afunc AApplication_New(int &argc, char **argv)
{
	return new QApplication(argc, argv);
}
