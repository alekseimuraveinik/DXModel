
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationUntainted")
#ifdef RESTRICT_JavaxAnnotationUntainted
#define INCLUDE_ALL_JavaxAnnotationUntainted 0
#else
#define INCLUDE_ALL_JavaxAnnotationUntainted 1
#endif
#undef RESTRICT_JavaxAnnotationUntainted

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationUntainted_) && (INCLUDE_ALL_JavaxAnnotationUntainted || defined(INCLUDE_JavaxAnnotationUntainted))
#define JavaxAnnotationUntainted_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationUntainted < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationUntainted : NSObject < JavaxAnnotationUntainted > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationUntainted)

FOUNDATION_EXPORT id<JavaxAnnotationUntainted> create_JavaxAnnotationUntainted(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationUntainted)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationUntainted")
