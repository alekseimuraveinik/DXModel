
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationNonnegative")
#ifdef RESTRICT_JavaxAnnotationNonnegative
#define INCLUDE_ALL_JavaxAnnotationNonnegative 0
#else
#define INCLUDE_ALL_JavaxAnnotationNonnegative 1
#endif
#undef RESTRICT_JavaxAnnotationNonnegative

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationNonnegative_) && (INCLUDE_ALL_JavaxAnnotationNonnegative || defined(INCLUDE_JavaxAnnotationNonnegative))
#define JavaxAnnotationNonnegative_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationNonnegative < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationNonnegative : NSObject < JavaxAnnotationNonnegative > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative)

FOUNDATION_EXPORT id<JavaxAnnotationNonnegative> create_JavaxAnnotationNonnegative(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative)

#endif

#if !defined (JavaxAnnotationNonnegative_Checker_) && (INCLUDE_ALL_JavaxAnnotationNonnegative || defined(INCLUDE_JavaxAnnotationNonnegative_Checker))
#define JavaxAnnotationNonnegative_Checker_

#define RESTRICT_JavaxAnnotationMetaTypeQualifierValidator 1
#define INCLUDE_JavaxAnnotationMetaTypeQualifierValidator 1
#include "JavaxAnnotationMetaTypeQualifierValidator.h"

@class JavaxAnnotationMetaWhen;
@protocol JavaxAnnotationNonnegative;

@interface JavaxAnnotationNonnegative_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype __nonnull)init;

- (JavaxAnnotationMetaWhen *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnegative>)annotation
                                                                       withId:(id)v;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative_Checker)

FOUNDATION_EXPORT void JavaxAnnotationNonnegative_Checker_init(JavaxAnnotationNonnegative_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationNonnegative_Checker *new_JavaxAnnotationNonnegative_Checker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxAnnotationNonnegative_Checker *create_JavaxAnnotationNonnegative_Checker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative_Checker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationNonnegative")
