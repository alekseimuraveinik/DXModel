
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTO || defined(INCLUDE_DXAlertTO))
#define DXAlertTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXAlertStatusEnum;
@class DXKeyValuesTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAlertTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (jlong)getAlertId;

- (DXAlertStatusEnum *)getAlertStatus;

- (NSString *)getCondition;

- (jlong)getCreationTimestamp;

- (NSString *)getCurrentContext;

- (NSString *)getDescription;

- (jlong)getExpirationTimestamp;

- (PSListTO *)getNotificationTypes;

- (DXKeyValuesTO *)getTriggerContext;

- (jlong)getTriggeringTimestamp;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setAlertIdWithLong:(jlong)alertId;

- (void)setAlertStatusWithDXAlertStatusEnum:(DXAlertStatusEnum *)alertStatus;

- (void)setConditionWithNSString:(NSString *)condition;

- (void)setCreationTimestampWithLong:(jlong)creationTimestamp;

- (void)setCurrentContextWithNSString:(NSString *)currentContext;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setExpirationTimestampWithLong:(jlong)expirationTimestamp;

- (void)setNotificationTypesWithPSListTO:(PSListTO *)notificationTypes;

- (void)setTriggerContextWithDXKeyValuesTO:(DXKeyValuesTO *)triggerContext;

- (void)setTriggeringTimestampWithLong:(jlong)triggeringTimestamp;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertTO)

inline DXAlertTO *DXAlertTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertTO *DXAlertTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertTO, EMPTY, DXAlertTO *)

FOUNDATION_EXPORT void DXAlertTO_init(DXAlertTO *self);

FOUNDATION_EXPORT DXAlertTO *new_DXAlertTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertTO *create_DXAlertTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertTO DXAlertTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTO")
