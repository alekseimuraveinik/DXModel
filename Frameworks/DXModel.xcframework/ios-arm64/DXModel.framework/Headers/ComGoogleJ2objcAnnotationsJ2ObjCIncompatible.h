
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsJ2ObjCIncompatible_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible || defined(INCLUDE_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible))
#define ComGoogleJ2objcAnnotationsJ2ObjCIncompatible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@protocol ComGoogleJ2objcAnnotationsJ2ObjCIncompatible < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsJ2ObjCIncompatible)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsJ2ObjCIncompatible)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsJ2ObjCIncompatible")
