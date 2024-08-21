#include "View.h"
#include <iostream>

void View::hienThiThongTinCanBo(const CanBo* canBo) {
    canBo->hienThiThongTin();
}

void View::menuChinh() {
    cout << "1. Them moi can bo" << endl;
    cout << "2. Tim kiem can bo theo ho ten" << endl;
    cout << "3. Hien thi thong tin danh sach can bo" << endl;
    cout << "4. Thoat" << endl;
    cout << "Lua chon: ";
}
