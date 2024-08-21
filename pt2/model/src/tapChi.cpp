#include "../header/tapChi.h"

inline void tapChi::hienThiThongTin()const {
    taiLieu::hienThiThongTin();
    std::cout << "soPhatHanh: " << soPhatHanh <<  std::endl;
    std::cout << "thangPhatHanh: " << thangPhatHanh << std::endl;
};

inline std::string tapChi::getTheLoai() const{
    return "tapChi";
}