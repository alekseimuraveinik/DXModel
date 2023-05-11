
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeakOuter")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsWeakOuter
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeakOuter 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeakOuter 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsWeakOuter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsWeakOuter_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeakOuter || defined(INCLUDE_ComGoogleJ2objcAnnotationsWeakOuter))
#define ComGoogleJ2objcAnnotationsWeakOuter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@protocol ComGoogleJ2objcAnnotationsWeakOuter < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsWeakOuter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsWeakOuter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsWeakOuter")
