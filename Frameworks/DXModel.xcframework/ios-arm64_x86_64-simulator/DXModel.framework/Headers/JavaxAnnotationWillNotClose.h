
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationWillNotClose")
#ifdef RESTRICT_JavaxAnnotationWillNotClose
#define INCLUDE_ALL_JavaxAnnotationWillNotClose 0
#else
#define INCLUDE_ALL_JavaxAnnotationWillNotClose 1
#endif
#undef RESTRICT_JavaxAnnotationWillNotClose

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationWillNotClose_) && (INCLUDE_ALL_JavaxAnnotationWillNotClose || defined(INCLUDE_JavaxAnnotationWillNotClose))
#define JavaxAnnotationWillNotClose_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationWillNotClose < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationWillNotClose : NSObject < JavaxAnnotationWillNotClose >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationWillNotClose)

FOUNDATION_EXPORT id<JavaxAnnotationWillNotClose> create_JavaxAnnotationWillNotClose(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationWillNotClose)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationWillNotClose")
