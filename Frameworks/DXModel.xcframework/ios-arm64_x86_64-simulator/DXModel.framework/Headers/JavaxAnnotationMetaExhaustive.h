
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaExhaustive")
#ifdef RESTRICT_JavaxAnnotationMetaExhaustive
#define INCLUDE_ALL_JavaxAnnotationMetaExhaustive 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaExhaustive 1
#endif
#undef RESTRICT_JavaxAnnotationMetaExhaustive

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaExhaustive_) && (INCLUDE_ALL_JavaxAnnotationMetaExhaustive || defined(INCLUDE_JavaxAnnotationMetaExhaustive))
#define JavaxAnnotationMetaExhaustive_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationMetaExhaustive < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationMetaExhaustive : NSObject < JavaxAnnotationMetaExhaustive >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaExhaustive)

FOUNDATION_EXPORT id<JavaxAnnotationMetaExhaustive> create_JavaxAnnotationMetaExhaustive(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaExhaustive)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaExhaustive")
