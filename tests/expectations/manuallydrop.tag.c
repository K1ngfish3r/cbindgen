#ifdef __cplusplus
template <typename T>
using ManuallyDrop = T;
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct NotReprC_ManuallyDrop_Point;

typedef struct NotReprC_ManuallyDrop_Point Foo;

struct Point {
  int32_t x;
  int32_t y;
};

struct MyStruct {
  struct Point point;
};

void root(const Foo *a, const struct MyStruct *with_manual_drop);

void take(struct Point with_manual_drop);