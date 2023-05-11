
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationNonnull")
#ifdef RESTRICT_JavaxAnnotationNonnull
#define INCLUDE_ALL_JavaxAnnotationNonnull 0
#else
#define INCLUDE_ALL_JavaxAnnotationNonnull 1
#endif
#undef RESTRICT_JavaxAnnotationNonnull

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationNonnull_) && (INCLUDE_ALL_JavaxAnnotationNonnull || defined(INCLUDE_JavaxAnnotationNonnull))
#define JavaxAnnotationNonnull_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationNonnull < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationNonnull : NSObject < JavaxAnnotationNonnull > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnull)

FOUNDATION_EXPORT id<JavaxAnnotationNonnull> create_JavaxAnnotationNonnull(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnull)

#endif

#if !defined (JavaxAnnotationNonnull_Checker_) && (INCLUDE_ALL_JavaxAnnotationNonnull || defined(INCLUDE_JavaxAnnotationNonnull_Checker))
#define JavaxAnnotationNonnull_Checker_

#define RESTRICT_JavaxAnnotationMetaTypeQualifierValidator 1
#define INCLUDE_JavaxAnnotationMetaTypeQualifierValidator 1
#include "JavaxAnnotationMetaTypeQualifierValidator.h"

@class JavaxAnnotationMetaWhen;
@protocol JavaxAnnotationNonnull;

@interface JavaxAnnotationNonnull_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype __nonnull)init;

- (JavaxAnnotationMetaWhen *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnull>)qualifierArgument
                                                                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnull_Checker)

FOUNDATION_EXPORT void JavaxAnnotationNonnull_Checker_init(JavaxAnnotationNonnull_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationNonnull_Checker *new_JavaxAnnotationNonnull_Checker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxAnnotationNonnull_Checker *create_JavaxAnnotationNonnull_Checker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnull_Checker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationNonnull")
