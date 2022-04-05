// 对 p 进行 free 后，p 中无法再访问 next 值.

// struct node *temp;

// p = first;
// while (p != NULL)
// {
//     temp = p;
//     p = p->next;
//     free(temp);
// }
