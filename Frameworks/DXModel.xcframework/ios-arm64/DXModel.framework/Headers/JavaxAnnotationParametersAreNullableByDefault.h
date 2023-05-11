
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNullableByDefault")
#ifdef RESTRICT_JavaxAnnotationParametersAreNullableByDefault
#define INCLUDE_ALL_JavaxAnnotationParametersAreNullableByDefault 0
#else
#define INCLUDE_ALL_JavaxAnnotationParametersAreNullableByDefault 1
#endif
#undef RESTRICT_JavaxAnnotationParametersAreNullableByDefault

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationParametersAreNullableByDefault_) && (INCLUDE_ALL_JavaxAnnotationParametersAreNullableByDefault || defined(INCLUDE_JavaxAnnotationParametersAreNullableByDefault))
#define JavaxAnnotationParametersAreNullableByDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationParametersAreNullableByDefault < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationParametersAreNullableByDefault : NSObject < JavaxAnnotationParametersAreNullableByDefault >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationParametersAreNullableByDefault)

FOUNDATION_EXPORT id<JavaxAnnotationParametersAreNullableByDefault> create_JavaxAnnotationParametersAreNullableByDefault(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationParametersAreNullableByDefault)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNullableByDefault")
