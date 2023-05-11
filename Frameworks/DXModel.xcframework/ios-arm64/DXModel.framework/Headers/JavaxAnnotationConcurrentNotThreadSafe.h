
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
#ifdef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentNotThreadSafe_) && (INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe || defined(INCLUDE_JavaxAnnotationConcurrentNotThreadSafe))
#define JavaxAnnotationConcurrentNotThreadSafe_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationConcurrentNotThreadSafe < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentNotThreadSafe : NSObject < JavaxAnnotationConcurrentNotThreadSafe >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentNotThreadSafe)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentNotThreadSafe> create_JavaxAnnotationConcurrentNotThreadSafe(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentNotThreadSafe)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
