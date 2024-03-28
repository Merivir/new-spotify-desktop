#include "all_playlist_widget.h"
#include "src/ui/components/single_playlist_widget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

namespace ui {
namespace components {


AllPlaylistWidget::AllPlaylistWidget(QWidget *parent)
    : QWidget(parent)
    , width(25)
{
    SetupUI();
}

void AllPlaylistWidget::SetupUI()
{
     QVBoxLayout *layout = new QVBoxLayout(this);

     QWidget* activityContainer = new QWidget();
     QVBoxLayout* activityLayout = new QVBoxLayout(activityContainer);

     for (int i = 0; i < 5; ++i) {
         QPixmap artwork("/home/merivirabyan/new-spotify-desktop/resources/albums.jpg");
         SinglePlaylistWidget *playlistWidget = new SinglePlaylistWidget("Playlist Title", 44, artwork, activityContainer);
         activityLayout->addWidget(playlistWidget);
     }

     m_scroll_area = new QScrollArea();

     activityContainer->setLayout(activityLayout);
     m_scroll_area->setWidget(activityContainer);

     QPushButton *addButton = new QPushButton("New Playlist", this);
     addButton->setIcon(QIcon("/home/merivirabyan/new-spotify-desktop/resources/add_button.png"));
     activityLayout->addWidget(addButton);
     layout->addWidget(m_scroll_area);

     setLayout(layout);
}

void AllPlaylistWidget::SetupButton(QPushButton* button, const QIcon& icon, const QSize& iconSize) {
    button->setIcon(icon);
    button->setIconSize(iconSize);
    button->setText("New Playlist");
    button->setFixedSize(iconSize);
}

} // components
} // ui
