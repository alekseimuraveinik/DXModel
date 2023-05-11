
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper")
#ifdef RESTRICT_JavaxAnnotationOverridingMethodsMustInvokeSuper
#define INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper 0
#else
#define INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper 1
#endif
#undef RESTRICT_JavaxAnnotationOverridingMethodsMustInvokeSuper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationOverridingMethodsMustInvokeSuper_) && (INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper || defined(INCLUDE_JavaxAnnotationOverridingMethodsMustInvokeSuper))
#define JavaxAnnotationOverridingMethodsMustInvokeSuper_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationOverridingMethodsMustInvokeSuper < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationOverridingMethodsMustInvokeSuper : NSObject < JavaxAnnotationOverridingMethodsMustInvokeSuper >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationOverridingMethodsMustInvokeSuper)

FOUNDATION_EXPORT id<JavaxAnnotationOverridingMethodsMustInvokeSuper> create_JavaxAnnotationOverridingMethodsMustInvokeSuper(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationOverridingMethodsMustInvokeSuper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper")
