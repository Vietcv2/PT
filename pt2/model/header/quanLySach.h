#ifndef QUANLYSACH_H
#define QUANLYSACH_H

#include "taiLieu.h"

class quanLySach{
    private:
    std::vector<taiLieu*> vectorTaiLieu;

    public:
    ~quanLySach(){
        for(auto taiLieu : vectorTaiLieu){
            delete taiLieu;
        }
    };
    void themMoiTaiLieu(taiLieu* vectorTaiLieu);
    void xoaTaiLieu();
    void HienThiThongTinTaiLieu();
    void timKiemTaiLieu(const std::string& theLoai) const;
    void exitProgramming();
};  

#endif