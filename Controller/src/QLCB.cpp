// #include "../Controller/QLCB.h"
// #include "../Model/CongNhan.h"
// #include "../Model/KySu.h"
// #include "../Model/NhanVien.h"
// #include <iostream>

// using namespace std;



// QLCB::~QLCB() {
//     for (CanBo* canBo : danhSachCanBo) {
//         delete canBo;
//     }
// }


// void QLCB::themMoiCanBo(CanBo* canBo) {
//     danhSachCanBo.push_back(canBo);
// }

// CanBo* QLCB::timKiemTheoHoTen(string hoTen) {
//     for (CanBo* canBo : danhSachCanBo) {
//         if (canBo->getHoTen() == hoTen) {
//             return canBo;
//         }
//     }
//     return nullptr;
// }

// void QLCB::hienThiDanhSachCanBo() {
//     for (const CanBo* canBo : danhSachCanBo) {
//         View::hienThiThongTinCanBo(canBo);
//     }
// }


// void QLCB::chay() {
//     int luaChon;
//     do {
//         View::menuChinh();
//         cin >> luaChon;
//         cin.ignore();
//         switch (luaChon) {
//         case 1: {
//             int loai;
//             cout << "Chon loai can bo (1. Cong nhan, 2. Ky su, 3. Nhan vien): ";
//             cin >> loai;
//             cin.ignore();

//             string hoTen, gioiTinh, diaChi;
//             int tuoi;

//             cout << "Nhap ho ten: ";
//             getline(cin, hoTen);
//             cout << "Nhap tuoi: ";
//             cin >> tuoi;
//             cin.ignore();
//             cout << "Nhap gioi tinh: ";
//             getline(cin, gioiTinh);
//             cout << "Nhap dia chi: ";
//             getline(cin, diaChi);

//             if (loai == 1) {
//                 int bac;
//                 cout << "Nhap bac (1-10): ";
//                 cin >> bac;
//                 themMoiCanBo(new CongNhan(hoTen, tuoi, gioiTinh, diaChi, bac));
//             } else if (loai == 2) {
//                 string nganhDaoTao;
//                 cout << "Nhap nganh dao tao: ";
//                 getline(cin, nganhDaoTao);
//                 themMoiCanBo(new KySu(hoTen, tuoi, gioiTinh, diaChi, nganhDaoTao));
//             } else if (loai == 3) {
//                 string congViec;
//                 cout << "Nhap cong viec: ";
//                 getline(cin, congViec);
//                 themMoiCanBo(new NhanVien(hoTen, tuoi, gioiTinh, diaChi, congViec));
//             }
//             break;
//         }
//         case 2: {
//             string hoTen;
//             cout << "Nhap ho ten can tim: ";
//             getline(cin, hoTen);
//             CanBo* canBo = timKiemTheoHoTen(hoTen);
//             if (canBo) {
//                 View::hienThiThongTinCanBo(canBo);
//             } else {
//                 cout << "Khong tim thay can bo" << endl;
//             }
//             break;
//         }
//         case 3:
//             hienThiDanhSachCanBo();
//             break;
//         case 4:
//             cout << "Thoat chuong trinh." << endl;
//             break;
//         default:
//             cout << "Lua chon khong hop le." << endl;
//         }
//     } while (luaChon != 4);
// }

