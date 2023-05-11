
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPushNotificationSettingTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO || defined(INCLUDE_DXPushNotificationSettingTO))
#define DXPushNotificationSettingTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO 1
#define INCLUDE_DXUserSettingTO 1
#include "DXUserSettingTO.h"

@class DXPlatformEnum;
@class DXUserSettingsEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPushNotificationSettingTO : DXUserSettingTO
@property (readonly, class, strong) DXPushNotificationSettingTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPushNotificationSettingTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPushNotificationSettingTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPushNotificationSettingTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getDeviceId;

- (DXPlatformEnum *)getPlatform;

- (DXUserSettingsEnum *)getSetting;

- (NSString *)getToken;

- (NSString *)getTopic;

- (NSUInteger)hash;

- (jboolean)isRegister;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDeviceIdWithNSString:(NSString *)deviceId;

- (void)setPlatformWithDXPlatformEnum:(DXPlatformEnum *)platform;

- (void)setRegisterWithBoolean:(jboolean)register_;

- (void)setTokenWithNSString:(NSString *)token;

- (void)setTopicWithNSString:(NSString *)topic;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPushNotificationSettingTO)

inline DXPushNotificationSettingTO *DXPushNotificationSettingTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPushNotificationSettingTO *DXPushNotificationSettingTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPushNotificationSettingTO, EMPTY, DXPushNotificationSettingTO *)

FOUNDATION_EXPORT void DXPushNotificationSettingTO_init(DXPushNotificationSettingTO *self);

FOUNDATION_EXPORT DXPushNotificationSettingTO *new_DXPushNotificationSettingTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPushNotificationSettingTO *create_DXPushNotificationSettingTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPushNotificationSettingTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO DXPushNotificationSettingTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPushNotificationSettingTO")
