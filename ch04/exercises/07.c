/*
 * 由于 (a - b) % p = (a % p - b % p ) % p
 * 所以 9 - (total - 1)%10 =
 *       9 - ((total % 10) - (1 % 10)) % 10 =
 *       9 - (total % 10) + 1 =
 *       10 - (total % 10)
 */