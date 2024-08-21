#include "../header/sach.h"

inline void sach::hienThiThongTin() const {
    taiLieu::hienThiThongTin();
    std::cout << "tenTacGia: " << tenTacGia <<  std::endl;
    std::cout << "soTrang: " << soTrang << std::endl;
};

inline std::string sach::getTheLoai() const {
    return "sach";
}