
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertEventTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO || defined(INCLUDE_DXAlertEventTO))
#define DXAlertEventTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO 1
#define INCLUDE_DXEventTO 1
#include "DXEventTO.h"

@class DXAlertEventTypeEnum;
@class DXAlertTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXAlertEventTO : DXEventTO
@property (readonly, class, strong) DXAlertEventTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertEventTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertEventTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertEventTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAlertTO *)getAlertTO;

- (PSErrorTO *)getErrorTO;

- (DXAlertEventTypeEnum *)getEventSubType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAlertTOWithDXAlertTO:(DXAlertTO *)alertTO;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (void)setEventSubTypeWithDXAlertEventTypeEnum:(DXAlertEventTypeEnum *)eventSubType;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertEventTO)

inline DXAlertEventTO *DXAlertEventTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertEventTO *DXAlertEventTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertEventTO, EMPTY, DXAlertEventTO *)

FOUNDATION_EXPORT void DXAlertEventTO_init(DXAlertEventTO *self);

FOUNDATION_EXPORT DXAlertEventTO *new_DXAlertEventTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertEventTO *create_DXAlertEventTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertEventTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO DXAlertEventTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTO")
