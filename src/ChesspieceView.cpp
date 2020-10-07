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
    if (name.startsWith("ju")) {
//        if (color == Color::red) {
            JuView result(color);
            return result;
//        } else {
//            static JuView result(color);
//            return result;
//        }
    } else if (name.startsWith("ma")) {
//        if (color == Color::red) {
            MaView result(color);
            return result;
//        } else {
//            static MaView result(color);
//            return result;
//        }
    } else if (name.startsWith("pao")) {
//        if (color == Color::red) {
            PaoView result(color);
            return result;
//        } else {
//            static PaoView result(color);
//            return result;
//        }
    } else if (name.startsWith("xiang")) {
//        if (color == Color::red) {
            XiangView result(color);
            return result;
//        } else {
//            static XiangView result(color);
//            return result;
//        }
    } else if (name.startsWith("shi")) {
//        if (color == Color::red) {
            ShiView result(color);
            return result;
//        } else {
//            static ShiView result(color);
//            return result;
//        }
    } else if (name.startsWith("jiang")) {
//        if (color == Color::red) {
            JiangView result(color);
            return result;
//        } else {
//            static JiangView result(color);
//            return result;
//        }
    } else if (name.startsWith("zu")) {
//        if (color == Color::red) {
            ZuView result(color);
            return result;
//        } else {
//            static ZuView result(color);
//            return result;
//        }
    } else {
        ChesspieceView result(color);
        return result;
    }
}
