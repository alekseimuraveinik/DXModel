
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolClientInfo
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolClientInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientInfo_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo || defined(INCLUDE_PSClientInfo))
#define PSClientInfo_

@class PSCompactInputStream;
@class PSCompactOutputStream;

@interface PSClientInfo : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)applicationId
                              withNSString:(NSString *)applicationVersion
                              withNSString:(NSString *)osName
                              withNSString:(NSString *)osVersion
                              withNSString:(NSString *)deviceModel
                              withNSString:(NSString *)deviceVendor
                              withNSString:(NSString *)misc;

- (jboolean)isEqual:(id)o;

- (NSString *)getApplicationId;

- (NSString *)getApplicationVersion;

- (NSString *)getDeviceModel;

- (NSString *)getDeviceVendor;

- (NSString *)getMisc;

- (NSString *)getOsName;

- (NSString *)getOsVersion;

- (NSUInteger)hash;

+ (PSClientInfo *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientInfo)

FOUNDATION_EXPORT void PSClientInfo_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_(PSClientInfo *self, NSString *applicationId, NSString *applicationVersion, NSString *osName, NSString *osVersion, NSString *deviceModel, NSString *deviceVendor, NSString *misc);

FOUNDATION_EXPORT PSClientInfo *new_PSClientInfo_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_(NSString *applicationId, NSString *applicationVersion, NSString *osName, NSString *osVersion, NSString *deviceModel, NSString *deviceVendor, NSString *misc) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientInfo *create_PSClientInfo_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_(NSString *applicationId, NSString *applicationVersion, NSString *osName, NSString *osVersion, NSString *deviceModel, NSString *deviceVendor, NSString *misc);

FOUNDATION_EXPORT PSClientInfo *PSClientInfo_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSClientInfo)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolClientInfo PSClientInfo;

#endif

#if !defined (PSClientInfo_Builder_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo || defined(INCLUDE_PSClientInfo_Builder))
#define PSClientInfo_Builder_

@class PSClientInfo;

@interface PSClientInfo_Builder : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (PSClientInfo_Builder *)andMoreWithNSString:(NSString *)additionalInfo;

- (PSClientInfo_Builder *)applicationWithNSString:(NSString *)id_
                                     withNSString:(NSString *)version_;

- (PSClientInfo *)build;

- (PSClientInfo_Builder *)deviceWithNSString:(NSString *)vendor
                                withNSString:(NSString *)model;

- (PSClientInfo_Builder *)osWithNSString:(NSString *)name
                            withNSString:(NSString *)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientInfo_Builder)

FOUNDATION_EXPORT void PSClientInfo_Builder_init(PSClientInfo_Builder *self);

FOUNDATION_EXPORT PSClientInfo_Builder *new_PSClientInfo_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientInfo_Builder *create_PSClientInfo_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSClientInfo_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolClientInfo")
