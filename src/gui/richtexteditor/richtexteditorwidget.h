/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia. For licensing terms and
** conditions see http://qt.digia.com/licensing. For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights. These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/


#ifndef RICHTEXTEDITORWIDGET_H
#define RICHTEXTEDITORWIDGET_H

#include <QtWidgets/QTextEdit>

#include "../guilib.h"



class QTabWidget;
class QToolBar;


namespace HEHUI
{

class RichTextEditor;

class GUI_LIB_API RichTextEditorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RichTextEditorWidget(QWidget *parent = 0);
    ~RichTextEditorWidget();

    void setDefaultFont(const QFont &font);
    void setText(const QString &text);
    QString text(bool compactSRC, Qt::TextFormat format = Qt::AutoText) const;
    void setSourceCodeEditEnabled(bool enabled = true);

private slots:
    void tabIndexChanged(int newIndex);
    void richTextChanged();
    void sourceChanged();

    QString formatHTML(const QString &html, bool compactSRC = false) const;

private:
    enum TabIndex { RichTextIndex, SourceIndex };
    enum State { Clean, RichTextChanged, SourceChanged };
    RichTextEditor *m_richTextEditor;
    QTextEdit      *m_sourceCodeEditor;
    QTabWidget     *m_tab_widget;
    QWidget *m_sourceCodeWidget;
    State m_state;
    int m_initialTab;

};

} // namespace HEHUI



#endif // RICHTEXTEDITORWIDGET_H
