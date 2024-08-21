#include "NhanVien.h"
#include <iostream>

NhanVien::NhanVien(string hoTen, int tuoi, string gioiTinh, string diaChi, string congViec)
    : CanBo(hoTen, tuoi, gioiTinh, diaChi), congViec(congViec) {}

void NhanVien::hienThiThongTin() const {
    cout << "Nhan Vien - Ho ten: " << hoTen << ", Tuoi: " << tuoi
         << ", Gioi tinh: " << gioiTinh << ", Dia chi: " << diaChi
         << ", Cong viec: " << congViec << endl;
}
