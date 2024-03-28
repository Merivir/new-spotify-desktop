#ifndef MUSICPLAYERCONTROL_H
#define MUSICPLAYERCONTROL_H

#include <QWidget>
#include <QLabel>
#include <QSlider>
#include <QPushButton>

namespace ui {
namespace components {

class MusicPlayerControl : public QWidget {
    Q_OBJECT

public:
    explicit MusicPlayerControl(QWidget *parent = nullptr);

private:
    QLabel *m_current_time_label;
    QLabel *m_total_time_label;
    QSlider *m_progress_slider;
    QPushButton *m_play_button;
    QPushButton *m_next_button;
    QPushButton *m_previous_button;
    QPushButton *m_shuffle_button;
    QPushButton *m_repeat_button;

    const int width;
    const int height;

    void SetupUi();
    void SetupButton(QPushButton* button, const QIcon& icon, const QSize& iconSize);

};

} // components
} // ui

#endif // MUSICPLAYERCONTROL_H
