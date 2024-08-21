#include "CongNhan.h"
#include <iostream>

CongNhan::CongNhan(string hoTen, int tuoi, string gioiTinh, string diaChi, int bac)
    : CanBo(hoTen, tuoi, gioiTinh, diaChi), bac(bac) {}

void CongNhan::hienThiThongTin() const {
    // cout << "Cong Nhan - Ho ten: " << hoTen << ", Tuoi: " << tuoi
    //      << ", Gioi tinh: " << gioiTinh << ", Dia chi: " << diaChi
    //      << ", Bac: " << bac << endl;
}
