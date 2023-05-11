
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsObjectiveCName
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsObjectiveCName

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcAnnotationsObjectiveCName_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName || defined(INCLUDE_ComGoogleJ2objcAnnotationsObjectiveCName))
#define ComGoogleJ2objcAnnotationsObjectiveCName_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol ComGoogleJ2objcAnnotationsObjectiveCName < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleJ2objcAnnotationsObjectiveCName : NSObject < ComGoogleJ2objcAnnotationsObjectiveCName > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsObjectiveCName)

FOUNDATION_EXPORT id<ComGoogleJ2objcAnnotationsObjectiveCName> create_ComGoogleJ2objcAnnotationsObjectiveCName(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsObjectiveCName)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName")
