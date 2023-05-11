
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentImmutable")
#ifdef RESTRICT_JavaxAnnotationConcurrentImmutable
#define INCLUDE_ALL_JavaxAnnotationConcurrentImmutable 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentImmutable 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentImmutable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentImmutable_) && (INCLUDE_ALL_JavaxAnnotationConcurrentImmutable || defined(INCLUDE_JavaxAnnotationConcurrentImmutable))
#define JavaxAnnotationConcurrentImmutable_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationConcurrentImmutable < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentImmutable : NSObject < JavaxAnnotationConcurrentImmutable >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentImmutable)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentImmutable> create_JavaxAnnotationConcurrentImmutable(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentImmutable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentImmutable")
