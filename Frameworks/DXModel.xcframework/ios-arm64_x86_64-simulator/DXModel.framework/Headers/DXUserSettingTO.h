
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserSettingTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO || defined(INCLUDE_DXUserSettingTO))
#define DXUserSettingTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXUserSettingsEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXUserSettingTO : PSBaseTransferObject
@property (readonly, class, strong) DXUserSettingTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUserSettingTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXUserSettingTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXUserSettingTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXUserSettingsEnum *)getSetting;

- (NSString *)getValue;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setValueWithNSString:(NSString *)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXUserSettingTO)

inline DXUserSettingTO *DXUserSettingTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserSettingTO *DXUserSettingTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserSettingTO, EMPTY, DXUserSettingTO *)

FOUNDATION_EXPORT void DXUserSettingTO_init(DXUserSettingTO *self);

FOUNDATION_EXPORT DXUserSettingTO *new_DXUserSettingTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserSettingTO *create_DXUserSettingTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserSettingTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUserSettingTO DXUserSettingTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingTO")
