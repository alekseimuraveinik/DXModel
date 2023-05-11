
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationSigned")
#ifdef RESTRICT_JavaxAnnotationSigned
#define INCLUDE_ALL_JavaxAnnotationSigned 0
#else
#define INCLUDE_ALL_JavaxAnnotationSigned 1
#endif
#undef RESTRICT_JavaxAnnotationSigned

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationSigned_) && (INCLUDE_ALL_JavaxAnnotationSigned || defined(INCLUDE_JavaxAnnotationSigned))
#define JavaxAnnotationSigned_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationSigned < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationSigned : NSObject < JavaxAnnotationSigned >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationSigned)

FOUNDATION_EXPORT id<JavaxAnnotationSigned> create_JavaxAnnotationSigned(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationSigned)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationSigned")
