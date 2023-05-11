
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationSyntax")
#ifdef RESTRICT_JavaxAnnotationSyntax
#define INCLUDE_ALL_JavaxAnnotationSyntax 0
#else
#define INCLUDE_ALL_JavaxAnnotationSyntax 1
#endif
#undef RESTRICT_JavaxAnnotationSyntax

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationSyntax_) && (INCLUDE_ALL_JavaxAnnotationSyntax || defined(INCLUDE_JavaxAnnotationSyntax))
#define JavaxAnnotationSyntax_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationSyntax < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) JavaxAnnotationMetaWhen *when;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationSyntax : NSObject < JavaxAnnotationSyntax > {
 @public
  NSString *value_;
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationSyntax)

FOUNDATION_EXPORT id<JavaxAnnotationSyntax> create_JavaxAnnotationSyntax(NSString *value, JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationSyntax)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationSyntax")
