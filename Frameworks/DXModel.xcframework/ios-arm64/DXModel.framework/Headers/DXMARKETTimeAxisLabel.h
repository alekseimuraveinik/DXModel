
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxisLabel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartTimeAxisLabel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxisLabel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxisLabel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartTimeAxisLabel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETTimeAxisLabel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxisLabel || defined(INCLUDE_DXMARKETTimeAxisLabel))
#define DXMARKETTimeAxisLabel_

@interface DXMARKETTimeAxisLabel : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)text
                                   withInt:(jint)scale_
                                withDouble:(jdouble)offset
                                   withInt:(jint)step;

- (jdouble)getOffset;

- (jint)getScale;

- (jint)getStep;

- (NSString *)getText;

- (jint)getXPos;

- (void)setXPosWithInt:(jint)xPos;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETTimeAxisLabel)

FOUNDATION_EXPORT void DXMARKETTimeAxisLabel_initWithNSString_withInt_withDouble_withInt_(DXMARKETTimeAxisLabel *self, NSString *text, jint scale_, jdouble offset, jint step);

FOUNDATION_EXPORT DXMARKETTimeAxisLabel *new_DXMARKETTimeAxisLabel_initWithNSString_withInt_withDouble_withInt_(NSString *text, jint scale_, jdouble offset, jint step) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETTimeAxisLabel *create_DXMARKETTimeAxisLabel_initWithNSString_withInt_withDouble_withInt_(NSString *text, jint scale_, jdouble offset, jint step);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETTimeAxisLabel)

@compatibility_alias ComDevexpertsDxmarketClientModelChartTimeAxisLabel DXMARKETTimeAxisLabel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxisLabel")
