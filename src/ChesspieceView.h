#ifndef CHESSPIECEVIEW_H
#define CHESSPIECEVIEW_H

#include "types.h"

#include <QPixmap>
#include <QMap>

#define PIECEVIEW(piece, redRes, blackRes) \
class piece##View : public ChesspieceView \
{ \
public: \
piece##View(Color color): \
ChesspieceView(color) \
{ \
if (color == Color::red) { \
m_pixMap.load(#redRes); \
} else { \
m_pixMap.load(#blackRes); \
} \
} \
};

class ChesspieceView
{
public:
    ChesspieceView(Color color);

    QPixmap pixMap() const;

protected:
    Color m_color;
    QPixmap m_pixMap;
};

class ChesspieceViewFactory
{
public:
    static ChesspieceView getPieceView(const QString &name, const Color color);

};

PIECEVIEW(Ju, :/red_ju, :/black_ju)
PIECEVIEW(Ma, :/red_ma, :/black_ma)
PIECEVIEW(Pao, :/red_pao, :/black_pao)
PIECEVIEW(Xiang, :/red_xiang, :/black_xiang)
PIECEVIEW(Shi, :/red_shi, :/black_shi)
PIECEVIEW(Jiang, :/red_shuai, :/black_jiang)
PIECEVIEW(Zu, :/red_bing, :/black_zu)

#endif // CHESSPIECEVIEW_H
