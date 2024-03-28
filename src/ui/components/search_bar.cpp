#include "search_bar.h"

#include <QHBoxLayout>
#include <QIcon>

namespace ui {
namespace components {

SearchBar::SearchBar(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout(this);

    m_search_edit = new QLineEdit(this);
    m_search_edit->setPlaceholderText("Filter");
    m_search_edit->addAction(QIcon("/home/merivirabyan/new-spotify-desktop/resources/search.png"), QLineEdit::LeadingPosition);
    layout->addWidget(m_search_edit);
}

} // components
} // ui
