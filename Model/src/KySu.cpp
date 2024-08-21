#include "KySu.h"
#include <iostream>

KySu::KySu(string hoTen, int tuoi, string gioiTinh, string diaChi, string nganhDaoTao)
    : CanBo(hoTen, tuoi, gioiTinh, diaChi), nganhDaoTao(nganhDaoTao) {}

void KySu::hienThiThongTin() const {
    cout << "Ky Su - Ho ten: " << hoTen << ", Tuoi: " << tuoi
         << ", Gioi tinh: " << gioiTinh << ", Dia chi: " << diaChi
         << ", Nganh dao tao: " << nganhDaoTao << endl;
}
