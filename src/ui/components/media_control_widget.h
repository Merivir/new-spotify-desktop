#ifndef MEDIACONTROLWIDGET_H
#define MEDIACONTROLWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

namespace ui {
namespace components {


class MediaControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MediaControlWidget(QWidget *parent);

private:
    QComboBox *m_friends_box;
    QLabel *m_next_music_info;
    QPushButton *m_play_next_music;

    const int width;

    void SetupUI();
    void SetupButton(QPushButton* button, const QIcon& icon);

};


} // components
} // ui

#endif // MEDIACONTROLWIDGET_H
