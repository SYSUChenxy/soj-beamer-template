string s; 
// 对全局字符串 s 的某个区域进行“无限翻转”
// 该区域以 L 为左端点，长度为 len
void decode(int L, int len) {
  // 最简子问题
  if (len == 1) return;
  // 对当前区域进行左右翻转，左端点为 L，右端点为 L+len-1
  for (int i = L, j = L + len - 1; i < j; i++, j--) {
    swap(s[i], s[j]);
  }
  // 对左半区域进行“无限翻转”
  decode(L, len / 2);
  // 对右半区域进行“无限翻转”
  decode(L + len / 2, len / 2);
}
int main() {
  cin >> s;
  decode(0, s.size());
  cout << s << endl;
  return 0;
}
