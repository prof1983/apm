/* APackageManager install functions
 * Author Prof1983 <prof1983@ya.ru>
 * Created 17.07.2012
 * LastMod 17.07.2012
 */

#include <stdio.h>
//#include <string.h>

//#include <stddef.h>
//#include <stdio.h>
//#include <sys/types.h>

#include "AIoDir"
#include "AIoStat"
#include "APackInstall"
#include "AStrings"

// ----

AStr PackageDir = "../Packages/";

// ----

AInt
func GetPackageList(AStr PackageName)
{
	ADir dp;
	ADirent ep;
	AStat_Type Stat;
	AString S;

	printf("GetPackageList() start\n");

	printf("Openning %s dir\n", PackageDir);

	dp = ADir_Open(PackageDir);
	if (dp == NULL)
		return -2; //perror("Couldn't open the directory");

	ep = ADir_Read(dp);
	while (ep != NULL)
	{
		if ((AStr_Compare(ep->d_name, ".") != 0) && (AStr_Compare(ep->d_name, "..") != 0))
		{
			S = AString_NewC(PackageDir);
			AString_CatC(S, ep->d_name);

			printf("S = %d %s\n", S->Len, S->Str);
			if (AIo_GetStat(S->Str, &Stat) == 0)
			{
				/*if (&Stat == NULL)
					printf("GetStat('%s') = NULL\n", ep->d_name);
				else
					printf("GetStat('%s') - Ok\n", ep->d_name);*/
				if _S_ISREG(Stat.st_mode) //(AStatIsReg(*Stat))
				{
					printf("AStat IsReg\n");
				//(ep->d_name
				//puts(ep->d_name);
				}
			}
			AString_Free(S);
		}
		ep = ADir_Read(dp);
	}
	ADir_Close(dp);
	return 0;
}

AError
func Install(AInt argc, AStr argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Not specified the name of the package\n");
		return -2;
	}

	for (i = 2; i < argc; i++)
	{
		InstallPackage(argv[i]);
	}
	return 0;
}

AError
func InstallPackage(AStr PackageName)
{
	printf("Installing '%s'...\n", PackageName);
	GetPackageList(PackageName);
	printf("Not installed\n");
	return -1;
}
