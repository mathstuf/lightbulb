#ifndef HOMEDISPLAY_H
#define HOMEDISPLAY_H

#include <QtGui/QWidget>

namespace Ui
{
    class HomeDisplay;
}

class HomeDisplay : public QWidget
{
    Q_OBJECT

public:
    HomeDisplay(QWidget *parent = 0);
    ~HomeDisplay();
//signals:
    void finishedNewsLoad();
    void finishedWeatherLoad();
//public slots:
    void playHelpMovie();
    void postHelpMovie();
    void newsIsLoading(int value);
    void weatherIsLoading(int value);

private:
    Ui::HomeDisplay *ui;
};

#endif // HOMEDISPLAY_H
