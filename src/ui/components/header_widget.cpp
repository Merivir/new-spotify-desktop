#include "header_widget.h"

namespace ui {
namespace components {

#include "header_widget.h"

HeaderWidget::HeaderWidget(QWidget *parent) : QWidget(parent) {
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setFixedSize(170, 140);
    QPixmap backgroundPixmap("/home/merivirabyan/new-spotify-desktop/resources/background.jpg");
    backgroundLabel->setPixmap(backgroundPixmap.scaled(170, 170, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    backgroundLabel->setScaledContents(true);
    m_logoButton = new QPushButton(this);

    QPixmap logoPixmap("/home/merivirabyan/new-spotify-desktop/resources/logo.png");
    QIcon logoIcon(logoPixmap.scaled(32, 32, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    m_logoButton->setIcon(logoIcon);
    m_logoButton->setIconSize(QSize(32, 32));
    m_logoButton->setFlat(true);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(m_logoButton, 0, Qt::AlignLeft | Qt::AlignTop);
    backgroundLabel->lower();

    setLayout(layout);
}

} // namespace components
} // namespace ui
