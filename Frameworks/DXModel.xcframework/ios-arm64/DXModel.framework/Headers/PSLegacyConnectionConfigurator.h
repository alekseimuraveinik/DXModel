
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLegacyConnectionConfigurator_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator || defined(INCLUDE_PSLegacyConnectionConfigurator))
#define PSLegacyConnectionConfigurator_

#define RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator 1
#define INCLUDE_PSConnectionConfigurator 1
#include "PSConnectionConfigurator.h"

@class PSAcceptedOptions;
@protocol PSClassFactoryConnection;
@protocol PSConfiguration;
@protocol PSConnection;

@interface PSLegacyConnectionConfigurator : NSObject < PSConnectionConfigurator >

#pragma mark Public

- (instancetype __nonnull)initWithPSConfiguration:(id<PSConfiguration>)configuration;

- (id<PSClassFactoryConnection>)applyOptionsWithPSConnection:(id<PSConnection>)connection
                                       withPSAcceptedOptions:(PSAcceptedOptions *)options;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSLegacyConnectionConfigurator)

FOUNDATION_EXPORT void PSLegacyConnectionConfigurator_initWithPSConfiguration_(PSLegacyConnectionConfigurator *self, id<PSConfiguration> configuration);

FOUNDATION_EXPORT PSLegacyConnectionConfigurator *new_PSLegacyConnectionConfigurator_initWithPSConfiguration_(id<PSConfiguration> configuration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSLegacyConnectionConfigurator *create_PSLegacyConnectionConfigurator_initWithPSConfiguration_(id<PSConfiguration> configuration);

J2OBJC_TYPE_LITERAL_HEADER(PSLegacyConnectionConfigurator)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator PSLegacyConnectionConfigurator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolLegacyConnectionConfigurator")
