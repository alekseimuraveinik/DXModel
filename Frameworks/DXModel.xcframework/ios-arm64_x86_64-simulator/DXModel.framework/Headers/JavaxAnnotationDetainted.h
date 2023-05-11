
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationDetainted")
#ifdef RESTRICT_JavaxAnnotationDetainted
#define INCLUDE_ALL_JavaxAnnotationDetainted 0
#else
#define INCLUDE_ALL_JavaxAnnotationDetainted 1
#endif
#undef RESTRICT_JavaxAnnotationDetainted

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationDetainted_) && (INCLUDE_ALL_JavaxAnnotationDetainted || defined(INCLUDE_JavaxAnnotationDetainted))
#define JavaxAnnotationDetainted_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationDetainted < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationDetainted : NSObject < JavaxAnnotationDetainted >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationDetainted)

FOUNDATION_EXPORT id<JavaxAnnotationDetainted> create_JavaxAnnotationDetainted(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationDetainted)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationDetainted")
