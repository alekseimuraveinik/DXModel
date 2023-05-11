
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserSettingWrapperTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO || defined(INCLUDE_DXUserSettingWrapperTO))
#define DXUserSettingWrapperTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXUserSettingsEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXUserSettingWrapperTO : PSBaseTransferObject
@property (readonly, class, strong) DXUserSettingWrapperTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUserSettingWrapperTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXUserSettingWrapperTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXUserSettingWrapperTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (id<PSTransferObject>)getData;

- (DXUserSettingsEnum *)getUserSettingsEnum;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDataWithPSTransferObject:(id<PSTransferObject>)data;

- (void)setUserSettingsEnumWithDXUserSettingsEnum:(DXUserSettingsEnum *)userSettingsEnum;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXUserSettingWrapperTO)

inline DXUserSettingWrapperTO *DXUserSettingWrapperTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserSettingWrapperTO *DXUserSettingWrapperTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserSettingWrapperTO, EMPTY, DXUserSettingWrapperTO *)

FOUNDATION_EXPORT void DXUserSettingWrapperTO_init(DXUserSettingWrapperTO *self);

FOUNDATION_EXPORT DXUserSettingWrapperTO *new_DXUserSettingWrapperTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserSettingWrapperTO *create_DXUserSettingWrapperTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserSettingWrapperTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO DXUserSettingWrapperTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingWrapperTO")
