#include "../header/bao.h"

inline void bao::hienThiThongTin() const {
    taiLieu::hienThiThongTin();
    std::cout << "ngayPhatHanh: " << ngayPhatHanh << std::endl;

};

inline std::string bao::getTheLoai() const{
    return "bao";
}
