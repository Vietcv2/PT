#ifndef BAO_H
#define BAO_H

#include "taiLieu.h"

class bao : public taiLieu{
    protected:
    std::string ngayPhatHanh;
    public:
    bao(std::string maTaiLieu, std::string tenNhaXuatBan, int soBanPhatHanh, std::string ngayPhatHanh)
    :    taiLieu(maTaiLieu, tenNhaXuatBan, soBanPhatHanh), ngayPhatHanh(ngayPhatHanh){}

    void hienThiThongTin() const override;  // Định nghĩa hàm
    std::string getTheLoai() const override;
};

#endif