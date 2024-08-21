#include "iostream"
#include "model/src/taiLieu.cpp"
#include "model/src/bao.cpp"
#include "model/src/tapChi.cpp"
#include "model/src/sach.cpp"
#include "model/src/quanLySach.cpp"

// Chương trình chính
int main() {
    quanLySach quanLy;


    // Thêm một số tài liệu
    quanLy.themMoiTaiLieu(new sach("S001", "NXB Kim Dong", 1000, "Nguyen Nhat Anh", 300));
    quanLy.themMoiTaiLieu(new tapChi("T001", "NXB Tre", 500, 12, 7));
    quanLy.themMoiTaiLieu(new bao("B001", "NXB Lao Dong", 700, "15/08/2024"));

    // Hiển thị tất cả tài liệu
    std::cout << "||=====================||" << std::endl;
    std::cout << "|| Danh sach tai lieu:   " << std::endl;
    std::cout << "||=====================||" << std::endl;
    quanLy.HienThiThongTinTaiLieu();

    // // Tìm kiếm tài liệu theo loại
    // cout << "Tim kiem tai lieu loai 'Sach':" << endl;
    // quanLy.timKiemTaiLieu("Sach");

    // // Xóa một tài liệu
    // quanLy.xoaTaiLieu("T001");

    // // Hiển thị lại danh sách tài liệu
    // cout << "Danh sach tai lieu sau khi xoa:" << endl;
    // quanLy.hienThiTaiLieu();

    return 0;
}
