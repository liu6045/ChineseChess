#include "ChesspieceView.h"

ChesspieceView::ChesspieceView(Color color):
    m_color(color)
{
}

QPixmap ChesspieceView::pixMap() const
{
    return m_pixMap;
}

ChesspieceView ChesspieceViewFactory::getPieceView(const QString &name, const Color color)
{
    if (name.startsWith("Chariot")) {
//        if (color == Color::red) {
            ChariotView result(color);
            return result;
//        } else {
//            static ChariotView result(color);
//            return result;
//        }
    } else if (name.startsWith("Horse")) {
//        if (color == Color::red) {
            HorseView result(color);
            return result;
//        } else {
//            static HorseView result(color);
//            return result;
//        }
    } else if (name.startsWith("Cannon")) {
//        if (color == Color::red) {
            CannonView result(color);
            return result;
//        } else {
//            static CannonView result(color);
//            return result;
//        }
    } else if (name.startsWith("Elephant")) {
//        if (color == Color::red) {
            ElephantView result(color);
            return result;
//        } else {
//            static ElephantView result(color);
//            return result;
//        }
    } else if (name.startsWith("Guard")) {
//        if (color == Color::red) {
            GuardView result(color);
            return result;
//        } else {
//            static GuardView result(color);
//            return result;
//        }
    } else if (name.startsWith("King")) {
//        if (color == Color::red) {
            KingView result(color);
            return result;
//        } else {
//            static KingView result(color);
//            return result;
//        }
    } else if (name.startsWith("Pawn")) {
//        if (color == Color::red) {
            PawnView result(color);
            return result;
//        } else {
//            static PawnView result(color);
//            return result;
//        }
    } else {
        ChesspieceView result(color);
        return result;
    }
}
