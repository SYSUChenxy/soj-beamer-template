bool a[1050][1050]; // 边长最大为 2^10

// 对 a 数组中 (x, y) 为左上角，且边长为 len 的区域进行赦免操作
void absolve(int x, int y, int len) {
  // 最简子问题
  if (len == 1) return;
  // 将左上角子区域全部赋值为 0
  for (int i = x; i <= x + len / 2 - 1; i++) {
    for (int j = y; j <= y + len / 2 - 1; j++) {
      a[i][j] = 0;
    }
  }
  // 其他三个子区域继续进行“赦免”操作
  absolve(x, y + len / 2, len / 2);           // 右上角
  absolve(x + len / 2, y, len / 2);           // 左下角
  absolve(x + len / 2, y + len / 2, len / 2); // 右下角
}
