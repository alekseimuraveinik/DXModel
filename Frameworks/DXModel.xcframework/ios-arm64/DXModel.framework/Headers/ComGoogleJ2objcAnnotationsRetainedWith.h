
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedWith")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsRetainedWith
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedWith 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedWith 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsRetainedWith

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsRetainedWith_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedWith || defined(INCLUDE_ComGoogleJ2objcAnnotationsRetainedWith))
#define ComGoogleJ2objcAnnotationsRetainedWith_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol ComGoogleJ2objcAnnotationsRetainedWith < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleJ2objcAnnotationsRetainedWith : NSObject < ComGoogleJ2objcAnnotationsRetainedWith >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsRetainedWith)

FOUNDATION_EXPORT id<ComGoogleJ2objcAnnotationsRetainedWith> create_ComGoogleJ2objcAnnotationsRetainedWith(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsRetainedWith)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedWith")
