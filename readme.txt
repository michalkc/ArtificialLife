Do instalacji zale�no�ci z repozytorium Ubuntu zosta� stworzony skrypt "dependancy" znajduj�cy si� w g��wnym katalogu projektu.

Do poprawnego dzia�ania program wymaga frameworka Qt. Wymaga on r�cznego przeprowadzenia procesu instalacji.
Skrypt "qtdownload" powinien pobra� odpowiedni� wersj� Qt (5.8) oraz w��czy� instalator. Skrypt buduj�cy SCons
wymaga podania �cie�ki do miejsca instalacji Qt do zmiennej QT_linux_path w pliku SConstruct. Standardowo
ta zmienna jest ustawiona na domy�ln� �cie�k� instalacji Qt ($HOME/Qt5.8.0)