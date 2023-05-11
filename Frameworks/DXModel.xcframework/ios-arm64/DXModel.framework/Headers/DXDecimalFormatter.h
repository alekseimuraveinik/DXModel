
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDecimalFormatter_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter || defined(INCLUDE_DXDecimalFormatter))
#define DXDecimalFormatter_

@protocol DXDecimalFormatter < JavaObject >

- (NSString *)getPointDelimiter;

- (NSString *)formatLongDecimalWithLong:(jlong)value;

- (jlong)parseLongDecimalWithNSString:(NSString *)valueStr
                              withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(DXDecimalFormatter)

J2OBJC_TYPE_LITERAL_HEADER(DXDecimalFormatter)

#define ComDevexpertsMobileDxplatformApiUtilDecimalFormatter DXDecimalFormatter

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter")
