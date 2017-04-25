Do instalacji zale¿noœci z repozytorium Ubuntu zosta³ stworzony skrypt "dependancy" znajduj¹cy siê w g³ównym katalogu projektu.

Do poprawnego dzia³ania program wymaga frameworka Qt. Wymaga on rêcznego przeprowadzenia procesu instalacji.
Skrypt "qtdownload" powinien pobraæ odpowiedni¹ wersjê Qt (5.8) oraz w³¹czyæ instalator. Skrypt buduj¹cy SCons
wymaga podania œcie¿ki do miejsca instalacji Qt do zmiennej QT_linux_path w pliku SConstruct. Standardowo
ta zmienna jest ustawiona na domyœln¹ œcie¿kê instalacji Qt ($HOME/Qt5.8.0)