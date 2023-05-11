
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeak")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsWeak
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeak 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeak 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsWeak

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsWeak_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeak || defined(INCLUDE_ComGoogleJ2objcAnnotationsWeak))
#define ComGoogleJ2objcAnnotationsWeak_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol ComGoogleJ2objcAnnotationsWeak < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleJ2objcAnnotationsWeak : NSObject < ComGoogleJ2objcAnnotationsWeak >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsWeak)

FOUNDATION_EXPORT id<ComGoogleJ2objcAnnotationsWeak> create_ComGoogleJ2objcAnnotationsWeak(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsWeak)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeak")
