string decode(string s) {
  // 最简子问题：长度为 1 时，本身即是解密后的结果
  if (s.size() == 1) return s;
  // 对 s 进行左右翻转
  for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
    swap(s[i], s[j]);
  }
  // 将字符串 s 左右均分为两个字符串 s1, s2
  string s1 = s.substr(0, s.size() / 2);
  string s2 = s.substr(s.size() / 2, s.size() / 2);
  // s 的解密结果 = s1 的解密结果 + s2 的解密结果
  return decode(s1) + decode(s2);
}
