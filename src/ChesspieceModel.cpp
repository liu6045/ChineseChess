#include "ChesspieceModel.h"

#include "ChessboardModel.h"

ChesspieceModel::ChesspieceModel(Color color, const QString &name, const QString &chineseName):
    m_color(color),
    m_name(name),
    m_chineseName(name),
    m_x(-1),
    m_y(-1),
    m_alive(true)
{
}

bool ChesspieceModel::move(ChessboardModel &board, int destX, int destY)
{
    if (canMove(board, destX, destY)) {
        doMove(board, destX, destY);

        return true;
    } else {
        return false;
    }
}

void ChesspieceModel::doMove(ChessboardModel &board, int destX, int destY)
{
    setPos(destX, destY);

//    board.kill
}

void ChesspieceModel::setDeath()
{
    setPos(-1, -1);
    setAlive(false);
}

int ChesspieceModel::x() const
{
    return m_x;
}

int ChesspieceModel::y() const
{
    return m_y;
}

void ChesspieceModel::setPos(int x, int y)
{
    m_x = x;
    m_y = y;
}

bool ChesspieceModel::alive() const
{
    return m_alive;
}

void ChesspieceModel::setAlive(bool alive)
{
    m_alive = alive;
}

QString ChesspieceModel::name() const
{
    return m_name;
}

QString ChesspieceModel::chineseName() const
{
    return m_chineseName;
}

Color ChesspieceModel::color() const
{
    return m_color;
}

JuChesspieceModel::JuChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool JuChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

MaChesspieceModel::MaChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool MaChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

PaoChesspieceModel::PaoChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool PaoChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

XiangChesspieceModel::XiangChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool XiangChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

ShiChesspieceModel::ShiChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool ShiChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

JiangChesspieceModel::JiangChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool JiangChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

ZuChesspieceModel::ZuChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool ZuChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}
