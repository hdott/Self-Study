#ifndef QSTD_H
#define QSTD_H
#include <QTextStream>
#include <QFile>

namespace qstd {

      // declared but not defined:
      extern QTextStream cout;
      extern QTextStream cin;
      extern QTextStream cerr;

      // function declarations:
      bool yes(QString yesNoQuestion);
      bool more(QString prompt);
      int promptInt(int base = 10);
      double promptDouble();
      void promptOutputFile(QFile& outfile);
      void promptInputFile(QFile& infile);
};

QTextStream qstd::cout(stdout, QIODevice::WriteOnly);
QTextStream qstd::cin(stdin, QIODevice::ReadOnly);
QTextStream qstd::cerr(stderr, QIODevice::WriteOnly);

/* Namespace members are like static class members */
bool qstd::yes(QString question) {
    QString ans;
    cout << QString(" %1 [y/n]? ").arg(question);
    cout.flush();
    ans = cin.readLine();
    return (ans.startsWith("Y", Qt::CaseInsensitive));
}

#endif // QSTD_H
