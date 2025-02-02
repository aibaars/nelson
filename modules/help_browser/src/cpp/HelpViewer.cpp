//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// SPDX-License-Identifier: LGPL-3.0-or-later
// LICENCE_BLOCK_END
//=============================================================================
#include <QtGui/QDesktopServices>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include "HelpViewer.h"
//=============================================================================
HelpViewer::HelpViewer(QHelpEngine* helpEngine, const QUrl& homepageUrl, QWidget* parent)
    : QTextBrowser(parent), helpEngine(helpEngine)
{
    setOpenLinks(false);
    connect(this, SIGNAL(anchorClicked(QUrl)), this, SLOT(setUrlSource(QUrl)));
    zoomLevel = 0;
    homepage = homepageUrl;
    goHomePage();
}
//=============================================================================
void
HelpViewer::goHomePage()
{
    setUrlSource(homepage);
}
//=============================================================================
QVariant
HelpViewer::loadResource(int type, const QUrl& url)
{
    if (helpEngine && url.scheme() == "qthelp") {
        return QVariant(helpEngine->fileData(url));
    }
    return QTextBrowser::loadResource(type, url);
}
//=============================================================================
void
HelpViewer::indexActivated(const QHelpLink& document, const QString& keyword)
{
    QUrl url = document.url;
    setUrlSource(url);
}
//=============================================================================
void
HelpViewer::indexesActivated(const QList<QHelpLink>& documents, const QString& keyword)
{
    QUrl url = documents[0].url;
    setUrlSource(url);
}
//=============================================================================
void
HelpViewer::setUrlSource(const QUrl& url)
{
    if (url.scheme() == "qthelp") {
        setSource(url);
    } else {
        QDesktopServices::openUrl(url);
    }
}
//=============================================================================
void
HelpViewer::wheelEvent(QWheelEvent* wheelEvent)
{
    if (wheelEvent->modifiers() == Qt::ControlModifier) {
        if (wheelEvent->angleDelta().y() > 0) {
            this->zoomIn();
        } else {
            this->zoomOut();
        }
        wheelEvent->accept();
    } else {
        QTextEdit::wheelEvent(wheelEvent);
    }
}
//=============================================================================
void
HelpViewer::setZoomIn(void)
{
    if (zoomLevel < MAX_ZOOM) {
        zoomIn();
        zoomLevel++;
    }
}
//=============================================================================
void
HelpViewer::setZoomOut(void)
{
    if (zoomLevel > MIN_ZOOM) {
        zoomOut();
        zoomLevel--;
    }
}
//=============================================================================
void
HelpViewer::setZoomDefault(void)
{
    zoomIn(-zoomLevel);
    zoomLevel = 0;
}
//=============================================================================
void
HelpViewer::printCurrent(void)
{
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog* dlg = new QPrintDialog(&printer, this);
    if (this->textCursor().hasSelection()) {
        dlg->setOption(QAbstractPrintDialog::PrintSelection, true);
    }
    dlg->setOption(QAbstractPrintDialog::PrintPageRange);
    dlg->setOption(QAbstractPrintDialog::PrintCollateCopies);
    if (dlg->exec() == QDialog::Accepted) {
        this->print(&printer);
    }
    delete dlg;
    dlg = nullptr;
}
//=============================================================================
