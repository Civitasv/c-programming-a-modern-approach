/*
 * 数组 a 的类型变化之后，sizeof(a) / sizeof(a[0]) 仍然可以计算数组元素的个数，
 * 但 sizeof(a) / sizeof(t) 并不可以。
 */