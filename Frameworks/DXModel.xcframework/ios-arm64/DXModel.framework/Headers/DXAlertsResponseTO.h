
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO || defined(INCLUDE_DXAlertsResponseTO))
#define DXAlertsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAlertsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getActiveAlerts;

- (PSListTO *)getAllAlerts;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setActiveAlertsWithPSListTO:(PSListTO *)activeAlerts;

- (void)setAllAlertsWithPSListTO:(PSListTO *)allAlerts;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertsResponseTO)

inline DXAlertsResponseTO *DXAlertsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertsResponseTO *DXAlertsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertsResponseTO, EMPTY, DXAlertsResponseTO *)

FOUNDATION_EXPORT void DXAlertsResponseTO_init(DXAlertsResponseTO *self);

FOUNDATION_EXPORT DXAlertsResponseTO *new_DXAlertsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertsResponseTO *create_DXAlertsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO DXAlertsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsResponseTO")
