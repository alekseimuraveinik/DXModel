
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationTainted")
#ifdef RESTRICT_JavaxAnnotationTainted
#define INCLUDE_ALL_JavaxAnnotationTainted 0
#else
#define INCLUDE_ALL_JavaxAnnotationTainted 1
#endif
#undef RESTRICT_JavaxAnnotationTainted

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationTainted_) && (INCLUDE_ALL_JavaxAnnotationTainted || defined(INCLUDE_JavaxAnnotationTainted))
#define JavaxAnnotationTainted_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationTainted < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationTainted : NSObject < JavaxAnnotationTainted >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationTainted)

FOUNDATION_EXPORT id<JavaxAnnotationTainted> create_JavaxAnnotationTainted(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationTainted)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationTainted")
