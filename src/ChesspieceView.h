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

PIECEVIEW(Chariot, :/redChariot, :/blackChariot)
PIECEVIEW(Horse, :/redHorse, :/blackHorse)
PIECEVIEW(Cannon, :/redCannon, :/blackCannon)
PIECEVIEW(Elephant, :/redElephant, :/blackElephant)
PIECEVIEW(Guard, :/redGuard, :/blackGuard)
PIECEVIEW(King, :/redKing, :/blackKing)
PIECEVIEW(Pawn, :/redPawn, :/blackPawn)

#endif // CHESSPIECEVIEW_H
