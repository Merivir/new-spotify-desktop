#ifndef SEARCHBAR_H
#define SEARCHBAR_H

#include <QLineEdit>
#include <QWidget>

namespace ui {
namespace components {

class SearchBar : public QWidget
{
    Q_OBJECT

public:
    explicit SearchBar(QWidget *parent);

private:
    QLineEdit *m_search_edit;
};


} // components
} // ui

#endif // SEARCHBAR_H
