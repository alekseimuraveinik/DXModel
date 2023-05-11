
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe")
#ifdef RESTRICT_JavaxAnnotationConcurrentThreadSafe
#define INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentThreadSafe

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentThreadSafe_) && (INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe || defined(INCLUDE_JavaxAnnotationConcurrentThreadSafe))
#define JavaxAnnotationConcurrentThreadSafe_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationConcurrentThreadSafe < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentThreadSafe : NSObject < JavaxAnnotationConcurrentThreadSafe >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentThreadSafe)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentThreadSafe> create_JavaxAnnotationConcurrentThreadSafe(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentThreadSafe)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe")
