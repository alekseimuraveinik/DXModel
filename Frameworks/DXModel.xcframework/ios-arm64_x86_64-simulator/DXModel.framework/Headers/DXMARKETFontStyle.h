
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartFontStyle")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartFontStyle
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartFontStyle 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartFontStyle 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartFontStyle

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETFontStyle_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartFontStyle || defined(INCLUDE_DXMARKETFontStyle))
#define DXMARKETFontStyle_

@interface DXMARKETFontStyle : NSObject
@property (class) jint FONT_STYLE_DEFAULT NS_SWIFT_NAME(FONT_STYLE_DEFAULT);
@property (class) jint FONT_STYLE_BOLD NS_SWIFT_NAME(FONT_STYLE_BOLD);
@property (class) jint FONT_STYLE_SIZE_MASK NS_SWIFT_NAME(FONT_STYLE_SIZE_MASK);
@property (class) jint FONT_STYLE_BIG NS_SWIFT_NAME(FONT_STYLE_BIG);
@property (class) jint FONT_STYLE_SIZE_UNDEFINED NS_SWIFT_NAME(FONT_STYLE_SIZE_UNDEFINED);
@property (class) jint FONT_STYLE_SMALL NS_SWIFT_NAME(FONT_STYLE_SMALL);

+ (jint)FONT_STYLE_DEFAULT;

+ (void)setFONT_STYLE_DEFAULT:(jint)value;

+ (jint)FONT_STYLE_BOLD;

+ (void)setFONT_STYLE_BOLD:(jint)value;

+ (jint)FONT_STYLE_SIZE_MASK;

+ (void)setFONT_STYLE_SIZE_MASK:(jint)value;

+ (jint)FONT_STYLE_BIG;

+ (void)setFONT_STYLE_BIG:(jint)value;

+ (jint)FONT_STYLE_SIZE_UNDEFINED;

+ (void)setFONT_STYLE_SIZE_UNDEFINED:(jint)value;

+ (jint)FONT_STYLE_SMALL;

+ (void)setFONT_STYLE_SMALL:(jint)value;

#pragma mark Public

- (instancetype __nonnull)init;

+ (jboolean)isBigWithInt:(jint)fontStyle;

+ (jboolean)isBoldWithInt:(jint)fontStyle;

+ (jboolean)isSmallWithInt:(jint)fontStyle;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETFontStyle)

inline jint DXMARKETFontStyle_get_FONT_STYLE_DEFAULT(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_DEFAULT(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_DEFAULT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_DEFAULT;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_DEFAULT, jint)

inline jint DXMARKETFontStyle_get_FONT_STYLE_BOLD(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_BOLD(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_BOLD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_BOLD;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_BOLD, jint)

inline jint DXMARKETFontStyle_get_FONT_STYLE_SIZE_MASK(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_SIZE_MASK(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_SIZE_MASK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_SIZE_MASK;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_SIZE_MASK, jint)

inline jint DXMARKETFontStyle_get_FONT_STYLE_BIG(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_BIG(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_BIG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_BIG;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_BIG, jint)

inline jint DXMARKETFontStyle_get_FONT_STYLE_SIZE_UNDEFINED(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_SIZE_UNDEFINED(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_SIZE_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_SIZE_UNDEFINED;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_SIZE_UNDEFINED, jint)

inline jint DXMARKETFontStyle_get_FONT_STYLE_SMALL(void);
inline jint DXMARKETFontStyle_set_FONT_STYLE_SMALL(jint value);
inline jint *DXMARKETFontStyle_getRef_FONT_STYLE_SMALL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DXMARKETFontStyle_FONT_STYLE_SMALL;
J2OBJC_STATIC_FIELD_PRIMITIVE(DXMARKETFontStyle, FONT_STYLE_SMALL, jint)

FOUNDATION_EXPORT void DXMARKETFontStyle_init(DXMARKETFontStyle *self);

FOUNDATION_EXPORT DXMARKETFontStyle *new_DXMARKETFontStyle_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETFontStyle *create_DXMARKETFontStyle_init(void);

FOUNDATION_EXPORT jboolean DXMARKETFontStyle_isBoldWithInt_(jint fontStyle);

FOUNDATION_EXPORT jboolean DXMARKETFontStyle_isBigWithInt_(jint fontStyle);

FOUNDATION_EXPORT jboolean DXMARKETFontStyle_isSmallWithInt_(jint fontStyle);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETFontStyle)

@compatibility_alias ComDevexpertsDxmarketClientModelChartFontStyle DXMARKETFontStyle;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartFontStyle")
