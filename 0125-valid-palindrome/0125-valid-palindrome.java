class Solution {
    public boolean isPalindrome(String s) {
        if (s.length() == 1 || s.length() == 0) return true;
        StringBuilder sb = new StringBuilder();
        for (int k = 0; k < s.length(); ++k) {
            if (s.charAt(k) >= 'a' && s.charAt(k) <= 'z') {
                sb.append((char)s.charAt(k));
            }
            else if (s.charAt(k) >= 'A' && s.charAt(k) <= 'Z') {
                sb.append((char)(s.charAt(k) + 32));
            }
            else if (s.charAt(k) >= '0' && s.charAt(k) <= '9') {
                sb.append((char)s.charAt(k));
            }
        }
        String res = sb.toString();
        for (int k = 0; k < res.length(); ++k) {
            if (res.charAt(k) != res.charAt(res.length() - k - 1)) return false;
        }
        return true;
    }
}