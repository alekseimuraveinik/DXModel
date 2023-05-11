
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDefaultSerializationProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor || defined(INCLUDE_PSDefaultSerializationProcessor))
#define PSDefaultSerializationProcessor_

#define RESTRICT_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor 1
#define INCLUDE_PSBaseSerializationProcessor 1
#include "PSBaseSerializationProcessor.h"

@protocol PSClassFactoryConnection;
@protocol PSClassFactoryCreator;
@protocol PSConnection;

@interface PSDefaultSerializationProcessor : PSBaseSerializationProcessor

#pragma mark Public

- (instancetype __nonnull)initWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator;

- (instancetype __nonnull)initWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator
                                            withBoolean:(jboolean)allVersions;

- (id<PSClassFactoryConnection>)processWithPSConnection:(id<PSConnection>)connection
                                                withInt:(jint)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(PSDefaultSerializationProcessor)

FOUNDATION_EXPORT void PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_(PSDefaultSerializationProcessor *self, id<PSClassFactoryCreator> creator);

FOUNDATION_EXPORT PSDefaultSerializationProcessor *new_PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_(id<PSClassFactoryCreator> creator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDefaultSerializationProcessor *create_PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_(id<PSClassFactoryCreator> creator);

FOUNDATION_EXPORT void PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(PSDefaultSerializationProcessor *self, id<PSClassFactoryCreator> creator, jboolean allVersions);

FOUNDATION_EXPORT PSDefaultSerializationProcessor *new_PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(id<PSClassFactoryCreator> creator, jboolean allVersions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDefaultSerializationProcessor *create_PSDefaultSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(id<PSClassFactoryCreator> creator, jboolean allVersions);

J2OBJC_TYPE_LITERAL_HEADER(PSDefaultSerializationProcessor)

@compatibility_alias ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor PSDefaultSerializationProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDefaultSerializationProcessor")
