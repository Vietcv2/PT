#include "../header/quanLySach.h"

inline void quanLySach::themMoiTaiLieu(taiLieu* taiLieu){
    vectorTaiLieu.push_back(taiLieu);
}

inline void quanLySach::xoaTaiLieu(){

}
inline void quanLySach::HienThiThongTinTaiLieu(){
    for(const auto&taiLieu : vectorTaiLieu){
        taiLieu->hienThiThongTin();
        std::cout << "________________" << std::endl;
    }
}
inline void quanLySach::timKiemTaiLieu(const std::string& theLoai) const{
    for(const auto& taiLieu : vectorTaiLieu){
        if(taiLieu->getTheLoai() == theLoai) {
            taiLieu->hienThiThongTin();
            std::cout << "________________" << std::endl;
        }
    }

}
inline void quanLySach::exitProgramming(){

}

