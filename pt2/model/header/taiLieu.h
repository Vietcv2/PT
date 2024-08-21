#ifndef TAILIEU_H
#define TAILIEU_H

#include "iostream"
#include "string"
#include "vector"
#include <algorithm>


class taiLieu{
    protected:
        std::string maTaiLieu_S;
        std::string tenNhaSanXuat_S;
        int soBangPhatHang_V;

    public:
    taiLieu(std::string maTaiLieu, std::string tenNhaXuatBan, int soBanPhatHanh) 
        : maTaiLieu_S(maTaiLieu), tenNhaSanXuat_S(tenNhaXuatBan), soBangPhatHang_V(soBanPhatHanh) {}


    virtual void hienThiThongTin() const = 0;

    // Phương thức getter
    std::string getMaTaiLieu() const;
    std::string getTenNhaXuatBan() const;
    int getSoBanPhatHanh() const ;

    virtual std::string getTheLoai() const = 0; // pure virtual function

    virtual ~taiLieu() = default;  // Đảm bảo rằng destructor có định nghĩa




};


#endif