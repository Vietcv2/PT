#include "../header/taiLieu.h"



inline void taiLieu::hienThiThongTin() const{
    std::cout << "Ma tai lieu: " << getMaTaiLieu() << std::endl;
    std::cout << "Ten nha xuat ban: " << getTenNhaXuatBan() << std::endl;
    std::cout << "So ban phat hanh: " << getSoBanPhatHanh() << std::endl;
};

inline std::string taiLieu::getMaTaiLieu() const {
        return maTaiLieu_S;
    }
inline std::string taiLieu::getTenNhaXuatBan() const { 
    return tenNhaSanXuat_S; 
    }
inline int taiLieu::getSoBanPhatHanh() const { 
    return soBangPhatHang_V; 
    }

