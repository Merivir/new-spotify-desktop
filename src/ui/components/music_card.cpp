#include "music_card.h"

namespace ui {
namespace components {

MusicCard::MusicCard(const QString &title, const QPixmap &artwork, QWidget *parent)
    : QWidget(parent)
{
    SetupUi(title, artwork);
}

void MusicCard::SetupUi(const QString &title, const QPixmap &artwork) {

    m_artwork_label = new QLabel(this);
    m_artwork_label->setPixmap(artwork);
    m_title_label = new QLabel(title, this);

    m_artwork_label->setFixedSize(120, 120);
    m_artwork_label->setScaledContents(true);


    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_artwork_label);
    layout->addWidget(m_title_label);

    setLayout(layout);

    this->setStyleSheet(
            "MusicCard {"
            "  border: 1px solid #dcdcdc;"
            "  border-radius: 4px;"
            "  background-color: white;"
            "}"
            "QLabel {"
            "  color: black;"
            "  font-size: 16px;"
            "}"
        );
}


} // components
} // ui
