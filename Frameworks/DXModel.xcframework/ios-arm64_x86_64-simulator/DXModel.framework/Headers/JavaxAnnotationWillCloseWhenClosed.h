
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationWillCloseWhenClosed")
#ifdef RESTRICT_JavaxAnnotationWillCloseWhenClosed
#define INCLUDE_ALL_JavaxAnnotationWillCloseWhenClosed 0
#else
#define INCLUDE_ALL_JavaxAnnotationWillCloseWhenClosed 1
#endif
#undef RESTRICT_JavaxAnnotationWillCloseWhenClosed

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationWillCloseWhenClosed_) && (INCLUDE_ALL_JavaxAnnotationWillCloseWhenClosed || defined(INCLUDE_JavaxAnnotationWillCloseWhenClosed))
#define JavaxAnnotationWillCloseWhenClosed_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationWillCloseWhenClosed < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationWillCloseWhenClosed : NSObject < JavaxAnnotationWillCloseWhenClosed >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationWillCloseWhenClosed)

FOUNDATION_EXPORT id<JavaxAnnotationWillCloseWhenClosed> create_JavaxAnnotationWillCloseWhenClosed(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationWillCloseWhenClosed)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationWillCloseWhenClosed")
