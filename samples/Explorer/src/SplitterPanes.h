///////////////////////////////////////////////////////
// SplitterPanes.h
//  Declaration of the CLeftPane and CRightPane classes

#ifndef SPLITTERPANES_H
#define SPLITTERPANES_H


#include "MyListView.h"
#include "MyTreeView.h"

class CLeftPane : public CDocker
{
public:
    CLeftPane();
    virtual ~CLeftPane() {}

private:
    CMyTreeView m_view;
};


class CRightPane : public CDocker
{
public:
    CRightPane();
    virtual ~CRightPane() {}

private:
    CMyListView m_view;
};



#endif // SPLITTERPANES_H

