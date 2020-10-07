#ifndef CHESSBOARDMODEL_H
#define CHESSBOARDMODEL_H

#include <QSet>

#include "ChesspieceModel.h"

class ChessboardModel
{
public:
    ChessboardModel();

    QSet<ChesspieceModel*> getAllChesspieces();
    QSet<ChesspieceModel*> getAllRedChesspieces();
    QSet<ChesspieceModel*> getAllBlackChesspieces();

private:
    // red
    ChesspieceModel *m_pRedJu1;
    ChesspieceModel *m_pRedJu2;
    ChesspieceModel *m_pRedMa1;
    ChesspieceModel *m_pRedMa2;
    ChesspieceModel *m_pRedPao1;
    ChesspieceModel *m_pRedPao2;
    ChesspieceModel *m_pRedXiang1;
    ChesspieceModel *m_pRedXiang2;
    ChesspieceModel *m_pRedShi1;
    ChesspieceModel *m_pRedShi2;
    ChesspieceModel *m_pRedJiang;
    ChesspieceModel *m_pRedZu1;
    ChesspieceModel *m_pRedZu2;
    ChesspieceModel *m_pRedZu3;
    ChesspieceModel *m_pRedZu4;
    ChesspieceModel *m_pRedZu5;

    // black
    ChesspieceModel *m_pBlackJu1;
    ChesspieceModel *m_pBlackJu2;
    ChesspieceModel *m_pBlackMa1;
    ChesspieceModel *m_pBlackMa2;
    ChesspieceModel *m_pBlackPao1;
    ChesspieceModel *m_pBlackPao2;
    ChesspieceModel *m_pBlackXiang1;
    ChesspieceModel *m_pBlackXiang2;
    ChesspieceModel *m_pBlackShi1;
    ChesspieceModel *m_pBlackShi2;
    ChesspieceModel *m_pBlackJiang;
    ChesspieceModel *m_pBlackZu1;
    ChesspieceModel *m_pBlackZu2;
    ChesspieceModel *m_pBlackZu3;
    ChesspieceModel *m_pBlackZu4;
    ChesspieceModel *m_pBlackZu5;
};

#endif // CHESSBOARDMODEL_H
