
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault")
#ifdef RESTRICT_JavaxAnnotationParametersAreNonnullByDefault
#define INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault 0
#else
#define INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault 1
#endif
#undef RESTRICT_JavaxAnnotationParametersAreNonnullByDefault

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationParametersAreNonnullByDefault_) && (INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault || defined(INCLUDE_JavaxAnnotationParametersAreNonnullByDefault))
#define JavaxAnnotationParametersAreNonnullByDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationParametersAreNonnullByDefault < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationParametersAreNonnullByDefault : NSObject < JavaxAnnotationParametersAreNonnullByDefault >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationParametersAreNonnullByDefault)

FOUNDATION_EXPORT id<JavaxAnnotationParametersAreNonnullByDefault> create_JavaxAnnotationParametersAreNonnullByDefault(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationParametersAreNonnullByDefault)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault")
