/**************************************************************************
**
** Copyright (C) 2015 AudioCodes Ltd.
** Author: Orgad Shaneh <orgad.shaneh@audiocodes.com>
** Contact: http://www.qt.io/licensing
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company.  For licensing terms and
** conditions see http://www.qt.io/terms-conditions.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file.  Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, The Qt Company gives you certain additional
** rights.  These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

#ifndef CLEARCASESETTINGS_H
#define CLEARCASESETTINGS_H

#include <QHash>
#include <QString>

QT_BEGIN_NAMESPACE
class QSettings;
QT_END_NAMESPACE

namespace ClearCase {
namespace Internal {

enum DiffType
{
    GraphicalDiff,
    ExternalDiff
};

class ClearCaseSettings
{
public:
    ClearCaseSettings();

    void fromSettings(QSettings *);
    void toSettings(QSettings *) const;

    inline int timeOutMS() const     { return timeOutS * 1000;  }
    inline int longTimeOutMS() const { return timeOutS * 10000; }

    bool equals(const ClearCaseSettings &s) const;

    QString ccCommand;
    QString ccBinaryPath;
    int historyCount;
    int timeOutS;
    DiffType diffType;
    QString diffArgs;
    bool autoAssignActivityName;
    bool autoCheckOut;
    bool promptToCheckIn;
    bool disableIndexer;
    QString indexOnlyVOBs;
    bool extDiffAvailable;
    QHash<QString, int> totalFiles;
};

inline bool operator==(const ClearCaseSettings &p1, const ClearCaseSettings &p2)
    { return p1.equals(p2); }
inline bool operator!=(const ClearCaseSettings &p1, const ClearCaseSettings &p2)
    { return !p1.equals(p2); }

} // namespace Internal
} // namespace ClearCase

#endif // CLEARCASESETTINGS_H
