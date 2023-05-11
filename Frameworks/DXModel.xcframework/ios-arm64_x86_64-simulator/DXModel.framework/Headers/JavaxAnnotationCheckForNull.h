
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationCheckForNull")
#ifdef RESTRICT_JavaxAnnotationCheckForNull
#define INCLUDE_ALL_JavaxAnnotationCheckForNull 0
#else
#define INCLUDE_ALL_JavaxAnnotationCheckForNull 1
#endif
#undef RESTRICT_JavaxAnnotationCheckForNull

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationCheckForNull_) && (INCLUDE_ALL_JavaxAnnotationCheckForNull || defined(INCLUDE_JavaxAnnotationCheckForNull))
#define JavaxAnnotationCheckForNull_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationCheckForNull < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationCheckForNull : NSObject < JavaxAnnotationCheckForNull >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationCheckForNull)

FOUNDATION_EXPORT id<JavaxAnnotationCheckForNull> create_JavaxAnnotationCheckForNull(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationCheckForNull)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationCheckForNull")
