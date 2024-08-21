# Tên của file thực thi
TARGET = main

# Biến chứa các file nguồn
SRCS = main.cpp model/src/taiLieu.cpp model/src/sach.cpp model/src/tapChi.cpp model/src/bao.cpp model/src/quanLySach.cpp

# Biến chứa các file đối tượng (object files)
OBJS = $(SRCS:.cpp=.o)

# Trình biên dịch và cờ biên dịch
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Quy tắc mặc định để biên dịch toàn bộ chương trình
all: $(TARGET)

# Quy tắc tạo file thực thi
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Quy tắc tạo các file đối tượng từ các file .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Quy tắc làm sạch (xóa các file biên dịch)
clean:
	rm -f $(OBJS) $(TARGET)

# Quy tắc để biên dịch lại từ đầu
rebuild: clean all
