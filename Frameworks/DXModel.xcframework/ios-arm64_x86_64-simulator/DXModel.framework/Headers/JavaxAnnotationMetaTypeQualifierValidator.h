
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierValidator
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierValidator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaTypeQualifierValidator_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierValidator))
#define JavaxAnnotationMetaTypeQualifierValidator_

@class JavaxAnnotationMetaWhen;
@protocol JavaLangAnnotationAnnotation;

@protocol JavaxAnnotationMetaTypeQualifierValidator < JavaObject >

- (JavaxAnnotationMetaWhen * __nonnull)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation> __nonnull)annotation
                                                                                 withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierValidator)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator")