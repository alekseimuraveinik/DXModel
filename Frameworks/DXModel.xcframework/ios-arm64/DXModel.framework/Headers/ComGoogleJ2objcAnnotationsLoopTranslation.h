
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsLoopTranslation
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsLoopTranslation

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsLoopTranslation_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation || defined(INCLUDE_ComGoogleJ2objcAnnotationsLoopTranslation))
#define ComGoogleJ2objcAnnotationsLoopTranslation_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@protocol ComGoogleJ2objcAnnotationsLoopTranslation < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsLoopTranslation)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsLoopTranslation)

#endif

#if !defined (ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation || defined(INCLUDE_ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle))
#define ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_Enum) {
  ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_Enum_JAVA_ITERATOR = 0,
  ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_Enum_FAST_ENUMERATION = 1,
};

@interface ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *JAVA_ITERATOR NS_SWIFT_NAME(JAVA_ITERATOR);
@property (readonly, class, nonnull) ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *FAST_ENUMERATION NS_SWIFT_NAME(FAST_ENUMERATION);
+ (ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle * __nonnull)JAVA_ITERATOR;

+ (ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle * __nonnull)FAST_ENUMERATION;

#pragma mark Public

+ (ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_values_[];

inline ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_get_JAVA_ITERATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle, JAVA_ITERATOR)

inline ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_get_FAST_ENUMERATION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle, FAST_ENUMERATION)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_values(void);

FOUNDATION_EXPORT ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle *ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsLoopTranslation_LoopStyle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsLoopTranslation")
