#include "ChessboardModel.h"

ChessboardModel::ChessboardModel()
{
    m_pRedJu1 = new JuChesspieceModel(Color::red, "ju1", QStringLiteral("車"));
    m_pRedJu2 = new JuChesspieceModel(Color::red, "ju2", QStringLiteral("車"));
    m_pRedMa1 = new MaChesspieceModel(Color::red, "ma1", QStringLiteral("馬"));
    m_pRedMa2 = new MaChesspieceModel(Color::red, "ma2", QStringLiteral("馬"));
    m_pRedPao1 = new PaoChesspieceModel(Color::red, "pao1", QStringLiteral("砲"));
    m_pRedPao2 = new PaoChesspieceModel(Color::red, "pao2", QStringLiteral("砲"));
    m_pRedXiang1 = new XiangChesspieceModel(Color::red, "xiang1", QStringLiteral("相"));
    m_pRedXiang2 = new XiangChesspieceModel(Color::red, "xiang2", QStringLiteral("相"));
    m_pRedShi1 = new ShiChesspieceModel(Color::red, "shi1", QStringLiteral("仕"));
    m_pRedShi2 = new ShiChesspieceModel(Color::red, "shi2", QStringLiteral("仕"));
    m_pRedJiang = new JiangChesspieceModel(Color::red, "jiang", QStringLiteral("帅"));
    m_pRedZu1 = new ZuChesspieceModel(Color::red, "zu1", QStringLiteral("兵"));
    m_pRedZu2 = new ZuChesspieceModel(Color::red, "zu2", QStringLiteral("兵"));
    m_pRedZu3 = new ZuChesspieceModel(Color::red, "zu3", QStringLiteral("兵"));
    m_pRedZu4 = new ZuChesspieceModel(Color::red, "zu4", QStringLiteral("兵"));
    m_pRedZu5 = new ZuChesspieceModel(Color::red, "zu5", QStringLiteral("兵"));

    m_pBlackJu1 = new JuChesspieceModel(Color::black, "ju1", QStringLiteral("車"));
    m_pBlackJu2 = new JuChesspieceModel(Color::black, "ju2", QStringLiteral("車"));
    m_pBlackMa1 = new MaChesspieceModel(Color::black, "ma1", QStringLiteral("馬"));
    m_pBlackMa2 = new MaChesspieceModel(Color::black, "ma2", QStringLiteral("馬"));
    m_pBlackPao1 = new PaoChesspieceModel(Color::black, "pao1", QStringLiteral("炮"));
    m_pBlackPao2 = new PaoChesspieceModel(Color::black, "pao2", QStringLiteral("炮"));
    m_pBlackXiang1 = new XiangChesspieceModel(Color::black, "xiang1", QStringLiteral("象"));
    m_pBlackXiang2 = new XiangChesspieceModel(Color::black, "xiang2", QStringLiteral("象"));
    m_pBlackShi1 = new ShiChesspieceModel(Color::black, "shi1", QStringLiteral("士"));
    m_pBlackShi2 = new ShiChesspieceModel(Color::black, "shi2", QStringLiteral("士"));
    m_pBlackJiang = new JiangChesspieceModel(Color::black, "jiang", QStringLiteral("将"));
    m_pBlackZu1 = new ZuChesspieceModel(Color::black, "zu1", QStringLiteral("卒"));
    m_pBlackZu2 = new ZuChesspieceModel(Color::black, "zu2", QStringLiteral("卒"));
    m_pBlackZu3 = new ZuChesspieceModel(Color::black, "zu3", QStringLiteral("卒"));
    m_pBlackZu4 = new ZuChesspieceModel(Color::black, "zu4", QStringLiteral("卒"));
    m_pBlackZu5 = new ZuChesspieceModel(Color::black, "zu5", QStringLiteral("卒"));


    m_pRedJu1->setPos(1, 10);
    m_pRedJu2->setPos(9, 10);
    m_pRedMa1->setPos(2, 10);
    m_pRedMa2->setPos(8, 10);
    m_pRedPao1->setPos(2, 8);
    m_pRedPao2->setPos(8, 8);
    m_pRedXiang1->setPos(3, 10);
    m_pRedXiang2->setPos(7, 10);
    m_pRedShi1->setPos(4, 10);
    m_pRedShi2->setPos(6, 10);
    m_pRedJiang->setPos(5, 10);
    m_pRedZu1->setPos(1, 7);
    m_pRedZu2->setPos(3, 7);
    m_pRedZu3->setPos(5, 7);
    m_pRedZu4->setPos(7, 7);
    m_pRedZu5->setPos(9, 7);

    m_pBlackJu1->setPos(1, 1);
    m_pBlackJu2->setPos(9, 1);
    m_pBlackMa1->setPos(2, 1);
    m_pBlackMa2->setPos(8, 1);
    m_pBlackPao1->setPos(2, 3);
    m_pBlackPao2->setPos(8, 3);
    m_pBlackXiang1->setPos(3, 1);
    m_pBlackXiang2->setPos(7, 1);
    m_pBlackShi1->setPos(4, 1);
    m_pBlackShi2->setPos(6, 1);
    m_pBlackJiang->setPos(5, 1);
    m_pBlackZu1->setPos(1, 4);
    m_pBlackZu2->setPos(3, 4);
    m_pBlackZu3->setPos(5, 4);
    m_pBlackZu4->setPos(7, 4);
    m_pBlackZu5->setPos(9, 4);
}

QSet<ChesspieceModel *> ChessboardModel::getAllChesspieces()
{
    QSet<ChesspieceModel *> redSet = getAllRedChesspieces();
    QSet<ChesspieceModel *> blackSet = getAllBlackChesspieces();

    QSet<ChesspieceModel *> result;
    foreach (ChesspieceModel *red, redSet) {
        result.insert(red);
    }
    foreach (ChesspieceModel *black, blackSet) {
        result.insert(black);
    }

    return result;
}

QSet<ChesspieceModel *> ChessboardModel::getAllRedChesspieces()
{
    QSet<ChesspieceModel *> result;
    result.insert(m_pRedJu1);
    result.insert(m_pRedJu2);
    result.insert(m_pRedMa1);
    result.insert(m_pRedMa2);
    result.insert(m_pRedPao1);
    result.insert(m_pRedPao2);
    result.insert(m_pRedXiang1);
    result.insert(m_pRedXiang2);
    result.insert(m_pRedShi1);
    result.insert(m_pRedShi2);
    result.insert(m_pRedJiang);
    result.insert(m_pRedZu1);
    result.insert(m_pRedZu2);
    result.insert(m_pRedZu3);
    result.insert(m_pRedZu4);
    result.insert(m_pRedZu5);

    return result;
}

QSet<ChesspieceModel *> ChessboardModel::getAllBlackChesspieces()
{
    QSet<ChesspieceModel *> result;
    result.insert(m_pBlackJu1);
    result.insert(m_pBlackJu2);
    result.insert(m_pBlackMa1);
    result.insert(m_pBlackMa2);
    result.insert(m_pBlackPao1);
    result.insert(m_pBlackPao2);
    result.insert(m_pBlackXiang1);
    result.insert(m_pBlackXiang2);
    result.insert(m_pBlackShi1);
    result.insert(m_pBlackShi2);
    result.insert(m_pBlackJiang);
    result.insert(m_pBlackZu1);
    result.insert(m_pBlackZu2);
    result.insert(m_pBlackZu3);
    result.insert(m_pBlackZu4);
    result.insert(m_pBlackZu5);

    return result;
}
