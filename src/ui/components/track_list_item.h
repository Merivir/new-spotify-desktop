#ifndef TRACKLISTITEM_H
#define TRACKLISTITEM_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QString>

namespace ui
{
namespace components
{

class TrackListItem : public QWidget
{
    Q_OBJECT
public:
    explicit TrackListItem(QWidget *parent = nullptr);

    void SetSongTitle(const QString& title);
    void SetArtistName(const QString& name);
    void SetAlbumArt(const QString& photoPath);

private:
    QLabel *m_song_title_label;
    QLabel *m_song_artist_label;
    QLabel *m_album_art_label;

    void SetupUi();
};


} // components
} // ui

#endif // TRACKLISTITEM_H
