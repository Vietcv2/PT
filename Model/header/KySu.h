#ifndef KYSU_H
#define KYSU_H

#include "CanBo.h"

class KySu : public CanBo {
private:
    string nganhDaoTao;

public:
    KySu(string hoTen, int tuoi, string gioiTinh, string diaChi, string nganhDaoTao);
    void hienThiThongTin() const override;
};

#endif
