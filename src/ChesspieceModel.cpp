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

ChariotChesspieceModel::ChariotChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool ChariotChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

HorseChesspieceModel::HorseChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool HorseChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

CannonChesspieceModel::CannonChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool CannonChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

ElephantChesspieceModel::ElephantChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool ElephantChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

GuardChesspieceModel::GuardChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool GuardChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

KingChesspieceModel::KingChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool KingChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}

PawnChesspieceModel::PawnChesspieceModel(Color color, const QString &name, const QString &chineseName):
    ChesspieceModel(color, name, chineseName)
{

}

bool PawnChesspieceModel::canMove(const ChessboardModel &board, int destX, int destY)
{
    return true;
}
