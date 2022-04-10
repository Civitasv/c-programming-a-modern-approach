// a
typedef char func(int);                 // func ==> char(int)
typedef func *func_ptr;                 // func_ptr ===> func *
typedef func_ptr func_ptr_array_10[10]; // func_ptr_array_10 ==> func_ptr[10]
func_ptr_array_10 x;

// b
typedef int array[5];                  // array ==> int[5]
typedef array *array_ptr;              // array_ptr ==> array*
typedef array_ptr array_ptr_func(int); // array_ptr_func ==> array_ptr(int)
array_ptr_func y;

// c
typedef float *float_int(int);
typedef float_int *float_int_void(void);
float_int_void z;

// d
typedef void outter_void_int(int);
typedef void *inner_void_int(int);
typedef outter_void_int *full_express(int, inner_void_int);
full_express zz;
