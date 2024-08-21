#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "CanBo.h"

class CongNhan : public CanBo {
private:
    int bac;

public:
    CongNhan(string hoTen, int tuoi, string gioiTinh, string diaChi, int bac);
    void hienThiThongTin() const override;
};

#endif
