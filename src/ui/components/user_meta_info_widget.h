#ifndef USERMETAINFO_H
#define USERMETAINFO_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPixmap>

namespace ui {
namespace components {

class UserMetaInfoWidget : public QWidget {
    Q_OBJECT
public:
    explicit UserMetaInfoWidget(const QString &username, const QPixmap &avatar,
                                int friends_count, int bolt_count, int songs_count,
                                QWidget *parent = nullptr);

private:
    QLabel *m_avatar_label;
    QLabel *m_bolt_label;
    QLabel *m_music_note_label;
    QLabel *m_friends_label;

    QLabel *m_username_label;
    QLabel *m_friends_count_label;
    QLabel *m_bolt_count_label;
    QLabel *m_songs_label;

    void SetupUi(const QPixmap &avatar);
};

} // namespace components
} // namespace ui

#endif // USERMETAINFO_H
