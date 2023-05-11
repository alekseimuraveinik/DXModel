
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierDefault
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierDefault

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaTypeQualifierDefault_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierDefault))
#define JavaxAnnotationMetaTypeQualifierDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

@protocol JavaxAnnotationMetaTypeQualifierDefault < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationMetaTypeQualifierDefault : NSObject < JavaxAnnotationMetaTypeQualifierDefault > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierDefault)

FOUNDATION_EXPORT id<JavaxAnnotationMetaTypeQualifierDefault> create_JavaxAnnotationMetaTypeQualifierDefault(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierDefault)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault")
