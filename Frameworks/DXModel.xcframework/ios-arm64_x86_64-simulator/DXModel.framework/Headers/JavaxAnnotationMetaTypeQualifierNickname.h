
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierNickname
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierNickname

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaTypeQualifierNickname_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierNickname))
#define JavaxAnnotationMetaTypeQualifierNickname_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationMetaTypeQualifierNickname < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationMetaTypeQualifierNickname : NSObject < JavaxAnnotationMetaTypeQualifierNickname >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierNickname)

FOUNDATION_EXPORT id<JavaxAnnotationMetaTypeQualifierNickname> create_JavaxAnnotationMetaTypeQualifierNickname(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierNickname)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierNickname")
