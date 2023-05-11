
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBaseSerializationProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor || defined(INCLUDE_PSBaseSerializationProcessor))
#define PSBaseSerializationProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor 1
#define INCLUDE_PSSerializationProcessor 1
#include "PSSerializationProcessor.h"

@class PSSerializationProcessor_ValidationResult;
@protocol PSClassFactoryCreator;

@interface PSBaseSerializationProcessor : NSObject < PSSerializationProcessor >

#pragma mark Public

- (jint)chooseVersionWithInt:(jint)version_;

- (PSSerializationProcessor_ValidationResult *)isSupportedWithInt:(jint)version_
                                                     withNSString:(NSString *)checksum;

#pragma mark Protected

- (instancetype __nonnull)initWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator
                                            withBoolean:(jboolean)allVersions;

- (id<PSClassFactoryCreator>)creator;

@end

J2OBJC_EMPTY_STATIC_INIT(PSBaseSerializationProcessor)

FOUNDATION_EXPORT void PSBaseSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(PSBaseSerializationProcessor *self, id<PSClassFactoryCreator> creator, jboolean allVersions);

J2OBJC_TYPE_LITERAL_HEADER(PSBaseSerializationProcessor)

@compatibility_alias ComDevexpertsPipestoneApiCustomBaseSerializationProcessor PSBaseSerializationProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor")
