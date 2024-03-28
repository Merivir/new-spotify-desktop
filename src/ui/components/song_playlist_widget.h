#ifndef SONGPLAYLISTWIDGET_H
#define SONGPLAYLISTWIDGET_H

#include "src/ui/components/music_card.h"

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

namespace ui {
namespace components {

class SongPlaylistWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SongPlaylistWidget(const QString &sectionTitle, QWidget *parent = nullptr);

private:
    QLabel *m_title_label;
    QLabel *m_see_all_button;

    void setupUi(const QString &sectionTitle);
};

} // namespace components
} // namespace ui

#endif // SONGPLAYLISTWIDGET_H
