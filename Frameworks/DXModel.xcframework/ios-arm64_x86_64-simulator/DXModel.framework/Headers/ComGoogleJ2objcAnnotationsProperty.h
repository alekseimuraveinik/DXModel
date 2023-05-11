
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsProperty")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsProperty
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsProperty 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsProperty 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsProperty

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsProperty_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsProperty || defined(INCLUDE_ComGoogleJ2objcAnnotationsProperty))
#define ComGoogleJ2objcAnnotationsProperty_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@protocol ComGoogleJ2objcAnnotationsProperty < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsProperty)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsProperty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsProperty")
