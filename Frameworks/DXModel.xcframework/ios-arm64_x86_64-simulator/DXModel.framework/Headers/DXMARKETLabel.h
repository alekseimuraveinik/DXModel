
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLabel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartLabel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLabel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLabel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartLabel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLabel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLabel || defined(INCLUDE_DXMARKETLabel))
#define DXMARKETLabel_

@interface DXMARKETLabel : NSObject {
 @public
  NSString *text_;
  jint color_;
}
@property (readonly, class, strong) DXMARKETLabel *NEWLINE NS_SWIFT_NAME(NEWLINE);

+ (DXMARKETLabel *)NEWLINE;

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)text
                                   withInt:(jint)color;

- (jboolean)isNewLine;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(DXMARKETLabel)

J2OBJC_FIELD_SETTER(DXMARKETLabel, text_, NSString *)

inline DXMARKETLabel *DXMARKETLabel_get_NEWLINE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMARKETLabel *DXMARKETLabel_NEWLINE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETLabel, NEWLINE, DXMARKETLabel *)

FOUNDATION_EXPORT void DXMARKETLabel_initWithNSString_withInt_(DXMARKETLabel *self, NSString *text, jint color);

FOUNDATION_EXPORT DXMARKETLabel *new_DXMARKETLabel_initWithNSString_withInt_(NSString *text, jint color) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLabel *create_DXMARKETLabel_initWithNSString_withInt_(NSString *text, jint color);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLabel)

@compatibility_alias ComDevexpertsDxmarketClientModelChartLabel DXMARKETLabel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLabel")
