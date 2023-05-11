
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO || defined(INCLUDE_DXAlertsRequestTO))
#define DXAlertsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXAlertsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertsRequestTO *)change;

- (DXAlertsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXAlertsRequestTO)

inline DXAlertsRequestTO *DXAlertsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertsRequestTO *DXAlertsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertsRequestTO, EMPTY, DXAlertsRequestTO *)

FOUNDATION_EXPORT void DXAlertsRequestTO_init(DXAlertsRequestTO *self);

FOUNDATION_EXPORT DXAlertsRequestTO *new_DXAlertsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertsRequestTO *create_DXAlertsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO DXAlertsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertsRequestTO")
