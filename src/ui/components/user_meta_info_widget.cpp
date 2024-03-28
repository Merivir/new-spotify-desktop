#include "user_meta_info_widget.h"

namespace ui {
namespace components {

UserMetaInfoWidget::UserMetaInfoWidget(const QString &username, const QPixmap &avatar,
                                       int friends_count, int bolt_count, int songsCount,
                                       QWidget *parent)
    : QWidget(parent),
      m_avatar_label(new QLabel(this)),
      m_bolt_label(new QLabel(this)),
      m_music_note_label(new QLabel(this)),
      m_friends_label(new QLabel(this)),
      m_username_label(new QLabel(username, this)),
      m_friends_count_label(new QLabel(QString::number(friends_count), this)),
      m_bolt_count_label(new QLabel(QString::number(bolt_count), this)),
      m_songs_label(new QLabel(QString::number(songsCount), this))
{
    SetupUi(avatar);
}

void UserMetaInfoWidget::SetupUi(const QPixmap &avatar)
{
    QPixmap scaled_avatar = avatar.scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    m_avatar_label->setPixmap(scaled_avatar);

    QPixmap bolt_icon("/home/merivirabyan/new-spotify-desktop/resources/bolt.png");
    QPixmap scaled_bolt = bolt_icon.scaled(24, 24, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    m_bolt_label->setPixmap(scaled_bolt);

    QPixmap friends_icon("/home/merivirabyan/new-spotify-desktop/resources/friend_list.png");
    QPixmap scaled_friend_list = friends_icon.scaled(24, 24, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    m_friends_label->setPixmap(scaled_friend_list);

    QPixmap music_note_icon("/home/merivirabyan/new-spotify-desktop/resources/musical_note.png");
    QPixmap scaled_note = music_note_icon.scaled(24, 24, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    m_music_note_label->setPixmap(scaled_note);

    QVBoxLayout *main_layout = new QVBoxLayout(this);
    QHBoxLayout *stats_layout = new QHBoxLayout();

    stats_layout->addWidget(m_music_note_label);
    stats_layout->addWidget(m_songs_label);
    stats_layout->addWidget(m_bolt_label);
    stats_layout->addWidget(m_bolt_count_label);
    stats_layout->addWidget(m_friends_label);
    stats_layout->addWidget(m_friends_count_label);

    QHBoxLayout *user_layout = new QHBoxLayout();
    user_layout->addWidget(m_avatar_label);
    user_layout->addWidget(m_username_label);

    main_layout->addLayout(user_layout);
    main_layout->addLayout(stats_layout);

    setLayout(main_layout);
}

} // namespace components
} // namespace ui
