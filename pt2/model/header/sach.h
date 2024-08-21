#ifndef SACH_H
#define SACH_H

#include "taiLieu.h"

class sach : public taiLieu{
    private:
        std::string tenTacGia;
        int soTrang;
    public:
        sach(std::string maTaiLieu, std::string tenNhaXuatBan, int soBanPhatHanh, std::string tenTacGia, int soTrang)
        : taiLieu(maTaiLieu, tenNhaXuatBan, soBanPhatHanh), tenTacGia(tenTacGia), soTrang(soTrang){}

    void hienThiThongTin() const override;  // Định nghĩa hàm
    std::string getTheLoai() const override;
};

#endif