
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReferenceAwareSerializationProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor || defined(INCLUDE_PSReferenceAwareSerializationProcessor))
#define PSReferenceAwareSerializationProcessor_

#define RESTRICT_ComDevexpertsPipestoneApiCustomBaseSerializationProcessor 1
#define INCLUDE_PSBaseSerializationProcessor 1
#include "PSBaseSerializationProcessor.h"

@protocol PSClassFactoryConnection;
@protocol PSClassFactoryCreator;
@protocol PSConnection;

@interface PSReferenceAwareSerializationProcessor : PSBaseSerializationProcessor

#pragma mark Public

- (instancetype __nonnull)initWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator;

- (instancetype __nonnull)initWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator
                                            withBoolean:(jboolean)allVersions;

- (id<PSClassFactoryConnection>)processWithPSConnection:(id<PSConnection>)connection
                                                withInt:(jint)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(PSReferenceAwareSerializationProcessor)

FOUNDATION_EXPORT void PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_(PSReferenceAwareSerializationProcessor *self, id<PSClassFactoryCreator> creator);

FOUNDATION_EXPORT PSReferenceAwareSerializationProcessor *new_PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_(id<PSClassFactoryCreator> creator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceAwareSerializationProcessor *create_PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_(id<PSClassFactoryCreator> creator);

FOUNDATION_EXPORT void PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(PSReferenceAwareSerializationProcessor *self, id<PSClassFactoryCreator> creator, jboolean allVersions);

FOUNDATION_EXPORT PSReferenceAwareSerializationProcessor *new_PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(id<PSClassFactoryCreator> creator, jboolean allVersions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceAwareSerializationProcessor *create_PSReferenceAwareSerializationProcessor_initWithPSClassFactoryCreator_withBoolean_(id<PSClassFactoryCreator> creator, jboolean allVersions);

J2OBJC_TYPE_LITERAL_HEADER(PSReferenceAwareSerializationProcessor)

@compatibility_alias ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor PSReferenceAwareSerializationProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareSerializationProcessor")
