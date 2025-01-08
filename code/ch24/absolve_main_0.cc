int main() {
  int n;
  cin >> n;
  int len = 1 << n; // 利用位移计算 2^n
  // 将 a 数组中 len * len 区域的数值都设置为 1
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      a[i][j] = 1;
    }
  }
  absolve(0, 0, len); 
  // 输出 a 数组 len * len 区域的数值
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}