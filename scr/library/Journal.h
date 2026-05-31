#ifndef JOURNAL_H
#define JOURNAL_H
#include "LibraryItem.h"
class Journal: public
LibraryItem {
public:
void checkout() override {}
};
#endif
