//#include <QCoreApplication>
#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QMessageBox>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream cout(stdout);

    int answer = 0;

    do{
        int factArg = 0;
        int fact(1);
        bool ok = true;
        factArg = QInputDialog::getInt(0, "Factorial Calculator", "Factorial of:", 1, 1, 214783647, 1, &ok);
        if(!ok){
            break;
        }

        cout << "User entered: " << factArg << endl;
        int i = 2;
        while (i  <= factArg){
            fact = fact * i;
            ++i;
        }
        QString response = QString("The factorial of %1 is %2.\n%3").arg(factArg).arg(fact)
                .arg("Do you want to compute another factorial?");
        answer = QMessageBox::question(0, "Play again?", response,
                                       QMessageBox::Yes | QMessageBox::No);
    } while(answer == QMessageBox::Yes);

    return EXIT_SUCCESS;
//    return a.exec();
}
