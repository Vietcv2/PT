#ifndef TAPCHI_H
#define TAPCHI_H

#include "taiLieu.h"

class tapChi : public taiLieu {
    private:
        int soPhatHanh;
        int thangPhatHanh;
    public:
        tapChi(std::string maTaiLieu, std::string tenNhaXuatBan, int soBanPhatHanh, int soPhatHanh, int thangPhatHanh)
        : taiLieu(maTaiLieu, tenNhaXuatBan, soBanPhatHanh), soPhatHanh(soPhatHanh), thangPhatHanh(thangPhatHanh) {};

        void hienThiThongTin() const override;  // Định nghĩa hàm
        std::string getTheLoai() const override;
};  

#endif