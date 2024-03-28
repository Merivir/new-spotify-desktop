#include "friend_activity_widget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

namespace ui {
namespace components {

ui::components::FriendActivityWidget::FriendActivityWidget(const QString &userName,
                                                           const QString &songInfo,
                                                           const QPixmap &userAvatar,
                                                           QWidget *parent)
    : QWidget(parent)
    , m_now_listening_to(new QLabel("Now listening to"))
    , m_friend_chat_button(new QPushButton(this))
    , m_music_play_button(new QPushButton(this))
    , width(25)
{
   setObjectName("FriendActivityWidget");

   SetupUi(userName, songInfo, userAvatar);
}

void FriendActivityWidget::SetupUi(const QString &user_name,
                                   const QString &song_info,
                                   const QPixmap &user_avatar)
{
    SetupButton(m_music_play_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/play_music.png"));
    SetupButton(m_friend_chat_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/chats.png"));

    m_user_name_label = new QLabel(user_name, this);
    m_song_info_label = new QLabel(song_info, this);

    m_avatar_label = new QLabel(this);
    m_avatar_label->setPixmap(user_avatar.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    QVBoxLayout *layout = new QVBoxLayout(this);

    QVBoxLayout *friend_name_layout = new QVBoxLayout();

    friend_name_layout->addWidget(m_user_name_label);
    friend_name_layout->addWidget(m_now_listening_to);

    QHBoxLayout *friend_info_layout = new QHBoxLayout();

    friend_info_layout->addWidget(m_avatar_label);
    friend_info_layout->addLayout(friend_name_layout);
    friend_info_layout->addWidget(m_friend_chat_button);

    QHBoxLayout *friend_music_layout = new QHBoxLayout();

    friend_music_layout->addWidget(m_song_info_label);
    friend_music_layout->addWidget(m_music_play_button);


    layout->addLayout(friend_info_layout);
    layout->addLayout(friend_music_layout);

    this->setStyleSheet("FriendActivityWidget {"
                            "  border: 1px solid #c0c0c0;"
                            "  border-radius: 5px;"
                            "  background-color: #f0f0f0;"
                            "}");

    setLayout(layout);
}

void FriendActivityWidget::SetupButton(QPushButton* button, const QIcon& icon) {
    const QSize iconSize(width, width);
    button->setIcon(icon);
    button->setIconSize(iconSize);
    button->setFixedSize(iconSize);
    button->setStyleSheet(
        "QPushButton {"
        "background-color: transparent;"
        "border: none;"
        "}"
    );
}

} // components
} // ui
