
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationCheckReturnValue")
#ifdef RESTRICT_JavaxAnnotationCheckReturnValue
#define INCLUDE_ALL_JavaxAnnotationCheckReturnValue 0
#else
#define INCLUDE_ALL_JavaxAnnotationCheckReturnValue 1
#endif
#undef RESTRICT_JavaxAnnotationCheckReturnValue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationCheckReturnValue_) && (INCLUDE_ALL_JavaxAnnotationCheckReturnValue || defined(INCLUDE_JavaxAnnotationCheckReturnValue))
#define JavaxAnnotationCheckReturnValue_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationCheckReturnValue < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationCheckReturnValue : NSObject < JavaxAnnotationCheckReturnValue > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationCheckReturnValue)

FOUNDATION_EXPORT id<JavaxAnnotationCheckReturnValue> create_JavaxAnnotationCheckReturnValue(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationCheckReturnValue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationCheckReturnValue")
