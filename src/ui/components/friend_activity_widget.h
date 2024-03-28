#ifndef FRIENDACTIVITYWIDGET_H
#define FRIENDACTIVITYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>

namespace ui {
namespace components {

class FriendActivityWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FriendActivityWidget(const QString &user_name,
                                  const QString &song_info,
                                  const QPixmap &user_avatar,
                                  QWidget *parent = nullptr);
private:
    QLabel *m_user_name_label;
    QLabel *m_now_listening_to;
    QLabel *m_song_info_label;
    QLabel *m_avatar_label;
    QPushButton *m_friend_chat_button;
    QPushButton *m_music_play_button;

    const int width;


    void SetupUi(const QString &userName,
                 const QString &songInfo,
                 const QPixmap &userAvatar);
    void SetupButton(QPushButton* button, const QIcon& icon);

};

} // components
} // ui

#endif // FRIENDACTIVITYWIDGET_H
