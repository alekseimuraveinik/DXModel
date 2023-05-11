
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaExclusive")
#ifdef RESTRICT_JavaxAnnotationMetaExclusive
#define INCLUDE_ALL_JavaxAnnotationMetaExclusive 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaExclusive 1
#endif
#undef RESTRICT_JavaxAnnotationMetaExclusive

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaExclusive_) && (INCLUDE_ALL_JavaxAnnotationMetaExclusive || defined(INCLUDE_JavaxAnnotationMetaExclusive))
#define JavaxAnnotationMetaExclusive_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationMetaExclusive < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationMetaExclusive : NSObject < JavaxAnnotationMetaExclusive >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaExclusive)

FOUNDATION_EXPORT id<JavaxAnnotationMetaExclusive> create_JavaxAnnotationMetaExclusive(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaExclusive)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaExclusive")
