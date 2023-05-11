
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsAutoreleasePool")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsAutoreleasePool
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsAutoreleasePool 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsAutoreleasePool 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsAutoreleasePool

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsAutoreleasePool_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsAutoreleasePool || defined(INCLUDE_ComGoogleJ2objcAnnotationsAutoreleasePool))
#define ComGoogleJ2objcAnnotationsAutoreleasePool_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@protocol ComGoogleJ2objcAnnotationsAutoreleasePool < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsAutoreleasePool)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsAutoreleasePool)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsAutoreleasePool")
