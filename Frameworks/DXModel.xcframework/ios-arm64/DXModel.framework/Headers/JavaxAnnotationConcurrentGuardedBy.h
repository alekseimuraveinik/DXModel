
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")
#ifdef RESTRICT_JavaxAnnotationConcurrentGuardedBy
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentGuardedBy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentGuardedBy_) && (INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy || defined(INCLUDE_JavaxAnnotationConcurrentGuardedBy))
#define JavaxAnnotationConcurrentGuardedBy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationConcurrentGuardedBy < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentGuardedBy : NSObject < JavaxAnnotationConcurrentGuardedBy > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentGuardedBy)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentGuardedBy> create_JavaxAnnotationConcurrentGuardedBy(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentGuardedBy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")
