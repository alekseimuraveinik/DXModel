
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionConfiguratorImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl || defined(INCLUDE_PSConnectionConfiguratorImpl))
#define PSConnectionConfiguratorImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator 1
#define INCLUDE_PSConnectionConfigurator 1
#include "PSConnectionConfigurator.h"

@class PSAcceptedOptions;
@protocol PSClassFactoryConnection;
@protocol PSConfiguration;
@protocol PSConnection;

@interface PSConnectionConfiguratorImpl : NSObject < PSConnectionConfigurator >

#pragma mark Public

- (instancetype __nonnull)initWithPSConfiguration:(id<PSConfiguration>)configuration;

- (id<PSClassFactoryConnection>)applyOptionsWithPSConnection:(id<PSConnection>)connection
                                       withPSAcceptedOptions:(PSAcceptedOptions *)options;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionConfiguratorImpl)

FOUNDATION_EXPORT void PSConnectionConfiguratorImpl_initWithPSConfiguration_(PSConnectionConfiguratorImpl *self, id<PSConfiguration> configuration);

FOUNDATION_EXPORT PSConnectionConfiguratorImpl *new_PSConnectionConfiguratorImpl_initWithPSConfiguration_(id<PSConfiguration> configuration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnectionConfiguratorImpl *create_PSConnectionConfiguratorImpl_initWithPSConfiguration_(id<PSConfiguration> configuration);

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionConfiguratorImpl)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl PSConnectionConfiguratorImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorImpl")
