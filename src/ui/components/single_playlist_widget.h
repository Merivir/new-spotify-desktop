#ifndef SINGLEPLAYLISTWIDGET_H
#define SINGLEPLAYLISTWIDGET_H

#include <QWidget>
#include <QLabel>

namespace ui {
namespace components {

class SinglePlaylistWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SinglePlaylistWidget(const QString &title, int songs, const QPixmap &artwork, QWidget *parent = nullptr);

private:
    QLabel *m_title_label;
    QLabel *m_song_count;
    QLabel *m_artwork_label;

    void SetupUi(const QString &title, int songs, const QPixmap &artwork);


signals:

};

} // components
} // ui

#endif // PLAYLISTWIDGET_H
