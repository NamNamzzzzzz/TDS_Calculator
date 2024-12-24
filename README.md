
# TDS Calculator

## Giới thiệu
Dự án **TDS Calculator** được phát triển như một giải pháp tích hợp cho ý tưởng khởi nghiệp ban đầu của **UnivStar Team 5**. Ban đầu, dự án chỉ tập trung vào bộ lọc nước, nhưng việc thêm cảm biến đo chất hòa tan (TDS - Total Dissolved Solids) đã giúp giải pháp trở nên nổi bật hơn về mặt công nghệ so với các đối thủ.

Dự án không chỉ đo lường mức độ TDS trong nước mà còn phân tích và đưa ra nhận định về chất lượng nước, đồng thời dự đoán thời điểm lõi lọc cần thay thế dựa trên chỉ số TDS. 

Dự án đã giúp đội đạt giải thưởng **"OUTSTANDING"** tại cuộc thi khởi nghiệp UnivStar.

---

## Công nghệ và phần cứng sử dụng
- **Arduino Nano**: Vi xử lý chính để xử lý dữ liệu từ cảm biến và giao tiếp với HC-06.
- **Bluetooth HC-06**: Truyền dữ liệu không dây đến ứng dụng di động.
- **Gravity DFRobot TDS Sensor**: Cảm biến đo tổng chất rắn hòa tan trong nước.
- **Màn hình LCD I2C**: Hiển thị trực quan giá trị TDS.
- **Nguồn điện hạ áp 5V**: Để đảm bảo an toàn và ổn định cho hệ thống.
- **MIT App Inventor**: Tạo ứng dụng di động để hiển thị chỉ số TDS và phân tích chất lượng nước.

---

## Tính năng
### Tính năng chính:
1. **Đo chỉ số TDS**: Đo lường mức độ chất hòa tan trong nước (mg/L).
2. **Phân tích chất lượng nước**:
   - Đưa ra nhận định về mức TDS (đạt chuẩn hay không).
   - Cảnh báo nếu lọc nước cần thay lọc.
3. **Hiển thị LCD**: Hiển thị giá trị TDS ngay trên màn hình LCD.
4. **Gửi dữ liệu qua Bluetooth**: Chỉ số TDS được gửi và hiển thị trên ứng dụng di động.

---

## Hướng dẫn đấu dây
### Kết nối cảm biến TDS với Arduino Nano:
- **VCC (TDS Sensor)** → 5V trên Arduino.
- **GND** → GND trên Arduino.
- **Analog Out** → Chân A1 trên Arduino.

### Kết nối HC-06 với Arduino Nano:
- **VCC** → 5V trên Arduino.
- **GND** → GND trên Arduino.
- **TX** → RX (Chân D2 trên Arduino).
- **RX** → TX (Chân D3 trên Arduino).

### Kết nối LCD I2C:
- **VCC** → 5V trên Arduino.
- **GND** → GND trên Arduino.
- **SDA** → Chân A4 trên Arduino.
- **SCL** → Chân A5 trên Arduino.

*Màn hình LCD sử dụng giao tiếp I2C giúp giảm số chân kết nối và tăng độ linh hoạt.*

---

## Hướng dẫn sử dụng
1. **Clone repository**:
   ```bash
   git clone https://github.com/yourusername/ten-repository.git
  png)

---

## Tài liệu tham khảo
- [Datasheet HC-06 Bluetooth Module](https://example.com/hc-06-datasheet)
- [Gravity TDS Sensor Documentation](https://www.dfrobot.com/product-1123.html)
- [MIT App Inventor](https://appinventor.mit.edu)
