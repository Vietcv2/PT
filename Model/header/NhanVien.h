#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "CanBo.h"

class NhanVien : public CanBo {
private:
    string congViec;

public:
    NhanVien(string hoTen, int tuoi, string gioiTinh, string diaChi, string congViec);
    void hienThiThongTin() const override;
};

#endif
