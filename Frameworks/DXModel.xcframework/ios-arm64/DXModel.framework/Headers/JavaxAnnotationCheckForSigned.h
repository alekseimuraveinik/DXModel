
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationCheckForSigned")
#ifdef RESTRICT_JavaxAnnotationCheckForSigned
#define INCLUDE_ALL_JavaxAnnotationCheckForSigned 0
#else
#define INCLUDE_ALL_JavaxAnnotationCheckForSigned 1
#endif
#undef RESTRICT_JavaxAnnotationCheckForSigned

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationCheckForSigned_) && (INCLUDE_ALL_JavaxAnnotationCheckForSigned || defined(INCLUDE_JavaxAnnotationCheckForSigned))
#define JavaxAnnotationCheckForSigned_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationCheckForSigned < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationCheckForSigned : NSObject < JavaxAnnotationCheckForSigned >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationCheckForSigned)

FOUNDATION_EXPORT id<JavaxAnnotationCheckForSigned> create_JavaxAnnotationCheckForSigned(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationCheckForSigned)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationCheckForSigned")
