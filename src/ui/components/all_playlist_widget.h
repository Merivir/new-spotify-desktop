#ifndef ALLPLAYLISTWIDGET_H
#define ALLPLAYLISTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QScrollArea>

namespace ui {
namespace components {

class AllPlaylistWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AllPlaylistWidget(QWidget *parent = nullptr);

private:
    QPushButton *m_add_playlist_button;
    QScrollArea *m_scroll_area;

    const int width;
    void SetupUI();
    void SetupButton(QPushButton* button, const QIcon& icon, const QSize& iconSize);

signals:

};

} // components
} // ui

#endif // ALLPLAYLISTWIDGET_H
