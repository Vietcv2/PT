#ifndef CANBO_H
#define CANBO_H

#include <string>
using namespace std;

class CanBo {
protected:
    string hoTen;
    int tuoi;
    string gioiTinh;
    string diaChi;

public:
    CanBo(string hoTen, int tuoi, string gioiTinh, string diaChi);
    virtual ~CanBo() {}

    virtual void hienThiThongTin() const = 0;
    string getHoTen() const;
};

#endif
