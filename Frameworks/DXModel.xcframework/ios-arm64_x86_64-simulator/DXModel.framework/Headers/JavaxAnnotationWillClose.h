
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationWillClose")
#ifdef RESTRICT_JavaxAnnotationWillClose
#define INCLUDE_ALL_JavaxAnnotationWillClose 0
#else
#define INCLUDE_ALL_JavaxAnnotationWillClose 1
#endif
#undef RESTRICT_JavaxAnnotationWillClose

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationWillClose_) && (INCLUDE_ALL_JavaxAnnotationWillClose || defined(INCLUDE_JavaxAnnotationWillClose))
#define JavaxAnnotationWillClose_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationWillClose < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationWillClose : NSObject < JavaxAnnotationWillClose >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationWillClose)

FOUNDATION_EXPORT id<JavaxAnnotationWillClose> create_JavaxAnnotationWillClose(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationWillClose)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationWillClose")